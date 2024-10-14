.if DEBUG_OVERWORLD_MENU == TRUE
Debug_MessageEnd:
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_ShowFieldMessageStringVar4::
	special ShowFieldMessageStringVar4
	goto Debug_MessageEnd

Debug_CheatStart::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	setflag FLAG_ADVENTURE_STARTED
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	givemon SPECIES_TREECKO, 20, ITEM_NONE
	givemon SPECIES_TORCHIC, 20, ITEM_NONE
	givemon SPECIES_MUDKIP, 20, ITEM_NONE
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setvar VAR_LITTLEROOT_TOWN_STATE, 4 @ 4: Received Running Shoes
	setvar VAR_LITTLEROOT_INTRO_STATE, 7 @ 7: Told to go meet rival
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2 @ 2: Met Rival's Mom (and is corresponding gender)
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4 @ 4: Received Pokedex
	setflag FLAG_RECEIVED_BIKE
	additem ITEM_ACRO_BIKE
	setvar VAR_BRINEY_HOUSE_STATE, 1
	setvar VAR_ROUTE116_STATE, 2
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_VISITED_OLDALE_TOWN
	setflag FLAG_VISITED_DEWFORD_TOWN
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	setflag FLAG_VISITED_PETALBURG_CITY
	setflag FLAG_VISITED_SLATEPORT_CITY
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_LILYCOVE_CITY
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	release
	end

Debug_FlagsNotSetOverworldConfigMessage::
	message Debug_FlagsNotSetOverworldConfigMessage_Text
	goto Debug_MessageEnd

Debug_FlagsNotSetOverworldConfigMessage_Text:
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/overworld.h'!$"

Debug_FlagsNotSetBattleConfigMessage::
	message Debug_FlagsNotSetBattleConfigMessage_Text
	goto Debug_MessageEnd

Debug_FlagsNotSetBattleConfigMessage_Text:
	.string "Feature unavailable!\n"
	.string "Please define a usable flag in:\l"
	.string "'include/config/battle.h'!$"

Debug_BoxFilledMessage::
	message Debug_BoxFilledMessage_Text
	goto Debug_MessageEnd

Debug_BoxFilledMessage_Text:
	.string "Storage boxes filled!$"

Debug_EventScript_CheckEVs::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckEVs_End
	callnative Script_GetChosenMonOffensiveEVs
	msgbox Debug_EventScript_Text_OffensiveEVs, MSGBOX_DEFAULT
	callnative Script_GetChosenMonDefensiveEVs
	msgbox Debug_EventScript_Text_DefensiveEVs, MSGBOX_DEFAULT
Debug_EventScript_CheckEVs_End::
	releaseall
	end

Debug_EventScript_Text_OffensiveEVs:
	.string "ATK EVs: {STR_VAR_1}, SPATK EVs: {STR_VAR_2}, SPEED EVs: {STR_VAR_3}$"

Debug_EventScript_Text_DefensiveEVs:
	.string "HP EVs: {STR_VAR_1}, DEF EVs: {STR_VAR_2}, SPDEF EVs: {STR_VAR_3}$"

Debug_EventScript_CheckIVs::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_CheckIVs_End
	callnative Script_GetChosenMonOffensiveIVs
	msgbox Debug_EventScript_Text_OffensiveIVs, MSGBOX_DEFAULT
	callnative Script_GetChosenMonDefensiveIVs
	msgbox Debug_EventScript_Text_DefensiveIVs, MSGBOX_DEFAULT
Debug_EventScript_CheckIVs_End::
	releaseall
	end

Debug_EventScript_Text_OffensiveIVs:
	.string "ATK IVs: {STR_VAR_1}, SPATK IVs: {STR_VAR_2}, SPEED IVs: {STR_VAR_3}$"

Debug_EventScript_Text_DefensiveIVs:
	.string "HP IVs: {STR_VAR_1}, DEF IVs: {STR_VAR_2}, SPDEF IVs: {STR_VAR_3}$"

Debug_EventScript_Script_1::
	Whitecliff_Castle_Infirmary_MapScripts::
# 2 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CheckStarterBall
	.byte 0


CheckStarterBall::
# 6 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
	return


Infirmary_IsabellCheckPlayerRight::
# 10 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 11 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 1
# 12 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_0, 1
# 13 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


