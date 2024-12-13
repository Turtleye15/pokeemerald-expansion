Update_IsabellLocation::
# 7 "data/scripts/gthcscripts/isabell.pory"
	switch VAR_ISABELL_STATE
# 8 "data/scripts/gthcscripts/isabell.pory"
	case 0, Update_IsabellLocation_2
# 9 "data/scripts/gthcscripts/isabell.pory"
	case 1, Update_IsabellLocation_3
# 10 "data/scripts/gthcscripts/isabell.pory"
	case 2, Update_IsabellLocation_4
	return

Update_IsabellLocation_2:
# 8 "data/scripts/gthcscripts/isabell.pory"
	goto Isabell_Script_MoveToInfirmary
	return

Update_IsabellLocation_3:
# 9 "data/scripts/gthcscripts/isabell.pory"
	goto Isabell_Script_MoveToWhitecliffCastle
	return

Update_IsabellLocation_4:
# 10 "data/scripts/gthcscripts/isabell.pory"
	goto Isabell_Script_MoveToCastleInside
	return


Isabell_Script_MoveToInfirmary::
# 15 "data/scripts/gthcscripts/isabell.pory"
	clearflag FLAG_ISABELL_LOCATION_INFIRMARY
# 16 "data/scripts/gthcscripts/isabell.pory"
	setflag FLAG_ISABELL_LOCATION_CASTLE
	return


Isabell_Script_MoveToWhitecliffCastle::
# 20 "data/scripts/gthcscripts/isabell.pory"
	clearflag FLAG_ISABELL_LOCATION_CASTLE
# 21 "data/scripts/gthcscripts/isabell.pory"
	setflag FLAG_ISABELL_LOCATION_INFIRMARY
	return


Isabell_Script_MoveToCastleInside::
# 25 "data/scripts/gthcscripts/isabell.pory"
	setflag FLAG_ISABELL_LOCATION_CASTLE
# 26 "data/scripts/gthcscripts/isabell.pory"
	setflag FLAG_ISABELL_LOCATION_INFIRMARY
	return

