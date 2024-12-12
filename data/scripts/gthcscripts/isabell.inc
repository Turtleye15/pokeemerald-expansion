Update_IsabellLocation::
# 5 "data/scripts/gthcscripts/isabell.pory"
	switch VAR_ISABELL_STATE
# 6 "data/scripts/gthcscripts/isabell.pory"
	case 0, Update_IsabellLocation_2
# 8 "data/scripts/gthcscripts/isabell.pory"
	case 1, Update_IsabellLocation_3
	return

Update_IsabellLocation_2:
# 7 "data/scripts/gthcscripts/isabell.pory"
	goto Isabell_Script_MoveToInfirmary
	return

Update_IsabellLocation_3:
# 9 "data/scripts/gthcscripts/isabell.pory"
	goto Isabell_Script_MoveToWhitecliffCastle
	return


Isabell_Script_MoveToInfirmary::
# 14 "data/scripts/gthcscripts/isabell.pory"
	clearflag FLAG_ISABELL_LOCATION_INFIRMARY
# 15 "data/scripts/gthcscripts/isabell.pory"
	setflag FLAG_ISABELL_LOCATION_CASTLE
	return


Isabell_Script_MoveToWhitecliffCastle::
# 19 "data/scripts/gthcscripts/isabell.pory"
	clearflag FLAG_ISABELL_LOCATION_CASTLE
# 20 "data/scripts/gthcscripts/isabell.pory"
	setflag FLAG_ISABELL_LOCATION_INFIRMARY
	return

