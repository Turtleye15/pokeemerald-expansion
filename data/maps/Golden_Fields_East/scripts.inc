Golden_Fields_East_MapScripts::
# 2 "data/maps/Golden_Fields_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Golden_Fields_OnTransition
	.byte 0


Golden_Fields_OnTransition::
# 6 "data/maps/Golden_Fields_East/scripts.pory"
	call Update_DaniaLocation
	return


Golden_Fields_TrainerAriana::
# 10 "data/maps/Golden_Fields_East/scripts.pory"
	trainerbattle_single TRAINER_ARIANA, Golden_Fields_ArianaIntro, Golden_Fields_ArianaOutro
# 11 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_ArianaPostBattle, MSGBOX_NPC
	end


Golden_Fields_Sign1::
# 29 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_Sign1_Text_0, MSGBOX_SIGN
	return


Golden_Fields_Sign1_Text_0:
# 29 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Farm placeholder text$"

Golden_Fields_ArianaIntro::
# 15 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Hey there! Let's have a battle!$"

Golden_Fields_ArianaOutro::
# 19 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Dang, not strong enough$"

Golden_Fields_ArianaPostBattle::
# 23 "data/maps/Golden_Fields_East/scripts.pory"
	.string "'t was fun though!$"
