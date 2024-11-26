Whitecliff_Castle_House3_MapScripts::
# 2 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Whitecliff_Castle_House3_OnTransition
	.byte 0


Whitecliff_Castle_House3_OnTransition::
# 6 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto_if_set FLAG_WHITECLIFF_CASTLE_TRADE, Whitecliff_Castle_House3_OnTransition_1
# 10 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	setflag FLAG_WHITECLIFF_WOOBAT
	return

Whitecliff_Castle_House3_OnTransition_1:
# 7 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	clearflag FLAG_WHITECLIFF_WOOBAT
	return


Whitecliff_House3_Man::
# 15 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	lock
# 16 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	faceplayer
# 17 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto_if_set FLAG_WHITECLIFF_CASTLE_TRADE, Whitecliff_House3_Man_2
Whitecliff_House3_Man_1:
# 21 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SHINX
# 22 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 23 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 24 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Trade, MSGBOX_YESNO
# 25 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Whitecliff_House3_Man_5
Whitecliff_House3_Man_4:
# 30 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	special ChoosePartyMon
# 31 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	waitstate
# 32 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Whitecliff_House3_Man_8
Whitecliff_House3_Man_7:
# 35 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 36 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 37 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Whitecliff_House3_Man_11
Whitecliff_House3_Man_10:
# 42 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 43 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	special CreateInGameTradePokemon
# 44 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	special DoInGameTradeScene
# 45 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	setflag FLAG_WHITECLIFF_CASTLE_TRADE
# 46 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	release
	return

Whitecliff_House3_Man_2:
# 18 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto Whitecliff_House3_Trade_Done
	goto Whitecliff_House3_Man_1

Whitecliff_House3_Man_5:
# 26 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto Whitecliff_House3_Trade_Decline
	goto Whitecliff_House3_Man_4

Whitecliff_House3_Man_8:
# 33 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto Whitecliff_House3_Trade_Decline
	goto Whitecliff_House3_Man_7

Whitecliff_House3_Man_11:
# 38 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto Whitecliff_House3_WrongSpecies
	goto Whitecliff_House3_Man_10


Whitecliff_House3_Trade_Done::
# 54 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Trade_Done_Text_0
# 55 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	waitmessage
# 56 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	release
	return


Whitecliff_House3_Trade_Decline::
# 60 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Trade_Decline_Text_0
# 61 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	waitmessage
# 62 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	release
	return


Whitecliff_House3_WrongSpecies::
# 66 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_WrongSpecies_Text_0
# 67 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	waitmessage
# 68 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	release
	return


Whitecliff_House3_Woobat::
# 72 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	lock
# 73 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	faceplayer
# 74 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	playmoncry SPECIES_WOOBAT, CRY_MODE_ENCOUNTER
# 75 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Woobat_Text_0
# 76 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	waitmessage
# 77 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	release
	return


Whitecliff_House3_Girl::
# 81 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	goto_if_unset FLAG_WHITECLIFF_CASTLE_TRADE, Whitecliff_House3_Girl_1
# 85 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Girl_Text_1, MSGBOX_NPC
	return

Whitecliff_House3_Girl_1:
# 82 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Girl_Text_0, MSGBOX_NPC
	return


Whitecliff_House3_Trade_Done_Text_0:
# 54 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "My daughter loves this woobat! Thank\nyou so much.$"

Whitecliff_House3_Trade_Decline_Text_0:
# 60 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "Ah, that's no big deal. Let me know\nif you change your mind$"

Whitecliff_House3_WrongSpecies_Text_0:
# 66 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "This isn't the pokemon I'm looking for...$"

Whitecliff_House3_Woobat_Text_0:
# 75 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "Woobat seems happy with all the\nattention it is getting$"

Whitecliff_House3_Girl_Text_0:
# 82 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "Oww...\nMy fingers...$"

Whitecliff_House3_Girl_Text_1:
# 85 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "Woobat is so soft!$"

Whitecliff_House3_Trade::
# 49 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "I got this {STR_VAR_2} for my daughter,\nbut it's cold shocks make it\ldifficult to cuddle...\pDo you have a {STR_VAR_1}?\nI heard they are very soft!\pI will trade you our {STR_VAR_2} for it.$"
