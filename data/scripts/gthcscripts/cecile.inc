Update_CecileLocation::
# 5 "data/scripts/gthcscripts/cecile.pory"
	switch VAR_CECILE_STATE
# 6 "data/scripts/gthcscripts/cecile.pory"
	case 0, Update_CecileLocation_2
# 7 "data/scripts/gthcscripts/cecile.pory"
	case 1, Update_CecileLocation_3
	return

Update_CecileLocation_2:
# 6 "data/scripts/gthcscripts/cecile.pory"
	goto Cecile_Script_MoveToWhitecliffCastle
	return

Update_CecileLocation_3:
# 7 "data/scripts/gthcscripts/cecile.pory"
	goto Cecile_Script_MoveToWhiteCliffs
	return


Cecile_Script_MoveToWhitecliffCastle::
# 12 "data/scripts/gthcscripts/cecile.pory"
	clearflag FLAG_CECILE_LOCATION_CASTLE
# 13 "data/scripts/gthcscripts/cecile.pory"
	setflag FLAG_CECILE_LOCATION_WHITE_CLIFFS
	return


Cecile_Script_MoveToWhiteCliffs::
# 17 "data/scripts/gthcscripts/cecile.pory"
	clearflag FLAG_CECILE_LOCATION_WHITE_CLIFFS
# 18 "data/scripts/gthcscripts/cecile.pory"
	setflag FLAG_CECILE_LOCATION_CASTLE
	return

