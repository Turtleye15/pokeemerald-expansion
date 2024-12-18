Golden_Fields_East_MapScripts::
# 2 "data/maps/Golden_Fields_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Golden_Fields_OnTransition
	.byte 0


Golden_Fields_OnTransition::
# 6 "data/maps/Golden_Fields_East/scripts.pory"
	call Update_DaniaLocation
	return


Golden_Fields_Sign1::
# 13 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_Sign1_Text_0, MSGBOX_SIGN
	return


Golden_Fields_TrainerAriana::
# 18 "data/maps/Golden_Fields_East/scripts.pory"
	trainerbattle_single TRAINER_ARIANA, Golden_Fields_ArianaIntro, Golden_Fields_ArianaOutro
# 19 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_ArianaPostBattle, MSGBOX_NPC
	end


Golden_Fields_TrainerRory::
# 36 "data/maps/Golden_Fields_East/scripts.pory"
	trainerbattle_single TRAINER_RORY, Golden_Fields_RoryIntro, Golden_Fields_RoryOutro
# 37 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_RoryPostBattle, MSGBOX_NPC
	end


Golden_Fields_TrainerReuben::
# 54 "data/maps/Golden_Fields_East/scripts.pory"
	trainerbattle_single TRAINER_REUBEN, Golden_Fields_ReubenIntro, Golden_Fields_ReubenOutro
# 55 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_ReubenPostBattle, MSGBOX_NPC
	end


Golden_Fields_TrainerRenaud::
# 72 "data/maps/Golden_Fields_East/scripts.pory"
	trainerbattle_single TRAINER_RENAUD, Golden_Fields_RenaudIntro, Golden_Fields_RenaudOutro
# 73 "data/maps/Golden_Fields_East/scripts.pory"
	msgbox Golden_Fields_RenaudPostBattle, MSGBOX_NPC
	end


Golden_Fields_Sign1_Text_0:
# 13 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Farm placeholder text$"

Golden_Fields_ArianaIntro::
# 23 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Hey there! Let's have a battle!$"

Golden_Fields_ArianaOutro::
# 27 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Dang, not strong enough$"

Golden_Fields_ArianaPostBattle::
# 31 "data/maps/Golden_Fields_East/scripts.pory"
	.string "'t was fun though!$"

Golden_Fields_RoryIntro::
# 41 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Hey there! Let's have a battle!$"

Golden_Fields_RoryOutro::
# 45 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Dang, not strong enough$"

Golden_Fields_RoryPostBattle::
# 49 "data/maps/Golden_Fields_East/scripts.pory"
	.string "'t was fun though!$"

Golden_Fields_ReubenIntro::
# 59 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Hey there! Let's have a battle!$"

Golden_Fields_ReubenOutro::
# 63 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Dang, not strong enough$"

Golden_Fields_ReubenPostBattle::
# 67 "data/maps/Golden_Fields_East/scripts.pory"
	.string "'t was fun though!$"

Golden_Fields_RenaudIntro::
# 77 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Hey there! Let's have a battle!$"

Golden_Fields_RenaudOutro::
# 81 "data/maps/Golden_Fields_East/scripts.pory"
	.string "Dang, not strong enough$"

Golden_Fields_RenaudPostBattle::
# 85 "data/maps/Golden_Fields_East/scripts.pory"
	.string "'t was fun though!$"
