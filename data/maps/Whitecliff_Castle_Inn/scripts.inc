Whitecliff_Castle_Inn_MapScripts::
	.byte 0


Whitecliff_Inn_Keeper::
# 6 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	lock
# 7 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	faceplayer
# 8 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	msgbox Whitecliff_Inn_Keeper_Text_0
# 9 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, Whitecliff_Inn_Keeper_Text_1, Whitecliff_Inn_Keeper_Text_2, Whitecliff_Inn_Keeper_Text_3, Whitecliff_Inn_Keeper_Text_4
# 14 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	case 0, Whitecliff_Inn_Keeper_3
# 22 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	case 1, Whitecliff_Inn_Keeper_4
# 24 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	case 2, Whitecliff_Inn_Keeper_5
# 26 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	case 3, Whitecliff_Inn_Keeper_6
Whitecliff_Inn_Keeper_1:
# 30 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	closemessage
	end

Whitecliff_Inn_Keeper_3:
# 16 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	msgbox Whitecliff_Inn_Keeper_Text_5
# 17 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	closemessage
# 18 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	goto Common_Eventscript_Inn_Heal
# 19 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	msgbox Whitecliff_Inn_Keeper_Text_6
# 20 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	closemessage
	end

Whitecliff_Inn_Keeper_4:
# 23 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	goto Whitecliff_Inn_Gossip
	goto Whitecliff_Inn_Keeper_1

Whitecliff_Inn_Keeper_5:
# 25 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	goto Whitecliff_Inn_Shop
	goto Whitecliff_Inn_Keeper_1

Whitecliff_Inn_Keeper_6:
# 27 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	closemessage
	end


Whitecliff_Inn_Gossip::
# 35 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	msgbox Whitecliff_Inn_Gossip_Text_0
# 36 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	closemessage
	end


Whitecliff_Inn_Shop::
# 41 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	msgbox Whitecliff_Inn_Shop_Text_0
# 42 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	closemessage
	end


Whitecliff_Inn_Keeper_Text_0:
# 8 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "Hey there kiddo, how can I help ye out?$"

Whitecliff_Inn_Keeper_Text_1:
# 10 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "I'd like to rest up$"

Whitecliff_Inn_Keeper_Text_2:
# 11 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "Any interesting news?$"

Whitecliff_Inn_Keeper_Text_3:
# 12 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "What's on the menu?$"

Whitecliff_Inn_Keeper_Text_4:
# 13 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "Nevermind...$"

Whitecliff_Inn_Keeper_Text_5:
# 16 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "I've got a room free for ye$"

Whitecliff_Inn_Keeper_Text_6:
# 19 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "See ye next time!$"

Whitecliff_Inn_Gossip_Text_0:
# 35 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "This is a test message$"

Whitecliff_Inn_Shop_Text_0:
# 41 "data/maps/Whitecliff_Castle_Inn/scripts.pory"
	.string "This is where the shop goes$"
