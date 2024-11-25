Whitecliff_Castle_Botanist_MapScripts::
	.byte 0


Whitecliff_Botanist::
# 6 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	lock
# 7 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	faceplayer
# 8 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	msgbox Whitecliff_TalkWithBotanist
# 9 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	dynmultipush Whitecliff_Botanist_Text_0, 0
# 10 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	switch VAR_WHITECLIFF_BOTANY
# 11 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	case 0, Whitecliff_Botanist_3
Whitecliff_Botanist_1:
# 14 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 15 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	case 0, Whitecliff_Botanist_5
# 17 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	case 1, Whitecliff_Botanist_6
	return

Whitecliff_Botanist_3:
# 11 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	dynmultipush Whitecliff_Botanist_Text_1, 1
	goto Whitecliff_Botanist_1

Whitecliff_Botanist_5:
# 16 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	goto Whitecliff_Botanist_Shop
	return

Whitecliff_Botanist_6:
# 17 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	goto Whitecliff_Botanist_Quest
	return


Whitecliff_Botanist_Shop::
# 27 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	msgbox Whitecliff_Botanist_Shop_Text_0
# 28 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	waitmessage
# 29 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	release
	return


Whitecliff_Botanist_Quest::
# 34 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	msgbox Whitecliff_Botanist_Quest_Text_0
# 35 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	waitmessage
# 36 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	release
	return


Whitecliff_Botanist_Text_0:
# 9 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	.string "Do you have anything for sale?$"

Whitecliff_Botanist_Text_1:
# 11 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	.string "Can you tell me about berries?$"

Whitecliff_Botanist_Shop_Text_0:
# 27 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	.string "this is a placeholder for the mart$"

Whitecliff_Botanist_Quest_Text_0:
# 34 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	.string "this is a placeholder for the quest$"

Whitecliff_TalkWithBotanist::
# 21 "data/maps/Whitecliff_Castle_Botanist/scripts.pory"
	.string "Ah, good day! Can ah help ye wit'\nsomething?$"
