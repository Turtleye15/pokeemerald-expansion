White_Cliffs_MapScripts::
# 2 "data/maps/White_Cliffs/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, White_Cliffs_OnTransition
	.byte 0


White_Cliffs_OnTransition::
# 6 "data/maps/White_Cliffs/scripts.pory"
	call Update_DaniaLocation
# 7 "data/maps/White_Cliffs/scripts.pory"
	call Update_CecileLocation
	return


White_Cliffs_Dania_Statue::
# 15 "data/maps/White_Cliffs/scripts.pory"
	lock
# 16 "data/maps/White_Cliffs/scripts.pory"
	faceplayer
# 17 "data/maps/White_Cliffs/scripts.pory"
	speakername White_Cliffs_Dania_Statue_Text_0
# 18 "data/maps/White_Cliffs/scripts.pory"
	msgbox White_Cliffs_Dania_Memorial
# 19 "data/maps/White_Cliffs/scripts.pory"
	waitmessage
# 20 "data/maps/White_Cliffs/scripts.pory"
	applymovement 1, White_Cliffs_Dania_Statue_Movement_0
# 21 "data/maps/White_Cliffs/scripts.pory"
	waitmovement 1
# 22 "data/maps/White_Cliffs/scripts.pory"
	release
	return


White_Cliffs_Cecile_Waiting::
# 27 "data/maps/White_Cliffs/scripts.pory"
	lock
# 28 "data/maps/White_Cliffs/scripts.pory"
	speakername White_Cliffs_Cecile_Waiting_Text_0
# 29 "data/maps/White_Cliffs/scripts.pory"
	msgbox White_Cliffs_Cecile_Waiting_Text_1
# 30 "data/maps/White_Cliffs/scripts.pory"
	trainerbattle_single TRAINER_CECILE_1, White_Cliffs_CecileIntro, White_Cliffs_CecileOutro, White_Cliffs_CecileAfterBattle
	return


White_Cliffs_CecileAfterBattle::
# 42 "data/maps/White_Cliffs/scripts.pory"
	msgbox White_Cliffs_CecileAfterBattle_Text_0
# 43 "data/maps/White_Cliffs/scripts.pory"
	closemessage
# 44 "data/maps/White_Cliffs/scripts.pory"
	release
	end


White_Cliff_Memorial::
# 53 "data/maps/White_Cliffs/scripts.pory"
	msgbox White_Cliff_Memorial_Text_0, MSGBOX_SIGN
	return


Golden_Fields_TrainerLinnet::
# 58 "data/maps/White_Cliffs/scripts.pory"
	trainerbattle_single TRAINER_LINNET, Golden_Fields_LinnetIntro, Golden_Fields_LinnetOutro
# 59 "data/maps/White_Cliffs/scripts.pory"
	msgbox Golden_Fields_LinnetPostBattle, MSGBOX_NPC
	end


# 20 "data/maps/White_Cliffs/scripts.pory"
White_Cliffs_Dania_Statue_Movement_0:
# 20 "data/maps/White_Cliffs/scripts.pory"
	face_up
	step_end

White_Cliffs_Dania_Statue_Text_0:
# 17 "data/maps/White_Cliffs/scripts.pory"
	.string "Dania$"

White_Cliffs_Cecile_Waiting_Text_0:
# 28 "data/maps/White_Cliffs/scripts.pory"
	.string "Cecile$"

White_Cliffs_Cecile_Waiting_Text_1:
# 29 "data/maps/White_Cliffs/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}I have a little challenge\nfor you first$"

White_Cliffs_CecileAfterBattle_Text_0:
# 42 "data/maps/White_Cliffs/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}Okay, here's the plan. You're going down first.\p$"

White_Cliff_Memorial_Text_0:
# 53 "data/maps/White_Cliffs/scripts.pory"
	.string "Let the departed ride on forever on\ntheir final journey to peace.$"

White_Cliffs_CecileIntro::
# 33 "data/maps/White_Cliffs/scripts.pory"
	.string "Hehee, lets go!$"

White_Cliffs_CecileOutro::
# 37 "data/maps/White_Cliffs/scripts.pory"
	.string "Mmhm looks like my intuition was\ncorrect! Wonderful!$"

White_Cliffs_Dania_Memorial::
# 48 "data/maps/White_Cliffs/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}Oh. Hello.\pI'm not in the mood for a chat\nright now.$"

Golden_Fields_LinnetIntro::
# 63 "data/maps/White_Cliffs/scripts.pory"
	.string "Hey there! Let's have a battle!$"

Golden_Fields_LinnetOutro::
# 67 "data/maps/White_Cliffs/scripts.pory"
	.string "Dang, not strong enough$"

Golden_Fields_LinnetPostBattle::
# 71 "data/maps/White_Cliffs/scripts.pory"
	.string "'t was fun though!$"
