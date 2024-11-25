Whitecliff_Castle_House1_F2_MapScripts::
	.byte 0


Whitecliff_House1_Woman::
# 6 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	msgbox Whitecliff_House1_Woman_Text_0, MSGBOX_NPC
	return


Whitecliff_House1_Hoothoot::
# 10 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	lock
# 11 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	faceplayer
# 12 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	playmoncry SPECIES_HOOTHOOT, CRY_MODE_ENCOUNTER
# 13 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	msgbox Whitecliff_House1_Hoothoot_Text_0
# 14 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	waitmessage
# 15 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	release
	return


Whitecliff_House1_Woman_Text_0:
# 6 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	.string "I got this Hoothoot to help me and\nmy husband sleep.$"

Whitecliff_House1_Hoothoot_Text_0:
# 13 "data/maps/Whitecliff_Castle_House1_F2/scripts.pory"
	.string "Hoothoot stares at you. You start\nfeeling drowsy...\pBetter look away!$"
