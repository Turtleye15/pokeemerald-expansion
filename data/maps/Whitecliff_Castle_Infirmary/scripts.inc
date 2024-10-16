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
	setvar VAR_TEMP_0, 1
# 18 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


Infirmary_IsabellCheckPlayerLeft::
# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 1
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_0, 2
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellQuestions
	return


# 28 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 29 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 30 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 30 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 31 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 31 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 33 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 35 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 41 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 42 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 44 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq IsabellQuestions_2
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkRight
IsabellQuestions_1:
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 52 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_0, IsabellQuestions_Text_1
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_2, IsabellQuestions_Text_3, IsabellQuestions_Text_4
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_6
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_7
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starving
IsabellQuestions_5:
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
	goto IsabellQuestions_1

IsabellQuestions_6:
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFields
	goto IsabellQuestions_5

IsabellQuestions_7:
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoIdea
	goto IsabellQuestions_5


# 68 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
# 69 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 69 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 70 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 71 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkRight:
# 78 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
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
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 82 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 83 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

AskPlayerName::
# 108 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 109 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 110 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerName_Text_0, AskPlayerName_Text_1, AskPlayerName_Text_2
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerName_2
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerName_3
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 128 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
AskPlayerName_1:
# 130 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 131 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 132 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq AskPlayerName_8
# 136 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
AskPlayerName_7:
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 139 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

AskPlayerName_2:
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerName_1

AskPlayerName_3:
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerName_1

AskPlayerName_8:
# 133 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackRight
	goto AskPlayerName_7


# 158 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 159 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
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
Exclamation:
# 164 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
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
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 168 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 169 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 171 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 174 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 175 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 176 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 177 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

# 180 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackRight:
# 181 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 182 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 182 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 182 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 183 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

IsabellBeforeStarterGet::
# 187 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 188 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 189 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 190 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


LeaveBeforeStarter::
# 198 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 203 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 206 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 213 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 214 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 215 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 219 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 220 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 2
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 222 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 223 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 224 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 229 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 230 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 231 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 232 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 237 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 238 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 239 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 250 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 251 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 251 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 252 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 257 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 258 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Healthy
# 259 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


IsabellQuestions_Text_0:
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_1:
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_2:
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_3:
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_4:
# 55 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerName_Text_0:
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Roggenrola$"

AskPlayerName_Text_1:
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Litwick$"

AskPlayerName_Text_2:
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Honedge$"

LeaveBeforeStarter_Text_0:
# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 213 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 228 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

HowAreYou::
# 85 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 90 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful, that means your condition\n"
	.string "has improved.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 95 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Correct, they're right outside\n"
	.string "Whitecliff Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 99 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you can't remember? Not surprising,\n"
	.string "I suppose. Up until what do you\l"
	.string "remember?$"

Starving::
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}From what I could tell, you were\n"
	.string "starving to death. No signs of physical\l"
	.string "trauma.\p"
	.string "When'd you eat for the last time?$"

Amnesia::
# 141 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 145 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{PLAYER}... so you did not forget\n"
	.string "everything.\p"
	.string "How about your hometown? Friends?\n"
	.string "Family?\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "Nothing at all... And what about your\n"
	.string "Pokemon? You had one with you.$"

Starter::
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, so you remember that as well.\p"
	.string "..\n"
	.string "How do I know?\p"
	.string "Well, you weren't the only in critical\n"
	.string "condition when we found you.\p"
	.string "I've made sure your {STR_VAR_1} is\n"
	.string "healthy too.\p"
	.string "But, just to be sure, I need to test it's\n"
	.string "physical capabilities.\l"
	.string "And yours, too.\p"
	.string "Your pokeball is on the table over\n"
	.string "there. Pick it up.$"

NoPokemon::
# 193 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and your {STR_VAR_1}\n"
	.string "are doing great.$"

Healthy::
# 263 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected\p"
	.string "Though, not even I can cure amnesia.$"
