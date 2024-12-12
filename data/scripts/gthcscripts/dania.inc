Update_DaniaLocation::
# 6 "data/scripts/dania.pory"
	switch VAR_DANIA_STATE
# 7 "data/scripts/dania.pory"
	case 0, Update_DaniaLocation_2
# 9 "data/scripts/dania.pory"
	case 1, Update_DaniaLocation_3
	return

Update_DaniaLocation_2:
# 8 "data/scripts/dania.pory"
	goto Dania_Script_MoveToStatue
	return

Update_DaniaLocation_3:
# 10 "data/scripts/dania.pory"
	goto Dania_Script_MoveToFarm
	return


Dania_Script_MoveToStatue::
# 15 "data/scripts/dania.pory"
	clearflag FLAG_DANIA_LOCATION_WHITE_CLIFFS
# 16 "data/scripts/dania.pory"
	setflag FLAG_DANIA_LOCATION_GOLDEN_FIELDS
	return


Dania_Script_MoveToFarm::
# 20 "data/scripts/dania.pory"
	clearflag FLAG_DANIA_LOCATION_GOLDEN_FIELDS
# 21 "data/scripts/dania.pory"
	setflag FLAG_DANIA_LOCATION_WHITE_CLIFFS
	return