Infirmary_IsabellCheckPlayerLeft::
# 17 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 18 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 1
# 19 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_0, 2
# 20 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 28 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 30 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 35 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 36 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq IsabellQuestions_2
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkRight
IsabellQuestions_1:
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_0, IsabellQuestions_Text_1, IsabellQuestions_Text_2
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_3, IsabellQuestions_Text_4, IsabellQuestions_Text_5
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_6
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_7
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellQuestions_Text_8
IsabellQuestions_5:
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
	goto IsabellQuestions_1

IsabellQuestions_6:
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellQuestions_Text_6
	goto IsabellQuestions_5

IsabellQuestions_7:
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellQuestions_Text_7
	goto IsabellQuestions_5


# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 67 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 67 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 67 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 68 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkRight:
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 77 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

AskPlayerName::
# 92 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 93 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 94 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 95 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 96 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 98 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NameConfirm
# 99 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto PickStarter
	return


# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 126 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 129 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

PickStarter::
# 133 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, PickStarter_Text_0, PickStarter_Text_1, PickStarter_Text_2
# 135 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PickStarter_2
# 139 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PickStarter_3
# 144 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 145 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
PickStarter_1:
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 150 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBack
# 151 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 152 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

PickStarter_2:
# 136 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 137 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto PickStarter_1

PickStarter_3:
# 140 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 141 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto PickStarter_1


# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBack:
# 167 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 168 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 169 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

ObtainStarterBall::
# 173 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 174 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 175 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 176 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 177 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 179 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 180 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
	return


NicknamePartyMon::
# 184 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 187 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 188 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellQuestions_Text_0:
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Fresh and fit.$"

IsabellQuestions_Text_1:
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_2:
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_3:
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_4:
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_5:
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

IsabellQuestions_Text_6:
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Yeah, they're right outside Whitecliff\n"
	.string "Castle.\p"
	.string "{DESTROY_MUGSHOT}..\n"
	.string "..\l"
	.string "..\p"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}You don't know where that is?$"

IsabellQuestions_Text_7:
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Hmm, you can't remember? Not surprising,\n"
	.string "I suppose. Up until what do you\l"
	.string "remember?$"

IsabellQuestions_Text_8:
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You were starving to death. No signs of\n"
	.string "physical trauma.\p"
	.string "When'd you eat for the last time?$"

PickStarter_Text_0:
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Roggenrola$"

PickStarter_Text_1:
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Litwick$"

PickStarter_Text_2:
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Honedge$"

ObtainStarterBall_Text_0:
# 174 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 184 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Give a nickname?$"

HowAreYou::
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 85 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Well, Thats an improvement.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

Amnesia::
# 101 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "So... you really don't remember? Nothing\n"
	.string "recent at all?\p"
	.string "Do you at least know who you are?$"

NameConfirm::
# 105 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} So it's {PLAYER}. Well, at least you\n"
	.string "remember that.\p"
	.string "Anything else? Hometown? Age? Family?\n"
	.string "Friends?\p"
	.string "{DESTROY_MUGSHOT} ..\n"
	.string "..\l"
	.string "..\p"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Nothing at all... You had a pokemon with\n"
	.string "you. Do you remember which pokemon\l"
	.string "that is? {DESTROY_MUGSHOT}$"

Starter::
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Good, seems like you remember that as\n"
	.string "well.\p"
	.string "{DESTROY_MUGSHOT} ..\n"
	.string "How do I know?\p"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Well, you weren't the only in critical\n"
	.string "condition when we found you.\p"
	.string "I've made sure your {STR_VAR_1} is\n"
	.string "healthy too.\p"
	.string "But, just to be sure, I need to test it's\n"
	.string "physical capabilities.\p"
	.string "Go on, pick up that ball and we'll run a\n"
	.string "combat test$"

	
	release
	end

Debug_EventScript_Script_2::
	release
	end

Debug_EventScript_Script_3::
	release
	end

Debug_EventScript_Script_4::
	release
	end

Debug_EventScript_Script_5::
	release
	end

Debug_EventScript_Script_6::
	release
	end

Debug_EventScript_Script_7::
	release
	end

Debug_EventScript_Script_8::
	release
	end

