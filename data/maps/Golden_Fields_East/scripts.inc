Golden_Fields_East_MapScripts::
# 2 "data/maps/Golden_Fields_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Golden_Fields_OnTransition
	.byte 0


Golden_Fields_OnTransition::
# 6 "data/maps/Golden_Fields_East/scripts.pory"
	call Update_DaniaLocation
	return

