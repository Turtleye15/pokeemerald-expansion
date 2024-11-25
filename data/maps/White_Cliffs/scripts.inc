White_Cliffs_MapScripts::
# 2 "data/maps/White_Cliffs/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, White_Cliffs_OnTransition
	.byte 0


White_Cliffs_OnTransition::
# 6 "data/maps/White_Cliffs/scripts.pory"
	call Update_DaniaLocation
	return


White_Cliffs_Dania_Statue::
# 13 "data/maps/White_Cliffs/scripts.pory"
	lock
# 14 "data/maps/White_Cliffs/scripts.pory"
	faceplayer
# 15 "data/maps/White_Cliffs/scripts.pory"
	msgbox White_Cliffs_Dania_Memorial
# 16 "data/maps/White_Cliffs/scripts.pory"
	waitmessage
# 17 "data/maps/White_Cliffs/scripts.pory"
	applymovement 1, White_Cliffs_Dania_Statue_Movement_0
# 18 "data/maps/White_Cliffs/scripts.pory"
	waitmovement 1
# 19 "data/maps/White_Cliffs/scripts.pory"
	release
	return


White_Cliff_Memorial::
# 28 "data/maps/White_Cliffs/scripts.pory"
	msgbox White_Cliff_Memorial_Text_0, MSGBOX_SIGN
	return


# 17 "data/maps/White_Cliffs/scripts.pory"
White_Cliffs_Dania_Statue_Movement_0:
# 17 "data/maps/White_Cliffs/scripts.pory"
	face_up
	step_end

White_Cliff_Memorial_Text_0:
# 28 "data/maps/White_Cliffs/scripts.pory"
	.string "Let the departed ride on forever on\ntheir final journey to peace.$"

White_Cliffs_Dania_Memorial::
# 23 "data/maps/White_Cliffs/scripts.pory"
	.string "Oh. Hello.\pI'm not in the mood for a chat\nright now.$"
