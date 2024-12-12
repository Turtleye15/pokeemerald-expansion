Whitecliff_Castle_Infirmary_MapScripts::
# 2 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Whitecliff_Infirmary_OnLoad
# 3 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Whitecliff_Infirmary_OnTransition
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


Whitecliff_Infirmary_OnTransition::
# 28 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Update_IsabellLocation
	return


Infirmary_IsabellEnterBuilding::
# 33 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 1
# 35 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 36 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 52 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellQuestions_Movement_0
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_PIN
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername IsabellQuestions_Text_0
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_1, IsabellQuestions_Text_2
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_3, IsabellQuestions_Text_4, IsabellQuestions_Text_5
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_2
# 68 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_3
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starving
IsabellQuestions_1:
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFields
	goto IsabellQuestions_1

IsabellQuestions_3:
# 69 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoIdea
	goto IsabellQuestions_1


# 77 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
# 78 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 84 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
FaceDown:
# 85 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_down
	step_end

AskPlayerName::
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_PIN
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername IsabellQuestions_Text_0
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AskPlayerName_Movement_0
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	return


AskPlayerMon::
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerMon_Text_0, AskPlayerMon_Text_1, AskPlayerMon_Text_2
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerMon_2
# 132 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerMon_3
# 137 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARON
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ARON
AskPlayerMon_1:
# 140 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto ConfirmPlayerMon
	return

AskPlayerMon_2:
# 129 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 130 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerMon_1

AskPlayerMon_3:
# 133 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerMon_1


ConfirmPlayerMon::
# 144 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ConfirmPlayerMon_Text_0, MSGBOX_YESNO
# 145 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ConfirmPlayerMon_2
ConfirmPlayerMon_1:
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 150 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 151 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
# 152 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox MyNameIs
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 157 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 158 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 159 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

ConfirmPlayerMon_2:
# 146 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox AskAgain
# 147 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	goto ConfirmPlayerMon_1


# 188 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 189 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 193 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 194 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 198 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 204 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 205 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 206 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 206 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 206 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 222 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 223 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 224 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 227 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 231 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 232 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 237 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 238 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry VAR_PICKED_STARTER, CRY_MODE_NORMAL
# 239 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 241 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 243 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 244 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 247 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 248 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 249 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CAN_HEAL, 1
# 250 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 2
# 251 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 252 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 253 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 254 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 258 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 259 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 260 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 261 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 262 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 267 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 268 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 269 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 270 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 281 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 282 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 283 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 288 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 289 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 290 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 291 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Healthy
# 292 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, HealPlayer
# 294 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 296 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 298 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 299 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_WhatNow
# 300 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 1, 0, DYN_MULTICHOICE_CB_NONE, IsabellBattleOver_Text_0
# 301 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePast
# 302 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 303 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, LookUp
# 304 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 305 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePresent
# 306 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 307 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_CHAPTER_1, SUB_QUEST_1
# 308 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 309 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 310 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


# 339 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
HealPlayer:
# 340 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 340 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 340 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 340 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
	step_end

# 343 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkinplace:
# 344 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_in_place_left
	step_end

# 347 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookUp:
# 348 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 349 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 351 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

Infirmary_IsabellTalk::
# 359 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 360 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 361 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_CHAPTER_1
# 362 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, Infirmary_IsabellTalk_2
# 363 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, Infirmary_IsabellTalk_2
# 364 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, Infirmary_IsabellTalk_3
# 365 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 3, Infirmary_IsabellTalk_4
# 366 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 4, Infirmary_IsabellTalk_5
	return

Infirmary_IsabellTalk_2:
# 363 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellBeforeStarterGet
	return

Infirmary_IsabellTalk_3:
# 364 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_GetBerries
	return

Infirmary_IsabellTalk_4:
# 365 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_DeliverBerries
	return

Infirmary_IsabellTalk_5:
# 366 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_AskForRest
	return


IsabellBeforeStarterGet::
# 372 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 373 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 374 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 375 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 376 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 377 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GetBerries::
# 381 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 382 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellGetBerries
# 383 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 384 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 385 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_DeliverBerries::
# 389 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeitem ITEM_BERRY_SATCHEL
# 390 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 4
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 392 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryDelivery
# 393 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 394 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, WC_Infirmary_DeliverBerries_Text_0, WC_Infirmary_DeliverBerries_Text_1, WC_Infirmary_DeliverBerries_Text_2
# 395 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_RESULT
# 396 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, WC_Infirmary_DeliverBerries_3
# 398 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, WC_Infirmary_DeliverBerries_4
# 400 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, WC_Infirmary_DeliverBerries_5
WC_Infirmary_DeliverBerries_1:
# 404 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
	return

