Whitecliff_Castle_Infirmary_MapScripts::
# 2 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CheckStarterBall
	.byte 0


CheckStarterBall::
# 11 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
	return


Infirmary_IsabellCheckPlayerRight::
# 15 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 16 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 1
# 17 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 18 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 27 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 31 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 33 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 35 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 36 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_0, IsabellQuestions_Text_1
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_2, IsabellQuestions_Text_3, IsabellQuestions_Text_4
# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_2
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_3
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starving
IsabellQuestions_1:
# 52 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFields
	goto IsabellQuestions_1

IsabellQuestions_3:
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoIdea
	goto IsabellQuestions_1


# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
FaceDown:
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_down
	step_end

AskPlayerName::
# 91 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 92 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 93 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 94 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 95 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 96 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 97 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 98 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 99 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 100 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	return


AskPlayerMon::
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerMon_Text_0, AskPlayerMon_Text_1, AskPlayerMon_Text_2
# 104 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerMon_2
# 108 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerMon_3
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_HONEDGE
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
AskPlayerMon_1:
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto ConfirmPlayerMon
	return

AskPlayerMon_2:
# 105 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_ROGGENROLA
# 106 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerMon_1

AskPlayerMon_3:
# 109 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_3, SPECIES_LITWICK
# 110 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerMon_1


ConfirmPlayerMon::
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ConfirmPlayerMon_Text_0, MSGBOX_YESNO
# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ConfirmPlayerMon_2
ConfirmPlayerMon_1:
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 126 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 129 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

ConfirmPlayerMon_2:
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox AskAgain
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	goto ConfirmPlayerMon_1


# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 158 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 159 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 163 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 164 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 169 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 171 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 171 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 171 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 172 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

IsabellBeforeStarterGet::
# 176 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 177 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 179 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 180 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 181 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 182 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 189 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 194 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 197 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 198 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 203 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 204 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 209 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 210 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 211 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 213 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 214 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 215 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 2
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 219 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 220 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 227 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 229 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 234 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 235 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 236 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 247 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 248 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 249 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 254 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 255 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Healthy
# 256 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


WC_Infirmary_PotionBox::
# 266 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 267 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_PotionBox_Text_0
# 268 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_BerryTree::
# 272 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 273 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryTree_Text_0
# 274 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GrassBox::
# 278 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 279 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_GrassBox_Text_0
# 280 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_Bookshelf::
# 284 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 285 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_0, MSGBOX_YESNO
# 286 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_2
WC_Infirmary_Bookshelf_1:
# 289 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WC_Infirmary_Bookshelf_5
WC_Infirmary_Bookshelf_4:
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_1, MSGBOX_YESNO
# 294 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_8
WC_Infirmary_Bookshelf_7:
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 298 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_Bookshelf_2:
# 287 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFieldInfo
	goto WC_Infirmary_Bookshelf_1

WC_Infirmary_Bookshelf_5:
# 290 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 291 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	goto WC_Infirmary_Bookshelf_4

WC_Infirmary_Bookshelf_8:
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Brewing
	goto WC_Infirmary_Bookshelf_7


InfirmaryMunna::
# 322 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 323 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 324 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 325 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 20
# 326 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox InfirmaryMunna_Text_0
# 327 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 328 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 4, LookLeft
# 329 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 4
# 330 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 333 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookLeft:
# 334 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

IsabellQuestions_Text_0:
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_1:
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_2:
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_3:
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_4:
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerMon_Text_0:
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I have a Roggenrola!$"

AskPlayerMon_Text_1:
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's a Litwick!$"

AskPlayerMon_Text_2:
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "My Honedge!$"

ConfirmPlayerMon_Text_0:
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{DESTROY_MUGSHOT}Are you sure?$"

LeaveBeforeStarter_Text_0:
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 210 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_3}!$"

NicknamePartyMon_Text_0:
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

WC_Infirmary_PotionBox_Text_0:
# 267 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Glass bottles are piled up in this crate.$"

WC_Infirmary_BerryTree_Text_0:
# 273 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A tree growing berries. It seems they\n"
	.string "will be used for making medicine.$"

WC_Infirmary_GrassBox_Text_0:
# 279 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A box full with gilded leaves. Maybe\n"
	.string "they have medicinal qualities?$"

WC_Infirmary_Bookshelf_Text_0:
# 285 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "There's a book here about potion\n"
	.string "brewing! Do you want to read it?$"

WC_Infirmary_Bookshelf_Text_1:
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Continue Reading?$"

InfirmaryMunna_Text_0:
# 326 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This Munna seems to be monitoring the\n"
	.string "patient!$"

HowAreYou::
# 68 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful, that means your condition\n"
	.string "has improved.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 78 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Correct, they're right outside\n"
	.string "Whitecliff Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you don't know? Not surprising, I\n"
	.string "suppose. Can you recall anything else?$"

Starving::
# 86 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}From what I could tell, you were\n"
	.string "starving to death. No signs of physical\l"
	.string "trauma.\p"
	.string "When'd you eat for the last time?$"

Amnesia::
# 131 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 135 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{PLAYER}... so you did not forget\n"
	.string "everything.\p"
	.string "How about your hometown? Friends?\n"
	.string "Family?\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "Nothing at all... And what about your\n"
	.string "Pokemon? You had one with you.$"

AskAgain::
# 139 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, then it was...?$"

Starter::
# 144 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, so you remember that as well.\p"
	.string "..\n"
	.string "How do I know?\p"
	.string "Well, you weren't the only in critical\n"
	.string "condition when we found you.\p"
	.string "I've made sure your {STR_VAR_3} is\n"
	.string "healthy too.\p"
	.string "But, just to be sure, I need to test it's\n"
	.string "physical capabilities.\l"
	.string "And yours, too.\p"
	.string "Your pokeball is on the table over\n"
	.string "there. Pick it up.$"

NoPokemon::
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 239 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 243 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and your {STR_VAR_3}\n"
	.string "are doing great.$"

Healthy::
# 260 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected\p"
	.string "Though, not even I can cure amnesia.$"

GoldenFieldInfo::
# 301 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "The Golden Fields surround Whitecliff\n"
	.string "Castle.\p"
	.string "It's named after the grass that only\n"
	.string "grows in this region.\p"
	.string "For a cleric, these leaves serve an\n"
	.string "important purpose.\p"
	.string "They can draw out and amplify the\n"
	.string "properties of various berries.\p"
	.string "Most often, they are combined with\n"
	.string "Sitrus berries to create health\l"
	.string "potions.\p"
	.string "But, it works with lots of other berries!\p"
	.string "In the next chapters, I will explain\n"
	.string "this in more detail.$"

Brewing::
# 311 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Creating potions is surprisingly simple.\p"
	.string "You'll need berries, dried golden leaves,\n"
	.string "and an empty container\p"
	.string "First, crush the berries of choice\n"
	.string "lightly, and place them in the\l"
	.string "container.\l"
	.string "Then, add 1 leaf per berry\p"
	.string "Close the bottle tightly and after a\n"
	.string "little while your potion will be ready!\p"
	.string "While the process itself is simple,\n"
	.string "obtaining the desired result might be\l"
	.string "hard.\p"
	.string "You can add more ingredients to create\n"
	.string "potions with a wide range of effetcs!\p"
	.string "$"
