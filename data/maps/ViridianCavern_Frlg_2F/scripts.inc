# 1 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 2 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Frlg_2F_MapScripts::
# 3 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 5 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern2F_EventScript_Doug::
# 6 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianCavern_Text_DougIntro, ViridianCavern_Text_DougDefeat
# 7 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	msgbox ViridianCavern_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	end
# 9 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 10 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern2F_EventScript_TrainerTips3::
# 11 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	msgbox ViridianCavern_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
# 12 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	end
# 13 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 14 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 15 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern2F_EventScript_Charlie::
# 16 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianCavern_Text_CharlieIntro, ViridianCavern_Text_CharlieDefeat
# 17 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	msgbox ViridianCavern_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	end
# 19 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 20 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_CharlieIntro::
# 21 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "Did you know that POKéMON evolve?$"
# 22 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 23 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_CharlieDefeat::
# 24 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "Oh!\n"
# 25 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "I lost!$"
# 26 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 27 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_CharliePostBattle::
# 28 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "ROCK POKéMON are sturdy.\n"
# 29 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "They're a lot of fun!$"
# 30 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 31 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_DougIntro::
# 32 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "Yo!\n"
# 33 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "You can't jam out if you're a\l"
# 34 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "POKéMON TRAINER!$"
# 35 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 36 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_DougDefeat::
# 37 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "Huh?\n"
# 38 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "I ran out of POKéMON!$"
# 39 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 40 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_DougPostBattle::
# 41 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "That totally stinks! I'm going to\n"
# 42 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "catch some stronger ones!$"
# 43 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"

# 44 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
ViridianCavern_Text_CantCatchOwnedMons::
# 45 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "TRAINER TIPS\p"
# 46 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "You can't catch a POKéMON that\n"
# 47 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "belongs to someone else.\p"
# 48 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "Throw POKé BALLS only at wild\n"
# 49 "data/maps/ViridianCavern_Frlg_2F/scripts.pory"
	.string "POKéMON to catch them!$"
