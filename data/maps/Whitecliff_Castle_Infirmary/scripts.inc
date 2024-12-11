Whitecliff_Castle_Infirmary_MapScripts::
# 2 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Whitecliff_Infirmary_OnLoad
	.byte 0


Whitecliff_Infirmary_OnLoad::
# 17 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_CHAPTER_1, 0
	goto_if_eq Whitecliff_Infirmary_OnLoad_1
# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_CHAPTER_1, 1
	goto_if_eq Whitecliff_Infirmary_OnLoad_2
	return

Whitecliff_Infirmary_OnLoad_1:
# 18 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 19 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectxyperm 1, 13, 10
# 20 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

Whitecliff_Infirmary_OnLoad_2:
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectxyperm 1, 5, 6
	return


Infirmary_IsabellEnterBuilding::
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 30 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 1
# 31 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 36 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellQuestions_Movement_0
# 52 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername IsabellQuestions_Text_0
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_1, IsabellQuestions_Text_2
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_3, IsabellQuestions_Text_4, IsabellQuestions_Text_5
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_2
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_3
# 68 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starving
IsabellQuestions_1:
# 70 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 71 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFields
	goto IsabellQuestions_1

IsabellQuestions_3:
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoIdea
	goto IsabellQuestions_1


# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
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
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 77 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
FaceDown:
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_down
	step_end

AskPlayerName::
# 107 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_PIN
# 108 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 109 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 110 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername IsabellQuestions_Text_0
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AskPlayerName_Movement_0
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_PIN
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	return


AskPlayerMon::
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerMon_Text_0, AskPlayerMon_Text_1, AskPlayerMon_Text_2
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerMon_2
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerMon_3
# 133 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARON
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ARON
AskPlayerMon_1:
# 136 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto ConfirmPlayerMon
	return

AskPlayerMon_2:
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 126 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerMon_1

AskPlayerMon_3:
# 129 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 130 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerMon_1


ConfirmPlayerMon::
# 140 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ConfirmPlayerMon_Text_0, MSGBOX_YESNO
# 141 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ConfirmPlayerMon_2
ConfirmPlayerMon_1:
# 145 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 146 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 147 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 150 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox MyNameIs
# 151 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 152 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

ConfirmPlayerMon_2:
# 142 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox AskAgain
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	goto ConfirmPlayerMon_1


# 184 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 189 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 191 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 191 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 191 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 191 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 194 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 197 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 203 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 213 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 219 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 220 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 222 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 223 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 224 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 227 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 233 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 234 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry VAR_PICKED_STARTER, CRY_MODE_NORMAL
# 235 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 236 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 237 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 238 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 239 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 241 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 243 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 244 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CAN_HEAL, 1
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 2
# 247 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 248 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 249 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 250 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 254 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 255 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 256 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 257 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 258 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 263 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 264 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 265 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 266 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 277 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 278 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 279 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 284 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 285 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 286 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 287 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Healthy
# 288 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 289 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, HealPlayer
# 290 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 291 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 292 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 294 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_WhatNow
# 296 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 1, 0, DYN_MULTICHOICE_CB_NONE, IsabellBattleOver_Text_0
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePast
# 298 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 299 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, LookUp
# 300 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 301 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePresent
# 302 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 303 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_CHAPTER_1, SUB_QUEST_1
# 304 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 305 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 306 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


# 335 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
HealPlayer:
# 336 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 336 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 336 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 336 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
	step_end

# 339 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkinplace:
# 340 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_in_place_left
	step_end

# 343 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookUp:
# 344 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 345 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
# 346 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 346 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 346 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 346 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 347 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

Infirmary_IsabellTalk::
# 355 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 356 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 357 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_CHAPTER_1
# 358 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, Infirmary_IsabellTalk_2
# 359 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, Infirmary_IsabellTalk_2
# 361 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, Infirmary_IsabellTalk_3
# 363 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 3, Infirmary_IsabellTalk_4
	return

Infirmary_IsabellTalk_2:
# 360 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellBeforeStarterGet
	return

Infirmary_IsabellTalk_3:
# 362 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_GetBerries
	return

Infirmary_IsabellTalk_4:
# 364 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_DeliverBerries
	return


