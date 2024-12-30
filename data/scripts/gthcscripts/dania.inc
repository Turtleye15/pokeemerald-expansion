Update_DaniaLocation::
# 6 "data/scripts/gthcscripts/dania.pory"
	switch VAR_DANIA_STATE
# 7 "data/scripts/gthcscripts/dania.pory"
	case 0, Update_DaniaLocation_2
# 9 "data/scripts/gthcscripts/dania.pory"
	case 1, Update_DaniaLocation_3
	return

Update_DaniaLocation_2:
# 8 "data/scripts/gthcscripts/dania.pory"
	goto Dania_Script_MoveToStatue
	return

Update_DaniaLocation_3:
# 10 "data/scripts/gthcscripts/dania.pory"
	goto Dania_Script_MoveToFarm
	return


Dania_Script_MoveToStatue::
# 15 "data/scripts/gthcscripts/dania.pory"
	clearflag FLAG_DANIA_LOCATION_WHITE_CLIFFS
# 16 "data/scripts/gthcscripts/dania.pory"
	setflag FLAG_DANIA_LOCATION_GOLDEN_FIELDS
	return


Dania_Script_MoveToFarm::
# 20 "data/scripts/gthcscripts/dania.pory"
	clearflag FLAG_DANIA_LOCATION_GOLDEN_FIELDS
# 21 "data/scripts/gthcscripts/dania.pory"
	setflag FLAG_DANIA_LOCATION_WHITE_CLIFFS
	return

