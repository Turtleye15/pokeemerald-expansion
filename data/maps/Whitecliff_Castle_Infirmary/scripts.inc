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
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

ConfirmPlayerMon_2:
# 142 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox AskAgain
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	goto ConfirmPlayerMon_1


# 183 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 184 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 188 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 189 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
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
IsabellLookRight:
# 194 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

# 211 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 219 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 220 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 222 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 223 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 227 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 232 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 233 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry VAR_PICKED_STARTER, CRY_MODE_NORMAL
# 234 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 235 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 236 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 237 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 238 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 241 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 243 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 244 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CAN_HEAL, 1
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 2
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 247 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 248 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 249 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 253 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 254 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 255 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 256 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 257 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 262 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 263 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 264 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 265 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 276 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 277 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 278 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 283 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 284 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 285 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 286 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Healthy
# 287 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 288 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, HealPlayer
# 289 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 290 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 291 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 292 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 294 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_WhatNow
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 1, 0, DYN_MULTICHOICE_CB_NONE, IsabellBattleOver_Text_0
# 296 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePast
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 298 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, LookUp
# 299 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 300 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePresent
# 301 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 302 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_CHAPTER_1, SUB_QUEST_1
# 303 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 304 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


# 333 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
HealPlayer:
# 334 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 334 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 334 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 334 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
	step_end

# 337 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkinplace:
# 338 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_in_place_left
	step_end

# 341 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookUp:
# 342 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 343 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
# 344 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 344 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 344 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 344 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 345 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

Infirmary_IsabellTalk::
# 353 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 354 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 355 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_CHAPTER_1
# 356 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, Infirmary_IsabellTalk_2
# 357 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, Infirmary_IsabellTalk_2
# 359 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, Infirmary_IsabellTalk_3
# 361 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 3, Infirmary_IsabellTalk_4
	return

Infirmary_IsabellTalk_2:
# 358 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellBeforeStarterGet
	return

Infirmary_IsabellTalk_3:
# 360 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_GetBerries
	return

Infirmary_IsabellTalk_4:
# 362 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto WC_Infirmary_DeliverBerries
	return


IsabellBeforeStarterGet::
# 368 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 369 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 370 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 371 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 372 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 373 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GetBerries::
# 377 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 378 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellGetBerries
# 379 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 380 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 381 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_DeliverBerries::
# 385 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeitem ITEM_BERRY_SATCHEL
# 386 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CHAPTER_1, 4
# 387 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 388 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryDelivery
# 389 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 390 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, WC_Infirmary_DeliverBerries_Text_0, WC_Infirmary_DeliverBerries_Text_1, WC_Infirmary_DeliverBerries_Text_2
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_RESULT
# 392 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, WC_Infirmary_DeliverBerries_3
# 394 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, WC_Infirmary_DeliverBerries_4
# 396 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, WC_Infirmary_DeliverBerries_5
WC_Infirmary_DeliverBerries_1:
# 400 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 401 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_DeliverBerries_Text_3
# 402 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 403 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 404 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	warpsilent MAP_WHITECLIFF_CASTLE_INFIRMARY, 9, 3
# 405 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_ISABELL_LOCATION_INFIRMARY
# 406 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 1
# 407 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 80
# 408 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return

WC_Infirmary_DeliverBerries_3:
# 393 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Sightseeing
	goto WC_Infirmary_DeliverBerries_1

WC_Infirmary_DeliverBerries_4:
# 395 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Altitude
	goto WC_Infirmary_DeliverBerries_1

WC_Infirmary_DeliverBerries_5:
# 397 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Dania
	goto WC_Infirmary_DeliverBerries_1


WC_Infirmary_DayTwo::
# 434 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	speakername ConfirmPlayerMon_Text_1
# 435 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_DayTwo_Text_0
# 436 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 437 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectxyperm 1, 13, 9
# 438 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_ISABELL_LOCATION_INFIRMARY
# 439 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playse SE_DOOR
# 440 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 1
# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, WC_Infirmary_DayTwo_Movement_0
# 444 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 445 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


RestAtInfirmary::
# 450 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 451 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 452 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_0, MSGBOX_YESNO
# 453 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestAtInfirmary_1
# 460 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 461 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end

RestAtInfirmary_1:
# 454 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto Common_Eventscript_Inn_Heal
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_1
# 456 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end