Debug_CheckSaveBlock::
	callnative CheckSaveBlock1Size
	msgbox Debug_SaveBlock1Size, MSGBOX_DEFAULT
	callnative CheckSaveBlock2Size
	msgbox Debug_SaveBlock2Size, MSGBOX_DEFAULT
	callnative CheckSaveBlock3Size
	msgbox Debug_SaveBlock3Size, MSGBOX_DEFAULT
	callnative CheckPokemonStorageSize
	msgbox Debug_PokemonStorageSize, MSGBOX_DEFAULT
	release
	end

Debug_SaveBlock1Size::
	.string "SaveBlock1 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_SaveBlock2Size::
	.string "SaveBlock2 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_SaveBlock3Size::
	.string "SaveBlock3 size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_PokemonStorageSize::
	.string "{PKMN}Storage size: {STR_VAR_1}b/{STR_VAR_2}b.\n"
	.string "Free space: {STR_VAR_3}b.$"

Debug_CheckROMSpace::
	callnative CheckROMSize
	msgbox Debug_ROMSize, MSGBOX_DEFAULT
	release
	end

Debug_ROMSize::
	.string "ROM size: {STR_VAR_1}MB/32MB.\n"
	.string "Free space: {STR_VAR_2}MB.$"

Debug_HatchAnEgg::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_HatchAnEgg_End
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_ne VAR_RESULT, SPECIES_EGG, DebugScript_HatchAnEgg_CantForceHatch
	special EggHatch
	waitstate
Debug_HatchAnEgg_End::
	releaseall
	end

Debug_NoPokemon::
	msgbox DebugScript_Text_EmptyParty, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_HatchAnEgg_CantForceHatch::
	msgbox DebugScript_HatchAnEgg_Text_NotAnEgg, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_Text_EmptyParty::
	.string "You have no Pokémon nor Eggs.$"

DebugScript_HatchAnEgg_Text_NotAnEgg::
	.string "That's not a Pokémon Egg.$"

DebugScript_ZeroDaycareMons::
	msgbox DebugText_DaycareNoPokemon, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_OneDaycareMons::
	msgbox DebugText_DaycareOnePokemon, MSGBOX_DEFAULT
	releaseall
	end

DebugScript_DaycareMonsNotCompatible::
	msgbox DebugText_DaycarePokemonNotCompatible, MSGBOX_DEFAULT
	releaseall
	end

DebugText_DaycareNoPokemon:
	.string "You have no Pokémon at Daycare.$"

DebugText_DaycareOnePokemon:
	.string "You have only one Pokémon at Daycare.$"

DebugText_DaycarePokemonNotCompatible:
	.string "Your Pokémon at Daycare can't\nhave babies together!$"

Debug_ShowExpansionVersion::
	callnative BufferExpansionVersion
	msgbox Debug_ExpansionVersion, MSGBOX_DEFAULT
	release
	end

Debug_ExpansionVersion:
	.string "pokeemerald-expansion {STR_VAR_1}$"

Debug_BerryPestsDisabled::
	msgbox DebugText_BerryPestsDisabled, MSGBOX_DEFAULT
	release
	end

DebugText_BerryPestsDisabled:
	.string "OW_BERRY_PESTS is disabled.\n"
	.string "Unable to force pests onto berry trees.$"

Debug_BerryWeedsDisabled::
	msgbox DebugText_BerryWeedsDisabled, MSGBOX_DEFAULT
	release
	end

DebugText_BerryWeedsDisabled:
	.string "OW_BERRY_WEEDS is disabled.\n"
	.string "Unable to force weeds onto berry trees.$"

Debug_EventScript_InflictStatus1::
	lockall
	getpartysize
	goto_if_eq VAR_RESULT, 0, Debug_NoPokemon
	dynmultipush Debug_EventScript_InflictStatus1_Text_Single, 0
	dynmultipush Debug_EventScript_InflictStatus1_Text_PartyWide, 1
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 2
	dynmultistack 0, 0, FALSE, 3 FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Debug_EventScript_InflictStatus1_Single
	case 1, Debug_EventScript_InflictStatus1_Party
	case 2, Debug_EventScript_InflictStatus1_Close
Debug_EventScript_InflictStatus1_Close:
	releaseall
	end

