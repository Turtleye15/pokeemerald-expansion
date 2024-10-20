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
	goto IsabellQuestions
	return


# 21 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellEnter:
# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 22 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 23 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_right
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 24 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 25 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 26 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

IsabellQuestions::
# 30 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellEnter
# 31 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 32 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_TEMP_2, 1
# 33 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay 60
# 34 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	addobject 2
# 35 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	clearflag FLAG_STARTER_BALL
# 36 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellWalkLeft
# 37 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 38 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
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
	dynmultichoice 0, 0, TRUE 3, 0, DYN_MULTICHOICE_CB_NONE, AskPlayerName_Text_0, AskPlayerName_Text_1, AskPlayerName_Text_2
# 101 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AskPlayerName_2
# 105 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AskPlayerName_3
# 110 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HONEDGE
# 111 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_HONEDGE
AskPlayerName_1:
# 113 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Starter
# 114 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 115 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellStepBackLeft
# 116 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 1
# 117 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return

AskPlayerName_2:
# 102 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ROGGENROLA
# 103 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_ROGGENROLA
	goto AskPlayerName_1

AskPlayerName_3:
# 106 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LITWICK
# 107 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_PICKED_STARTER, SPECIES_LITWICK
	goto AskPlayerName_1


# 136 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Question:
# 137 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_question_mark
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 138 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 141 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Exclamation:
# 142 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	emote_exclamation_mark
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 143 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
	step_end

# 146 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellLookRight:
# 147 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_left
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 148 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	delay_16
# 149 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_up
	step_end

# 152 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellStepBackLeft:
# 153 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 154 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
# 155 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

IsabellBeforeStarterGet::
# 159 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 160 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	faceplayer
# 161 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NoPokemon
# 162 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement 1, IsabellFaceRight
# 163 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 164 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 165 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 172 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
IsabellFaceRight:
# 173 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	face_right
	step_end

LeaveBeforeStarter::
# 177 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lock
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox LeaveBeforeStarter_Text_0
# 179 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 180 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 181 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 182 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	return


# 185 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
GoBack:
# 186 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_up
	step_end

ObtainStarterBall::
# 191 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	showmonpic VAR_PICKED_STARTER, 10, 3
# 192 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox ObtainStarterBall_Text_0
# 193 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmessage
# 194 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	givemon VAR_PICKED_STARTER, 5, ITEM_ORAN_BERRY
# 195 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	removeobject 2
# 197 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_STARTER_BALL
# 198 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 199 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	setvar VAR_INFIRMARY_INTRO, 2
# 200 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call NicknamePartyMon
# 201 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 202 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	closemessage
# 203 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	goto IsabellStarterBattle
	return


NicknamePartyMon::
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 208 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	hidemonpic
# 209 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 210 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 211 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


IsabellStarterBattle::
# 216 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walkup
# 217 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	waitmovement 0
# 218 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	trainerbattle_single TRAINER_ISABELL_1, Isabell_1_Intro, Isabell_1_Outro, IsabellBattleOver
	return


# 229 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
Walkup:
# 230 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_down
# 231 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	walk_left
	step_end

IsabellBattleOver::
# 236 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	lockall
# 237 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	msgbox Healthy
# 238 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	release
	end


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

AskPlayerName_Text_0:
# 100 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Roggenrola$"

AskPlayerName_Text_1:
# 100 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Litwick$"

AskPlayerName_Text_2:
# 100 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Honedge$"

LeaveBeforeStarter_Text_0:
# 178 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Don't try to sneak away!$"

ObtainStarterBall_Text_0:
# 192 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "It's your {STR_VAR_1}!$"

NicknamePartyMon_Text_0:
# 207 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Did it have a nickname?$"

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
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Hmm, you can't remember? Not surprising,\n"
	.string "I suppose. Up until what do you\l"
	.string "remember?$"

Starving::
# 86 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}From what I could tell, you were\n"
	.string "starving to death. No signs of physical\l"
	.string "trauma.\p"
	.string "When'd you eat for the last time?$"

Amnesia::
# 119 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}So... you really don't remember?\p"
	.string "Do you at least know who you are?$"

PlayerName::
# 123 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 127 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
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
# 168 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Well, what are you waiting for? I don't\n"
	.string "have all day.$"

Isabell_1_Intro::
# 221 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Let's see if you still remember how to\n"
	.string "battle.$"

Isabell_1_Outro::
# 225 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "Seems like you and your {STR_VAR_1}\n"
	.string "are doing great.$"

Healthy::
# 242 "data/maps/Whitecliff_Castle_Infirmary/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It appears that you've both made a full\n"
	.string "recovery.\l"
	.string "Well, under my care that's to be\l"
	.string "expected\p"
	.string "Though, not even I can cure amnesia.$"
