Golden_Plateau_Farm_F2_MapScripts::
	.byte 0


Golden_Plateau_Farm_ElderWoman::
# 6 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	lock
# 7 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	faceplayer
# 8 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	msgbox Golden_Plateau_Farm_ElderWoman_Text_0, MSGBOX_YESNO
# 9 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Golden_Plateau_Farm_ElderWoman_1
# 13 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	msgbox Golden_Plateau_Farm_ElderWoman_Text_1
# 14 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	closemessage
# 15 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	release
	return

Golden_Plateau_Farm_ElderWoman_1:
# 10 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	goto Golden_Plateau_Farm_AcceptQuest
	return


Golden_Plateau_Farm_AcceptQuest::
# 21 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	msgbox Golden_Plateau_Farm_AcceptQuest_Text_0
# 28 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	closemessage
# 29 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	release
	return


Golden_Plateau_Farm_ElderWoman_Text_0:
# 8 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	.string "Oh, are you a traveller? Care to\nentertain an old gal's wishes?$"

Golden_Plateau_Farm_ElderWoman_Text_1:
# 13 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	.string "No worries, I understand.$"

Golden_Plateau_Farm_AcceptQuest_Text_0:
# 21 "data/maps/Golden_Plateau_Farm_F2/scripts.pory"
	.string "A long time ago, I made a promise to\nmy husband.\p"
	.string "We would travel to Seaside City on\nour honeymoon⋯\p"
	.string "But shortly before, war broke out⋯\nand by the time it was resolved,\lwe had a family and no time."
	.string "We never ended up going there⋯\p"
	.string "The city's famous for it's pottery,\nand we have always wanted a vase\lfrom there."
	.string "If you ever go there, could you\nbring me back a vase?$"