IsabellBeforeStarterGet::
# 370 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 371 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 372 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 373 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 374 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 375 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GetBerries::
# 379 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 380 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellGetBerries
# 381 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 382 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 383 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_DeliverBerries::
# 387 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeitem ITEM_BERRY_SATCHEL
# 388 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 389 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryDelivery
# 390 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, WC_Infirmary_DeliverBerries_Text_0, WC_Infirmary_DeliverBerries_Text_1, WC_Infirmary_DeliverBerries_Text_2
# 392 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_RESULT
# 393 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, WC_Infirmary_DeliverBerries_3
# 395 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, WC_Infirmary_DeliverBerries_4
# 397 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, WC_Infirmary_DeliverBerries_5
WC_Infirmary_DeliverBerries_1:
# 401 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 402 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_DeliverBerries_Text_3
# 403 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 404 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 405 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	warpsilent MAP_WHITECLIFF_CASTLE_INFIRMARY, 9, 3
# 406 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_ISABELL_LOCATION_INFIRMARY
# 407 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hideobjectat 1, MAP_WHITECLIFF_CASTLE_INFIRMARY
# 408 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 240
# 409 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 410 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_DeliverBerries_3:
# 394 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Sightseeing
	goto WC_Infirmary_DeliverBerries_1

WC_Infirmary_DeliverBerries_4:
# 396 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Altitude
	goto WC_Infirmary_DeliverBerries_1

WC_Infirmary_DeliverBerries_5:
# 398 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Dania
	goto WC_Infirmary_DeliverBerries_1


WC_Infirmary_DayTwo::
# 434 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 4
# 435 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 436 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 437 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_DayTwo_Text_0
# 438 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 439 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 120
# 440 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectxyperm 1, 13, 9
# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showobjectat 1, MAP_WHITECLIFF_CASTLE_INFIRMARY
# 442 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_DOOR
# 443 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 1
# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, WC_Infirmary_DayTwo_Movement_0
# 445 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 448 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 449 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


RestAtInfirmary::
# 454 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 456 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_0, MSGBOX_YESNO
# 457 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestAtInfirmary_1
# 464 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 465 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end

RestAtInfirmary_1:
# 458 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto Common_Eventscript_Inn_Heal
# 459 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_1
# 460 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end


WC_Infirmary_PotionBox::
# 471 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 472 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_PotionBox_Text_0
# 473 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_BerryTree::
# 477 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 478 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryTree_Text_0
# 479 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GrassBox::
# 483 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 484 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_GrassBox_Text_0
# 485 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_Bookshelf::
# 489 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 490 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_0, MSGBOX_YESNO
# 491 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_2
WC_Infirmary_Bookshelf_1:
# 494 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WC_Infirmary_Bookshelf_5
WC_Infirmary_Bookshelf_4:
# 498 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_1, MSGBOX_YESNO
# 499 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_8
WC_Infirmary_Bookshelf_7:
# 502 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 503 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_Bookshelf_2:
# 492 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFieldInfo
	goto WC_Infirmary_Bookshelf_1

WC_Infirmary_Bookshelf_5:
# 495 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 496 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	goto WC_Infirmary_Bookshelf_4

WC_Infirmary_Bookshelf_8:
# 500 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Brewing
	goto WC_Infirmary_Bookshelf_7


InfirmaryMunna::
# 527 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 528 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 529 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 530 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 20
# 531 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox InfirmaryMunna_Text_0
# 532 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 533 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 4, LookLeft
# 534 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 4
# 535 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 538 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookLeft:
# 539 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellQuestions_Movement_0:
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
AskPlayerName_Movement_0:
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_in_place_down
	step_end

# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
WC_Infirmary_DayTwo_Movement_0:
# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

IsabellQuestions_Text_0:
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "???$"

IsabellQuestions_Text_1:
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_2:
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_3:
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_4:
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_5:
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerMon_Text_0:
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "My Roggenrola!$"

AskPlayerMon_Text_1:
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's a Litwick!$"

AskPlayerMon_Text_2:
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I have an Aron!$"

ConfirmPlayerMon_Text_0:
# 140 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{DESTROY_MUGSHOT}Are you sure?$"

ConfirmPlayerMon_Text_1:
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Isabell$"

LeaveBeforeStarter_Text_0:
# 219 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 236 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 254 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

IsabellBattleOver_Text_0:
# 296 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Can't you do anything?$"

WC_Infirmary_DeliverBerries_Text_0:
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It was nice.$"

WC_Infirmary_DeliverBerries_Text_1:
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "These cliffs are tall!$"

WC_Infirmary_DeliverBerries_Text_2:
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I ran into Diana.$"

WC_Infirmary_DeliverBerries_Text_3:
# 402 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Allright, you should get some rest.\nI'll wake you up in a couple of\lhours.$"

WC_Infirmary_DayTwo_Text_0:
# 437 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "-ve nobody else who can help-\n⋯\l-ne, I'll get them-$"

