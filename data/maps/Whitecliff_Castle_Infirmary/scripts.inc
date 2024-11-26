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
	setflag FLAG_SYS_B_DASH
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_0, IsabellQuestions_Text_1
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_2, IsabellQuestions_Text_3, IsabellQuestions_Text_4
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
	walk_down
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 80 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 81 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 83 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
FaceDown:
# 87 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_down
	step_end

AskPlayerName::
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerMon
	return


AskPlayerMon::
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerMon_Text_0, AskPlayerMon_Text_1, AskPlayerMon_Text_2
# 126 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerMon_2
# 130 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerMon_3
# 135 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 136 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
AskPlayerMon_1:
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto ConfirmPlayerMon
	return

AskPlayerMon_2:
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerMon_1

AskPlayerMon_3:
# 131 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 132 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerMon_1


ConfirmPlayerMon::
# 142 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ConfirmPlayerMon_Text_0, MSGBOX_YESNO
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ConfirmPlayerMon_2
ConfirmPlayerMon_1:
# 147 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
# 150 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 151 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox MyNameIs
# 152 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

ConfirmPlayerMon_2:
# 144 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox AskAgain
# 145 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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

IsabellBeforeStarterGet::
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 208 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 209 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 210 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 211 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 213 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 220 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 227 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removefieldmugshot
# 229 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 230 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 231 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 234 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 235 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 241 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 243 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 244 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 247 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 248 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 249 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 250 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 251 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_CAN_HEAL, 1
# 252 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 2
# 253 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 254 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 255 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 256 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 260 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 261 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 262 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 263 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 264 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 269 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 270 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 271 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 272 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 283 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 284 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 285 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 290 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 291 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_PICKED_STARTER
# 292 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Healthy
# 293 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 294 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, HealPlayer
# 295 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 296 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 297 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 298 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
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
	closemessage
# 308 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


# 338 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
HealPlayer:
# 339 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 339 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 339 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 339 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
	step_end

# 342 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkinplace:
# 343 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_in_place_left
	step_end

# 346 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookUp:
# 347 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 348 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
# 349 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 349 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 349 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 349 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 350 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

Infirmary_IsabellTalk::
# 358 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	switch VAR_INFIRMARY_INTRO
# 359 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 0, Infirmary_IsabellTalk_2
# 360 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 1, Infirmary_IsabellTalk_2
# 362 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	case 2, Infirmary_IsabellTalk_3
	return

Infirmary_IsabellTalk_2:
# 361 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellBeforeStarterGet
	return

Infirmary_IsabellTalk_3:
# 363 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 364 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 365 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellGetBerries
# 366 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 367 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


RestAtInfirmary::
# 373 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 374 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 375 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_0, MSGBOX_YESNO
# 376 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestAtInfirmary_1
# 388 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 389 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end

RestAtInfirmary_1:
# 377 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 378 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_TO_BLACK
# 379 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	special HealPlayerParty
# 380 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_HEAL
# 381 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 80
# 382 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 383 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox RestAtInfirmary_Text_1
# 384 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	releaseall
	end


WC_Infirmary_PotionBox::
# 395 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 396 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_PotionBox_Text_0
# 397 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_BerryTree::
# 401 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 402 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_BerryTree_Text_0
# 403 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_GrassBox::
# 407 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 408 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_GrassBox_Text_0
# 409 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


WC_Infirmary_Bookshelf::
# 413 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 414 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_0, MSGBOX_YESNO
# 415 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_2
WC_Infirmary_Bookshelf_1:
# 418 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WC_Infirmary_Bookshelf_5
WC_Infirmary_Bookshelf_4:
# 422 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox WC_Infirmary_Bookshelf_Text_1, MSGBOX_YESNO
# 423 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WC_Infirmary_Bookshelf_8
WC_Infirmary_Bookshelf_7:
# 426 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 427 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

WC_Infirmary_Bookshelf_2:
# 416 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFieldInfo
	goto WC_Infirmary_Bookshelf_1

WC_Infirmary_Bookshelf_5:
# 419 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 420 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	goto WC_Infirmary_Bookshelf_4

WC_Infirmary_Bookshelf_8:
# 424 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Brewing
	goto WC_Infirmary_Bookshelf_7


InfirmaryMunna::
# 451 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 452 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 453 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playmoncry SPECIES_MUNNA, CRY_MODE_ENCOUNTER
# 454 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 20
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox InfirmaryMunna_Text_0
# 456 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 457 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 4, LookLeft
# 458 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 4
# 459 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 462 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
LookLeft:
# 463 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
	step_end

IsabellQuestions_Text_0:
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_1:
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_2:
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_3:
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_4:
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerMon_Text_0:
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I have a Roggenrola!$"

AskPlayerMon_Text_1:
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's a Litwick!$"

AskPlayerMon_Text_2:
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "My Honedge!$"

ConfirmPlayerMon_Text_0:
# 142 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{DESTROY_MUGSHOT}Are you sure?$"

LeaveBeforeStarter_Text_0:
# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 260 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

IsabellBattleOver_Text_0:
# 300 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Are you unable to restore my mind?$"

RestAtInfirmary_Text_0:
# 375 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This bed is nice and confortable. Would\n"
	.string "you like to rest?$"

RestAtInfirmary_Text_1:
# 383 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You and your pokemon feel refreshed!$"

WC_Infirmary_PotionBox_Text_0:
# 396 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Glass bottles are piled up in this crate.$"

WC_Infirmary_BerryTree_Text_0:
# 402 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A tree growing berries. It seems they\n"
	.string "will be used for making medicine.$"

WC_Infirmary_GrassBox_Text_0:
# 408 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "A box full with gilded leaves. Maybe\n"
	.string "they have medicinal qualities?$"

WC_Infirmary_Bookshelf_Text_0:
# 414 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "There's a book here about potion\n"
	.string "brewing! Do you want to read it?$"

WC_Infirmary_Bookshelf_Text_1:
# 422 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Continue Reading?$"

InfirmaryMunna_Text_0:
# 455 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "This Munna seems to be monitoring the\n"
	.string "patient!$"

HowAreYou::
# 90 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 95 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful, that means your condition\n"
	.string "has improved.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 100 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Correct, they're right outside\n"
	.string "Whitecliff Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 104 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you don't know? Not surprising, I\n"
	.string "suppose. Can you recall anything else?$"

Starving::
# 108 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
	.string "Healthy too.\p"
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
# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 275 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 279 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and your {STR_VAR_1}\n"
	.string "are doing great.$"

WC_Infirmary_Healthy::
# 312 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected\p"
	.string "Here, let me heal your {STR_VAR_1}$"

WC_Infirmary_WhatNow::
# 317 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So, with that out of the way...\n"
	.string "What is your plan now? I can't imagine\l"
	.string "losing your memories is pleasant.\p"
	.string "But, it seems your amnesia is only\n"
	.string "partial - you still know how to\l"
	.string "communicate and command your pokemon.\p"
	.string "$"

WC_Infirmary_ThePast::
# 322 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}I appreciate your sentiment, but not\n"
	.string "even I can cure amnesia.\p"
	.string "I specialize in curing phsyical trauma,\n"
	.string "mental issues are something far too\l"
	.string "complex for even a veteran cleric.$"

WC_Infirmary_ThePresent::
# 328 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 353 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Have you brought back the berries yet?\n"
	.string "If not, please don't bother me.$"

GoldenFieldInfo::
# 430 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 440 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