WC_Infirmary_DeliverBerries_3:
# 397 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Sightseeing
	goto WC_Infirmary_DeliverBerries_1

WC_Infirmary_DeliverBerries_4:
# 399 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Altitude
	goto WC_Infirmary_DeliverBerries_1

WC_Infirmary_DeliverBerries_5:
# 401 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Dania
	goto WC_Infirmary_DeliverBerries_1


WC_Infirmary_AskForRest::
# 409 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_AskForRest_Text_0, MSGBOX_YESNO
# 410 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WC_Infirmary_AskForRest_1
# 414 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_AskForRest_Text_1
# 415 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 416 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_AskForRest_1:
# 411 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_RestForNextDay
	return


WC_Infirmary_RestForNextDay::
# 422 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_RestForNextDay_Text_0
# 423 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 424 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 425 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 426 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 5
# 427 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 428 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_ISABELL_LOCATION_INFIRMARY
# 429 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hideobjectat 1, MAP_WHITECLIFF_CASTLE_INFIRMARY
# 430 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_ISABELL_STATE, 1
# 431 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 432 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_RestForNextDay_Text_1
# 433 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 434 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	warpsilent MAP_WHITECLIFF_CASTLE_INFIRMARY, 9, 3
# 436 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


WC_Infirmary_DayTwo::
# 461 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 462 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 6
# 463 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername IsabellQuestions_Text_0
# 464 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_DayTwo_Text_0
# 465 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 466 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 467 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_DayTwo_Text_1
# 468 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
	return


RestAtInfirmary::
# 474 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 475 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 476 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_0, MSGBOX_YESNO
# 477 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestAtInfirmary_1
# 484 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 485 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end

RestAtInfirmary_1:
# 478 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto Common_Eventscript_Inn_Heal
# 479 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_1
# 480 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end


WC_Infirmary_PotionBox::
# 491 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 492 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_PotionBox_Text_0
# 493 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_BerryTree::
# 497 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 498 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryTree_Text_0
# 499 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GrassBox::
# 503 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 504 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_GrassBox_Text_0
# 505 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_Bookshelf::
# 509 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 510 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_0, MSGBOX_YESNO
# 511 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_2
WC_Infirmary_Bookshelf_1:
# 514 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WC_Infirmary_Bookshelf_5
WC_Infirmary_Bookshelf_4:
# 518 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_1, MSGBOX_YESNO
# 519 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_8
WC_Infirmary_Bookshelf_7:
# 522 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 523 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_Bookshelf_2:
# 512 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFieldInfo
	goto WC_Infirmary_Bookshelf_1

WC_Infirmary_Bookshelf_5:
# 515 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 516 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	goto WC_Infirmary_Bookshelf_4

WC_Infirmary_Bookshelf_8:
# 520 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Brewing
	goto WC_Infirmary_Bookshelf_7


InfirmaryMunna::
# 547 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 548 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 549 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 550 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 20
# 551 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox InfirmaryMunna_Text_0
# 552 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 553 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 4, LookLeft
# 554 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 4
# 555 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 558 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookLeft:
# 559 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellQuestions_Movement_0:
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
AskPlayerName_Movement_0:
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_in_place_down
	step_end

IsabellQuestions_Text_0:
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "???$"

IsabellQuestions_Text_1:
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_2:
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_3:
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_4:
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_5:
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerMon_Text_0:
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "My Roggenrola!$"

AskPlayerMon_Text_1:
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's a Litwick!$"

AskPlayerMon_Text_2:
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I have an Aron!$"

ConfirmPlayerMon_Text_0:
# 144 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{DESTROY_MUGSHOT}Are you sure?$"

ConfirmPlayerMon_Text_1:
# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Isabell$"

LeaveBeforeStarter_Text_0:
# 223 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 258 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

IsabellBattleOver_Text_0:
# 300 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Can't you do anything?$"

WC_Infirmary_DeliverBerries_Text_0:
# 394 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It was nice.$"

