import os
import json

map_dir = 'data/maps'

skip_maps = [
    'BattleFrontier_BattleArenaBattleRoom',
    'BattleFrontier_BattleDomeBattleRoom',
    'BattleFrontier_BattleFactoryBattleRoom',
    'BattleFrontier_BattlePikeBattleRoom',
    'BattleFrontier_BattlePikeRoomNormal',
    'BattleFrontier_BattlePalaceBattleRoom',
    'BattleFrontier_BattleTowerBattleRoom',
    'BattleFrontier_BattleTentBattleRoom',
    'BattleFrontier_BattlePyramidBattleRoom',
    'BattleFrontier_BattlePyramidFloor',
    'BattleFrontier_BattlePyramidTop',
    'SlateportCity_BattleTentBattleRoom'
]

def check_trainer_line(line):
    if "trainerbattle" in line and "dofacilitytrainerbattle" not in line and line.strip()[-1:] != ":":
        return True
    return False

def parse_trainer_line(line):
    trainer = {}
    trainerline = line.split(", ")
    macro_constant = trainerline[0].split(" ")
    trainer["macro"] = macro_constant[0].strip()
    trainer["constant"] = macro_constant[1].strip()
    if trainer["macro"] == "trainerbattle_no_intro":
        trainer["defeat_pointer"] = trainerline[1].strip()
    else:
        trainer["intro_pointer"] = trainerline[1].strip()
        trainer["defeat_pointer"] = trainerline[2].strip()
    if len(trainerline) > 3:
        for i in range(3, len(trainerline)):
            if "double" in trainer["macro"] and "notenough" in trainerline[i].lower():
                trainer["not_enough_mons_pointer"] = trainerline[i].strip()
            elif "double" in trainer["macro"] and "needtwo" in trainerline[i].lower():
                trainer["not_enough_mons_pointer"] = trainerline[i].strip()
            elif "EventScript" in trainerline[i] and "Register" in trainerline[i]:
                trainer["register_event_pointer"] = trainerline[i].strip()
            elif trainerline[i].strip() == "NO_MUSIC":
                if "flags" in trainer:
                    trainer["flags"].append("NO_MUSIC")
                else:
                    trainer["flags"] = ["NO_MUSIC"]
            elif "_EventScript_" in trainerline[i]:
                trainer["post_battle_event_pointer"] = trainerline[i].strip()
            elif "rival" in trainer["macro"] and "victory" in trainerline[i].lower():
                trainer["victory_event_pointer"] = trainerline[i].strip()
            elif trainerline[i].strip() == "CeladonCity_GameCorner_Text_DefeatedGrunt":
                trainer["post_battle_event_pointer"] = trainerline[i].strip()
            else:
                trainer["other_arg_" + str(i-2)] = trainerline[i].strip()
    return trainer

  

def extract_trainerscript_data():
    trainers = {}
    trainer_text = []

    for dirpath, dirnames, filenames in os.walk(map_dir):
        if dirpath.split('/')[-1] in skip_maps:
            continue
        for filename in filenames:
            if filename.endswith(".pory"):
                filepath = os.path.join(dirpath, filename)

                try:
                    with open(filepath, "r", encoding="utf-8", errors="ignore") as f:
                        in_trainer = False
                        map = ''
                        trainer = {}
                        trainer_text_pointers = []
                        text_block = {}
                        in_text_block = False
                        for lineno, line in enumerate(f, 1):
                            if "MapScripts::" in line:
                                map = line.split("_MapScripts::")[0]
                            if check_trainer_line(line):
                                in_trainer = True
                                trainer = parse_trainer_line(line)
                                trainer["map"] = map
                                if "intro_pointer" in trainer:
                                    trainer_text_pointers.append(trainer["intro_pointer"])
                                if "defeat_pointer" in trainer:
                                    trainer_text_pointers.append(trainer["defeat_pointer"])
                            if "msgbox" in line and in_trainer:
                                pointer = line.split("msgbox ")[1].split(",")[0].strip()
                                trainer_text_pointers.append(pointer)
                            if "end" in line and in_trainer:
                                in_trainer = False
                                new_trainer = trainer.copy()
                                if new_trainer["constant"] not in trainers:
                                    trainers[new_trainer["constant"]] = {
                                        "battles": []
                                    }
                                trainers[new_trainer["constant"]]["battles"].append(new_trainer)
                                trainer = {}
                            if "_Text_" in line and line.strip()[-1:] == ":":
                                text_pointer = line.replace(":","").strip()
                                if text_pointer in trainer_text_pointers:
                                    in_text_block = True
                                    text_block["pointer"] = text_pointer
                                    text_block["text"] = []
                            if ".string" in line and in_text_block:
                                text = line.split(".string")[1]
                                if '$"' in line:
                                    text = text.replace('$"', '')
                                    in_text_block = False
                                text = text.replace('"', '')
                                text_block['text'].append(text.strip())
                                if in_text_block == False:
                                    trainer_text.append({"pointer": text_block["pointer"], "text": text_block["text"]})
                                    text_block = {}

                                
                except Exception as e:
                    print(f"Error reading {filepath}: {e}")
                
    with open('tools/randomizer_tools/trainers.json', 'w') as f:
        json.dump(trainers , f, indent=4)

    with open('tools/randomizer_tools/trainer_text.json', 'w') as f:
        json.dump(trainer_text , f, indent=4)

extract_trainerscript_data()