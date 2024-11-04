Whitecliff_Castle_Infirmary_MapScripts::
# 2 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Whitecliff_Infirmary_OnLoad
	.byte 0


Whitecliff_Infirmary_OnLoad::
# 14 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_INFIRMARY_INTRO, 0
	goto_if_eq Whitecliff_Infirmary_OnLoad_1
# 19 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_INFIRMARY_INTRO, 1
	goto_if_eq Whitecliff_Infirmary_OnLoad_2
	return

Whitecliff_Infirmary_OnLoad_1:
# 15 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 16 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectxyperm 1, 13, 10
# 17 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

Whitecliff_Infirmary_OnLoad_2:
# 20 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectxyperm 1, 5, 6
	return


Infirmary_IsabellEnterBuilding::
# 36 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 1
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 52 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_0, IsabellQuestions_Text_1
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_2, IsabellQuestions_Text_3, IsabellQuestions_Text_4
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_2
# 67 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_3
# 71 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starving
IsabellQuestions_1:
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFields
	goto IsabellQuestions_1

IsabellQuestions_3:
# 68 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoIdea
	goto IsabellQuestions_1


# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
# 77 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 78 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 85 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
FaceDown:
# 86 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_down
	step_end

AskPlayerName::
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	return


AskPlayerMon::
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerMon_Text_0, AskPlayerMon_Text_1, AskPlayerMon_Text_2
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerMon_2
# 129 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerMon_3
# 134 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 135 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
AskPlayerMon_1:
# 137 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto ConfirmPlayerMon
	return

AskPlayerMon_2:
# 126 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerMon_1

AskPlayerMon_3:
# 130 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 131 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerMon_1


ConfirmPlayerMon::
# 141 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ConfirmPlayerMon_Text_0, MSGBOX_YESNO
# 142 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ConfirmPlayerMon_2
ConfirmPlayerMon_1:
# 146 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 147 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
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
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox AskAgain
# 144 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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

IsabellBeforeStarterGet::
# 206 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 208 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 209 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 210 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 211 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 219 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 220 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 224 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 227 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 229 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 230 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 233 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 234 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 239 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 241 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 243 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 244 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 247 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 248 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CAN_HEAL, 1
# 249 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 2
# 250 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 251 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 252 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 253 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 257 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 258 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 259 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 260 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 261 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 266 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 267 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 268 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 269 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 280 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 281 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 282 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 287 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 288 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 289 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Healthy
# 290 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 291 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, HealPlayer
# 292 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 294 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 296 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_WhatNow
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 1, 0, DYN_MULTICHOICE_CB_NONE, IsabellBattleOver_Text_0
# 298 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePast
# 299 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 300 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, LookUp
# 301 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 302 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_ThePresent
# 303 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_CHAPTER_1
# 304 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 305 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
	switch VAR_INFIRMARY_INTRO
# 356 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, Infirmary_IsabellTalk_2
# 357 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, Infirmary_IsabellTalk_2
# 359 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, Infirmary_IsabellTalk_3
	return

Infirmary_IsabellTalk_2:
# 358 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellBeforeStarterGet
	return

Infirmary_IsabellTalk_3:
# 360 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 361 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 362 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellGetBerries
# 363 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 364 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


RestAtInfirmary::
# 370 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 371 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 372 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_0, MSGBOX_YESNO
# 373 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestAtInfirmary_1
# 384 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 385 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end

RestAtInfirmary_1:
# 374 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 375 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 376 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 377 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 80
# 378 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 379 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_1
# 380 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end


WC_Infirmary_PotionBox::
# 391 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 392 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_PotionBox_Text_0
# 393 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_BerryTree::
# 397 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 398 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryTree_Text_0
# 399 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GrassBox::
# 403 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 404 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_GrassBox_Text_0
# 405 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_Bookshelf::
# 409 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 410 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_0, MSGBOX_YESNO
# 411 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_2
WC_Infirmary_Bookshelf_1:
# 414 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WC_Infirmary_Bookshelf_5
WC_Infirmary_Bookshelf_4:
# 418 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_1, MSGBOX_YESNO
# 419 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_8
WC_Infirmary_Bookshelf_7:
# 422 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 423 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_Bookshelf_2:
# 412 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFieldInfo
	goto WC_Infirmary_Bookshelf_1