Debug_EventScript_InflictStatus1_Single:
	special ChoosePartyMon
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, Debug_EventScript_InflictStatus1_Close
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, Debug_EventScript_InflictStatus1_Close
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Debug_EventScript_InflictStatus1_Single_Poison
	case 1, Debug_EventScript_InflictStatus1_Single_Paralysis
	case 2, Debug_EventScript_InflictStatus1_Single_Sleep
	case 3, Debug_EventScript_InflictStatus1_Single_Burn
	case 4, Debug_EventScript_InflictStatus1_Single_Freeze
	case 5, Debug_EventScript_InflictStatus1_Single_Frostbite
	case 6, Debug_EventScript_InflictStatus1_Close
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_Poison:
	setstatus1 STATUS1_POISON, VAR_0x8004
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_Paralysis:
	setstatus1 STATUS1_PARALYSIS, VAR_0x8004
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_Sleep:
	setstatus1 STATUS1_SLEEP, VAR_0x8004
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_Burn:
	setstatus1 STATUS1_BURN, VAR_0x8004
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_Freeze:
	setstatus1 STATUS1_FREEZE, VAR_0x8004
	releaseall
	end

Debug_EventScript_InflictStatus1_Single_Frostbite:
	setstatus1 STATUS1_FROSTBITE, VAR_0x8004
	releaseall
	end

Debug_EventScript_InflictStatus1_Party:
	dynmultipush Debug_EventScript_InflictStatus1_Text_Poison, 0
	dynmultipush Debug_EventScript_InflictStatus1_Text_Paralysis, 1
	dynmultipush Debug_EventScript_InflictStatus1_Text_Sleep, 2
	dynmultipush Debug_EventScript_InflictStatus1_Text_Burn, 3
	dynmultipush Debug_EventScript_InflictStatus1_Text_Freeze, 4
	dynmultipush Debug_EventScript_InflictStatus1_Text_Frostbite, 5
	dynmultipush Debug_EventScript_InflictStatus1_Text_Close, 6
	dynmultistack 0, 0, FALSE, 7, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Debug_EventScript_InflictStatus1_Party_Poison
	case 1, Debug_EventScript_InflictStatus1_Party_Paralysis
	case 2, Debug_EventScript_InflictStatus1_Party_Sleep
	case 3, Debug_EventScript_InflictStatus1_Party_Burn
	case 4, Debug_EventScript_InflictStatus1_Party_Freeze
	case 5, Debug_EventScript_InflictStatus1_Party_Frostbite
	case 6, Debug_EventScript_InflictStatus1_Close
	case MULTI_B_PRESSED, Debug_EventScript_InflictStatus1_Close
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_Poison:
	setstatus1 STATUS1_POISON, PARTY_SIZE
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_Paralysis:
	setstatus1 STATUS1_PARALYSIS, PARTY_SIZE
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_Sleep:
	setstatus1 STATUS1_SLEEP, PARTY_SIZE
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_Burn:
	setstatus1 STATUS1_BURN, PARTY_SIZE
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_Freeze:
	setstatus1 STATUS1_FREEZE, PARTY_SIZE
	releaseall
	end

Debug_EventScript_InflictStatus1_Party_Frostbite:
	setstatus1 STATUS1_FROSTBITE, PARTY_SIZE
	releaseall
	end

Debug_EventScript_InflictStatus1_Text_Single:
	.string "Single$"

Debug_EventScript_InflictStatus1_Text_PartyWide:
	.string "Party-wide$"

Debug_EventScript_InflictStatus1_Text_Close:
	.string "Close$"

Debug_EventScript_InflictStatus1_Text_Poison:
	.string "Poison$"

Debug_EventScript_InflictStatus1_Text_Paralysis:
	.string "Paralysis$"

Debug_EventScript_InflictStatus1_Text_Sleep:
	.string "Sleep$"

Debug_EventScript_InflictStatus1_Text_Burn:
	.string "Burn$"

Debug_EventScript_InflictStatus1_Text_Freeze:
	.string "Freeze$"

Debug_EventScript_InflictStatus1_Text_Frostbite:
	.string "Frostbite$"

Debug_EventScript_EWRAMCounters::
	callnative CheckEWRAMCounters
	msgbox Debug_EventScript_EWRAMCounters_Text, MSGBOX_DEFAULT
	release
	end

Debug_EventScript_EWRAMCounters_Text::
	.string "Follower Steps: {STR_VAR_1}.\n"
	.string "Fishing Chain: {STR_VAR_2}.$"

.endif