WC_Infirmary_DeliverBerries_Text_1:
# 394 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "These cliffs are tall!$"

WC_Infirmary_DeliverBerries_Text_2:
# 394 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I ran into Diana.$"

WC_Infirmary_AskForRest_Text_0:
# 409 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{DESTROY_MUGSHOT}Would you like to take a break?$"

WC_Infirmary_AskForRest_Text_1:
# 414 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let me know when you're feeling\ntired.$"

WC_Infirmary_RestForNextDay_Text_0:
# 422 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Allright then, go get some rest.\nI'll wake you up in a couple of\lhours.$"

WC_Infirmary_RestForNextDay_Text_1:
# 432 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Some time later...$"

WC_Infirmary_DayTwo_Text_0:
# 464 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "-sy with other things.$"

WC_Infirmary_DayTwo_Text_1:
# 467 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Fine, have it your way.$"

RestAtInfirmary_Text_0:
# 476 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This bed is nice and confortable. Would\n"
	.string "you like to rest?$"

RestAtInfirmary_Text_1:
# 479 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You and your pokemon feel refreshed!$"

WC_Infirmary_PotionBox_Text_0:
# 492 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Glass bottles are piled up in this crate.$"

WC_Infirmary_BerryTree_Text_0:
# 498 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A tree growing berries. It seems they\n"
	.string "will be used for making medicine.$"

WC_Infirmary_GrassBox_Text_0:
# 504 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A box full with gilded leaves. Maybe\n"
	.string "they have medicinal qualities?$"

WC_Infirmary_Bookshelf_Text_0:
# 510 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "There's a book here about potion\n"
	.string "brewing! Do you want to read it?$"

WC_Infirmary_Bookshelf_Text_1:
# 518 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Continue Reading?$"

InfirmaryMunna_Text_0:
# 551 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This Munna seems to be monitoring the\n"
	.string "patient!$"

HowAreYou::
# 88 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 93 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful, that means your condition\n"
	.string "has improved.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 98 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Correct, they're right outside\n"
	.string "Whitecliff Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 102 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you don't know? Not surprising, I\n"
	.string "suppose. Can you recall anything else?$"

Starving::
# 106 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}From what I could tell, you were\n"
	.string "starving to death. No signs of physical\l"
	.string "trauma.\p"
	.string "When'd you eat for the last time?$"

Amnesia::
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 169 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, then it was...?$"

Starter::
# 174 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 183 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}By the way, you may call me Isabell. I\n"
	.string "run this infirmary.$"

NoPokemon::
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 273 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 277 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and {STR_VAR_1} are\n"
	.string "doing great.$"

WC_Infirmary_Healthy::
# 314 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected.\p"
	.string "Here, let me heal your {STR_VAR_1}.$"

WC_Infirmary_WhatNow::
# 319 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, with that out of the way...\n"
	.string "What is your plan now? I can't imagine\l"
	.string "losing your memories is pleasant.\p"
	.string "But, it seems your amnesia is only\n"
	.string "partial - you still know how to\l"
	.string "communicate and command your pokemon.\p"
	.string "$"

WC_Infirmary_ThePast::
# 324 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}I appreciate your sentiment, but not\n"
	.string "even I can cure amnesia.\p"
	.string "I specialize in curing phsyical trauma,\n"
	.string "mental issues are outside my expertise.$"

WC_Infirmary_ThePresent::
# 330 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 354 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Have you brought back the berries yet?\n"
	.string "If not, please don't bother me.$"

WC_Infirmary_BerryDelivery::
# 440 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}There you are. Do you have\neverything I sent you to collect?\p"
	.string "⋯\nWonderful. That's all for now.\p"
	.string "Did you enjoy the walk around the\ncastle?$"

WC_Infirmary_Sightseeing::
# 446 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Mhm, this place is quite stunning.\nI love it up here.$"

WC_Infirmary_Altitude::
# 450 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Oh yeah, this place is incredibly\nhigh up.\p"
	.string "Makes it hard to reach. Especially\nwithout using the lift.$"

WC_Infirmary_Dania::
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Oh, you've met our cavalry captain?\nI assumed she'd already left for\lher next mission.\p"
	.string "I should've expected she would stall\nthings out⋯ typical.$"

GoldenFieldInfo::
# 526 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 536 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