WC_Infirmary_Bookshelf_5:
# 415 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 416 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	goto WC_Infirmary_Bookshelf_4

WC_Infirmary_Bookshelf_8:
# 420 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Brewing
	goto WC_Infirmary_Bookshelf_7


InfirmaryMunna::
# 447 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 448 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 449 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 450 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 20
# 451 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox InfirmaryMunna_Text_0
# 452 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 453 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 4, LookLeft
# 454 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 4
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 458 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookLeft:
# 459 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

IsabellQuestions_Text_0:
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_1:
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_2:
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_3:
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_4:
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerMon_Text_0:
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I have a Roggenrola!$"

AskPlayerMon_Text_1:
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's a Litwick!$"

AskPlayerMon_Text_2:
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "My Honedge!$"

ConfirmPlayerMon_Text_0:
# 141 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{DESTROY_MUGSHOT}Are you sure?$"

LeaveBeforeStarter_Text_0:
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 241 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 257 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

IsabellBattleOver_Text_0:
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Are you unable to restore my mind?$"

RestAtInfirmary_Text_0:
# 372 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This bed is nice and confortable. Would\n"
	.string "you like to rest?$"

RestAtInfirmary_Text_1:
# 379 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You and your pokemon feel refreshed!$"

WC_Infirmary_PotionBox_Text_0:
# 392 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Glass bottles are piled up in this crate.$"

WC_Infirmary_BerryTree_Text_0:
# 398 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A tree growing berries. It seems they\n"
	.string "will be used for making medicine.$"

WC_Infirmary_GrassBox_Text_0:
# 404 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A box full with gilded leaves. Maybe\n"
	.string "they have medicinal qualities?$"

WC_Infirmary_Bookshelf_Text_0:
# 410 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "There's a book here about potion\n"
	.string "brewing! Do you want to read it?$"

WC_Infirmary_Bookshelf_Text_1:
# 418 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Continue Reading?$"

InfirmaryMunna_Text_0:
# 451 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This Munna seems to be monitoring the\n"
	.string "patient!$"

HowAreYou::
# 89 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 94 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful, that means your condition\n"
	.string "has improved.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 99 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Correct, they're right outside\n"
	.string "Whitecliff Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you don't know? Not surprising, I\n"
	.string "suppose. Can you recall anything else?$"

Starving::
# 107 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
	.string "Healthy too.\p"
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
# 215 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 272 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 276 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and your {STR_VAR_1}\n"
	.string "are doing great.$"

WC_Infirmary_Healthy::
# 309 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected\p"
	.string "Here, let me heal your {STR_VAR_1}$"

WC_Infirmary_WhatNow::
# 314 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, with that out of the way...\n"
	.string "What is your plan now? I can't imagine\l"
	.string "losing your memories is pleasant.\p"
	.string "But, it seems your amnesia is only\n"
	.string "partial - you still know how to\l"
	.string "communicate and command your pokemon.\p"
	.string "$"

WC_Infirmary_ThePast::
# 319 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}I appreciate your sentiment, but not\n"
	.string "even I can cure amnesia.\p"
	.string "I specialize in curing phsyical trauma,\n"
	.string "mental issues are something far too\l"
	.string "complex for even a veteran cleric.$"

WC_Infirmary_ThePresent::
# 325 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmmm... I might know someone who can\n"
	.string "help you out. But, I have to pull some\l"
	.string "strings and that will take some time.\p"
	.string "I was planning to have you here for a\n"
	.string "day or 2 at least, so I can monitor your\l"
	.string "condition.\p"
	.string "So in the meantime, you can run some\n"
	.string "errands for me.\p"
	.string "You made me use up quite a number of\n"
	.string "supplies to keep you alive, so as a\l"
	.string "payment I'll need you to go fetch a\l"
	.string "fresh batch of Lum and Rawst berries\p"
	.string "It's nothing too strenuous, I just have\n"
	.string "other matters to attent to at the\l"
	.string "moment.\p"
	.string "Plus, some fresh air might do you well.\n"
	.string "And you'll be able to tour the area if\l"
	.string "you'd like.\p"
	.string "The farm I get my goods from is just\n"
	.string "west of Whitecliff Castle. Tell them\l"
	.string "Isabell sent you.$"

IsabellGetBerries::
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Have you brought back the berries yet?\n"
	.string "If not, please don't bother me.$"

GoldenFieldInfo::
# 426 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 436 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
