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
	delay 40
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
	compare VAR_RESULT, 1
	goto_if_eq IsabellQuestions_6
# 52 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq IsabellQuestions_7
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellQuestions_Text_8
IsabellQuestions_5:
# 58 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 59 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto AskPlayerName
	return

IsabellQuestions_2:
# 39 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
	goto IsabellQuestions_1

IsabellQuestions_6:
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellQuestions_Text_6
	goto IsabellQuestions_5

IsabellQuestions_7:
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox IsabellQuestions_Text_7
	goto IsabellQuestions_5


# 61 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkLeft:
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 62 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 63 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 64 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 65 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 66 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 67 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellWalkRight:
# 71 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 71 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 72 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 73 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 74 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 75 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 76 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBack:
# 90 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 91 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 92 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

AskPlayerName::
# 96 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Question
# 97 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 98 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellLookRight
# 99 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 100 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Amnesia
# 101 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exclamation
# 102 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBack
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 104 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 110 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 112 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 120 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 121 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 122 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

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
# 50 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Yeah, they're right outside Whitecliff\n"
	.string "Castle.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "You don't know where that is?$"

IsabellQuestions_Text_7:
# 53 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Hmm, you can't remember? Not surprising,\n"
	.string "I suppose. Up until what do you\l"
	.string "remember?$"

IsabellQuestions_Text_8:
# 56 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "You were starving to death. No signs of\n"
	.string "physical trauma.\p"
	.string "When'd you eat for the last time?$"

HowAreYou::
# 78 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Ah, you're awake.\n"
	.string "Good.\p"
	.string "How are you feeling?$"

TellPlayer::
# 84 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Thats an improvement. Looks like my\n"
	.string "treatment worked wonders.\p"
	.string "You were on Yveltal's door when you\n"
	.string "were brought here.\p"
	.string "Apparantly you were out cold in the\n"
	.string "Golden Fields What happened to you?$"

Amnesia::
# 106 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "So... you really don't remember? Nothing\n"
	.string "recent at all?\p"
	.string "Do you at least know who you are?$"
