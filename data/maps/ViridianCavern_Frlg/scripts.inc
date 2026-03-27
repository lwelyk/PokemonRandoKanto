# 1 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 2 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Frlg_MapScripts::
# 3 "data/maps/ViridianCavern_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCavern_OnTransition
# 4 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 6 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_OnTransition::
# 7 "data/maps/ViridianCavern_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
# 8 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 9 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 10 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_Youngster::
# 11 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_FriendsItchingToBattle, MSGBOX_NPC
# 12 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 13 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 14 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_Boy::
# 15 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_RanOutOfPokeBalls, MSGBOX_NPC
# 16 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 17 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 18 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_TrainerTips1::
# 19 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
# 20 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 21 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 22 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_TrainerTips2::
# 23 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_UseAntidoteForPoison, MSGBOX_SIGN
# 24 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 25 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 26 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_TrainerTips4::
# 27 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_CantCatchOwnedMons, MSGBOX_SIGN
# 28 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 29 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 30 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_TrainerTips5::
# 31 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
# 32 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 33 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 34 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_ExitSign::
# 35 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_LeavingViridianCavern, MSGBOX_SIGN
# 36 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 37 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 38 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_Rick::
# 39 "data/maps/ViridianCavern_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianCavern_Text_RickIntro, ViridianCavern_Text_RickDefeat
# 40 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 42 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 43 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_Sammy::
# 44 "data/maps/ViridianCavern_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianCavern_Text_SammyIntro, ViridianCavern_Text_SammyDefeat
# 45 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 47 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 48 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_EventScript_Anthony::
# 49 "data/maps/ViridianCavern_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianCavern_Text_AnthonyIntro, ViridianCavern_Text_AnthonyDefeat
# 50 "data/maps/ViridianCavern_Frlg/scripts.pory"
	msgbox ViridianCavern_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/ViridianCavern_Frlg/scripts.pory"
	end
# 52 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 53 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_FriendsItchingToBattle::
# 54 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "I came here with some friends to\n"
# 55 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "catch us some ROCK POKéMON!\p"
# 56 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "They're all itching to get into\n"
# 57 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "some POKéMON battles!$"
# 58 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 59 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_RickIntro::
# 60 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Hey! You have POKéMON!\n"
# 61 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Come on!\l"
# 62 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Let's battle 'em!$"
# 63 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 64 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_RickDefeat::
# 65 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "No!\nZUBAT can't hack it!$"
# 66 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 67 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_RickPostBattle::
# 68 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Ssh! You'll scare the bats away.\n"
# 69 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Another time, okay?$"
# 70 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 71 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_SammyIntro::
# 72 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Hey, wait up!\n"
# 73 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "What's the hurry? Why the rush?$"
# 74 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 75 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_SammyDefeat::
# 76 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "I give!\n"
# 77 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "You're good at this!$"
# 78 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 79 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_SammyPostBattle::
# 80 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Sometimes, you can find stuff on\n"
# 81 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "the ground.\p"
# 82 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "I'm looking for the stuff I\n"
# 83 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "dropped. Can you help me?$"
# 84 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 85 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_AnthonyIntro::
# 86 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "I might be little, but I won't like\n"
# 87 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "it if you go easy on me!$"
# 88 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 89 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_AnthonyDefeat::
# 90 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Oh, boo.\n"
# 91 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Nothing went right.$"
# 92 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 93 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_AnthonyPostBattle::
# 94 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "I lost some of my allowance…$"
# 95 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 96 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_RanOutOfPokeBalls::
# 97 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "I was throwing POKé BALLS to\n"
# 98 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "catch POKéMON, and I ran out.\p"
# 99 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "That's why you can never have too\n"
# 100 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "many POKé BALLS.$"
# 101 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 102 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_AvoidGrassyAreasWhenWeak::
# 103 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 104 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "If your POKéMON are weak and you\n"
# 105 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "want to avoid battles, stay away\l"
# 106 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "from grassy areas!$"
# 107 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 108 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_UseAntidoteForPoison::
# 109 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "For poison, use ANTIDOTE!\n"
# 110 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Get it at POKéMON MARTS!$"
# 111 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 112 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_ContactOakViaPCToRatePokedex::
# 113 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 114 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Contact PROF. OAK via a PC to\n"
# 115 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "get your POKéDEX evaluated!$"
# 116 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 117 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_WeakenMonsBeforeCapture::
# 118 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 119 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "Weaken POKéMON before attempting\n"
# 120 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "capture!\p"
# 121 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "When healthy, they may escape!$"
# 122 "data/maps/ViridianCavern_Frlg/scripts.pory"

# 123 "data/maps/ViridianCavern_Frlg/scripts.pory"
ViridianCavern_Text_LeavingViridianCavern::
# 124 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "LEAVING VIRIDIAN CAVERN\n"
# 125 "data/maps/ViridianCavern_Frlg/scripts.pory"
	.string "PEWTER CITY AHEAD$"