RestAtInfirmary_Text_0:
# 456 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This bed is nice and confortable. Would\n"
	.string "you like to rest?$"

RestAtInfirmary_Text_1:
# 459 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You and your pokemon feel refreshed!$"

WC_Infirmary_PotionBox_Text_0:
# 472 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Glass bottles are piled up in this crate.$"

WC_Infirmary_BerryTree_Text_0:
# 478 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A tree growing berries. It seems they\n"
	.string "will be used for making medicine.$"

WC_Infirmary_GrassBox_Text_0:
# 484 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A box full with gilded leaves. Maybe\n"
	.string "they have medicinal qualities?$"

WC_Infirmary_Bookshelf_Text_0:
# 490 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "There's a book here about potion\n"
	.string "brewing! Do you want to read it?$"

WC_Infirmary_Bookshelf_Text_1:
# 498 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Continue Reading?$"

InfirmaryMunna_Text_0:
# 531 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This Munna seems to be monitoring the\n"
	.string "patient!$"

HowAreYou::
# 84 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 89 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful, that means your condition\n"
	.string "has improved.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 94 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Correct, they're right outside\n"
	.string "Whitecliff Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 98 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you don't know? Not surprising, I\n"
	.string "suppose. Can you recall anything else?$"

Starving::
# 102 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}From what I could tell, you were\n"
	.string "starving to death. No signs of physical\l"
	.string "trauma.\p"
	.string "When'd you eat for the last time?$"

Amnesia::
# 157 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, then it was...?$"

Starter::
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, so you remember that as well.\p"
	.string "..\n"
	.string "How do I know?\p"
	.string "Well, you weren't the only one in\n"
	.string "critical condition when we found you.\p"
	.string "I've made sure your {STR_VAR_1} is\n"
	.string "healthy too.\p"
	.string "But, just to be sure, I need to test it's\n"
	.string "physical capabilities.\l"
	.string "And yours, too.\p"
	.string "Your pokeball is on the table over\n"
	.string "there. Pick it up.$"

MyNameIs::
# 179 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}By the way, you may call me Isabell. I\n"
	.string "run this infirmary.$"

NoPokemon::
# 208 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 269 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 273 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and {STR_VAR_1} are\n"
	.string "doing great.$"

WC_Infirmary_Healthy::
# 310 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected.\p"
	.string "Here, let me heal your {STR_VAR_1}.$"

WC_Infirmary_WhatNow::
# 315 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, with that out of the way...\n"
	.string "What is your plan now? I can't imagine\l"
	.string "losing your memories is pleasant.\p"
	.string "But, it seems your amnesia is only\n"
	.string "partial - you still know how to\l"
	.string "communicate and command your pokemon.\p"
	.string "$"

WC_Infirmary_ThePast::
# 320 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}I appreciate your sentiment, but not\n"
	.string "even I can cure amnesia.\p"
	.string "I specialize in curing phsyical trauma,\n"
	.string "mental issues are outside my expertise.$"

WC_Infirmary_ThePresent::
# 326 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmmm... I might know someone who can\n"
	.string "help you out. But, I have to pull some\l"
	.string "strings for that.\p"
	.string "You should stay here for a while to\n"
	.string "fully recover anyway.\p"
	.string "I almost ran out of Rawst & Sitrus\n"
	.string "berries taking care of you.\p"
	.string "So I'll need you to restock those for me\n"
	.string "at the farm.\p"
	.string "Some fresh air will do you well, and you\n"
	.string "can explore the castle if you want.\p"
	.string "The farm is just west of Whitecliff\n"
	.string "Castle. Tell them Isabell sent you.$"

IsabellGetBerries::
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Have you brought back the berries yet?\n"
	.string "If not, please don't bother me.$"

WC_Infirmary_BerryDelivery::
# 413 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}There you are. Do you have\neverything I sent you to collect?\p"
	.string "⋯\n Wonderful. That's all for now.\p"
	.string "Did you enjoy the walk around the\ncastle?$"

WC_Infirmary_Sightseeing::
# 419 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Mhm, this place is quite stunning.\nI love it up here.$"

WC_Infirmary_Altitude::
# 423 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Oh yeah, this place is incredibly\nhigh up.\p"
	.string "Makes it hard to reach. Especially\nwithout using the lift.$"

WC_Infirmary_Dania::
# 428 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Oh, you've met our cavalry captain?\nI assumed she'd already left for\lher next mission.\p"
	.string "I should've expected she would stall\nthings out⋯ typical.$"

GoldenFieldInfo::
# 506 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 516 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