WC_Infirmary_PotionBox::
# 467 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 468 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_PotionBox_Text_0
# 469 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_BerryTree::
# 473 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 474 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryTree_Text_0
# 475 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GrassBox::
# 479 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 480 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_GrassBox_Text_0
# 481 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_Bookshelf::
# 485 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 486 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_0, MSGBOX_YESNO
# 487 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_2
WC_Infirmary_Bookshelf_1:
# 490 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WC_Infirmary_Bookshelf_5
WC_Infirmary_Bookshelf_4:
# 494 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_1, MSGBOX_YESNO
# 495 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_8
WC_Infirmary_Bookshelf_7:
# 498 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 499 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_Bookshelf_2:
# 488 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFieldInfo
	goto WC_Infirmary_Bookshelf_1

WC_Infirmary_Bookshelf_5:
# 491 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 492 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	goto WC_Infirmary_Bookshelf_4

WC_Infirmary_Bookshelf_8:
# 496 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Brewing
	goto WC_Infirmary_Bookshelf_7


InfirmaryMunna::
# 523 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 524 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 525 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 526 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 20
# 527 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox InfirmaryMunna_Text_0
# 528 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 529 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 4, LookLeft
# 530 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 4
# 531 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 534 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookLeft:
# 535 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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

# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
WC_Infirmary_DayTwo_Movement_0:
# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 441 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 235 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 253 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

IsabellBattleOver_Text_0:
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Can't you do anything?$"

WC_Infirmary_DeliverBerries_Text_0:
# 390 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It was nice.$"

WC_Infirmary_DeliverBerries_Text_1:
# 390 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "These cliffs are tall!$"

WC_Infirmary_DeliverBerries_Text_2:
# 390 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I ran into Diana.$"

WC_Infirmary_DeliverBerries_Text_3:
# 401 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Allright, you should get some rest.\nI'll wake you up in a couple of\lhours.$"

WC_Infirmary_DayTwo_Text_0:
# 435 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "-ve nobody else who can help-\n⋯\l-ne, I'll get them-$"

RestAtInfirmary_Text_0:
# 452 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This bed is nice and confortable. Would\n"
	.string "you like to rest?$"

RestAtInfirmary_Text_1:
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You and your pokemon feel refreshed!$"

WC_Infirmary_PotionBox_Text_0:
# 468 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Glass bottles are piled up in this crate.$"

WC_Infirmary_BerryTree_Text_0:
# 474 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A tree growing berries. It seems they\n"
	.string "will be used for making medicine.$"

WC_Infirmary_GrassBox_Text_0:
# 480 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A box full with gilded leaves. Maybe\n"
	.string "they have medicinal qualities?$"

WC_Infirmary_Bookshelf_Text_0:
# 486 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "There's a book here about potion\n"
	.string "brewing! Do you want to read it?$"

WC_Infirmary_Bookshelf_Text_1:
# 494 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Continue Reading?$"

InfirmaryMunna_Text_0:
# 527 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 164 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, then it was...?$"

Starter::
# 169 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}By the way, you may call me Isabell. I\n"
	.string "run this infirmary.$"

NoPokemon::
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 268 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 272 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and {STR_VAR_1} are\n"
	.string "doing great.$"

WC_Infirmary_Healthy::
# 308 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected.\p"
	.string "Here, let me heal your {STR_VAR_1}.$"

WC_Infirmary_WhatNow::
# 313 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, with that out of the way...\n"
	.string "What is your plan now? I can't imagine\l"
	.string "losing your memories is pleasant.\p"
	.string "But, it seems your amnesia is only\n"
	.string "partial - you still know how to\l"
	.string "communicate and command your pokemon.\p"
	.string "$"

WC_Infirmary_ThePast::
# 318 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}I appreciate your sentiment, but not\n"
	.string "even I can cure amnesia.\p"
	.string "I specialize in curing phsyical trauma,\n"
	.string "mental issues are something far too\l"
	.string "complex for even a veteran cleric.$"

WC_Infirmary_ThePresent::
# 324 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 348 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Have you brought back the berries yet?\n"
	.string "If not, please don't bother me.$"

WC_Infirmary_BerryDelivery::
# 412 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}There you are. Do you have\neverything I sent you to collect?\p"
	.string "⋯\n Wonderful. That's all for now.\p"
	.string "Did you enjoy the walk around the\ncastle?$"

WC_Infirmary_Sightseeing::
# 418 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Mhm, this place is quite stunning.\nI love it up here.$"

WC_Infirmary_Altitude::
# 422 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Oh yeah, this place is incredibly\nhigh up.\p"
	.string "Makes it hard to reach. Especially\nwithout using the lift.$"

WC_Infirmary_Dania::
# 427 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Oh, you've met our cavalry captain?\nI assumed she'd already left for\lher next mission"
	.string "I should've expected she would stall\nthings out⋯ typical.$"

GoldenFieldInfo::
# 502 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 512 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
