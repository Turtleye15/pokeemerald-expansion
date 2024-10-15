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
	setvar VAR_TEMP_4, 1
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq IsabellQuestions_2
# 43 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkRight
IsabellQuestions_1:
# 45 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 46 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox HowAreYou
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 2, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_0, IsabellQuestions_Text_1
# 48 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox TellPlayer
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, IsabellQuestions_Text_2, IsabellQuestions_Text_3, IsabellQuestions_Text_4
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq IsabellQuestions_6
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_7
# 57 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starving
IsabellQuestions_5:
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 60 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 40 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
	goto IsabellQuestions_1

IsabellQuestions_6:
# 51 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox GoldenFields
	goto IsabellQuestions_5

IsabellQuestions_7:
# 54 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoIdea
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
# 102 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 104 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 105 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 106 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 107 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 108 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox PlayerName
# 109 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 110 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerName_Text_0, AskPlayerName_Text_1, AskPlayerName_Text_2
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerName_2
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerName_3
# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
AskPlayerName_1:
# 124 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 125 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 126 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq AskPlayerName_8
# 130 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
AskPlayerName_7:
# 132 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 133 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

AskPlayerName_2:
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerName_1

AskPlayerName_3:
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 118 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerName_1

AskPlayerName_8:
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackRight
	goto AskPlayerName_7


# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 156 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 159 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 164 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 166 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 167 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 170 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 171 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 172 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 173 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

# 176 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackRight:
# 177 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 179 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

IsabellBeforeStarterGet::
# 183 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 184 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


LeaveBeforeStarter::
# 194 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 197 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 198 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 203 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 208 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 209 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 210 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 211 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 212 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 213 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 214 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 215 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 222 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 223 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 224 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 226 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 231 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 232 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 233 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 244 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 245 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 246 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 251 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 252 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Healthy
# 253 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


IsabellQuestions_Text_0:
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Could be better.$"

IsabellQuestions_Text_1:
# 47 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Awful...$"

IsabellQuestions_Text_2:
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Golden Fields?$"

IsabellQuestions_Text_3:
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "I'm not sure...$"

IsabellQuestions_Text_4:
# 49 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You tell me.$"

AskPlayerName_Text_0:
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Roggenrola$"

AskPlayerName_Text_1:
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Litwick$"

AskPlayerName_Text_2:
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Honedge$"

LeaveBeforeStarter_Text_0:
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Don't try to sneak away$"

ObtainStarterBall_Text_0:
# 209 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 222 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

HowAreYou::
# 79 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 84 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Wonderful.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields\p"
	.string "What happened to you?$"

GoldenFields::
# 89 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Yeah, they're right outside Whitecliff\n"
	.string "Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

NoIdea::
# 93 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you can't remember? Not surprising,\n"
	.string "I suppose. Up until what do you\l"
	.string "remember?$"

Starving::
# 97 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}From what I could tell, you were\n"
	.string "starving to death. No signs of physical\l"
	.string "trauma.\p"
	.string "When'd you eat for the last time?$"

Amnesia::
# 135 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 139 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Good, seems like you remember that as\n"
	.string "well.\p"
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
# 189 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 236 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 240 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You both seem to be in good condition\n"
	.string "again$"

Healthy::
# 257 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Excellent$"
