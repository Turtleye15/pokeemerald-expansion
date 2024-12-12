Whitecliff_Castlle_MapScripts::
# 2 "data/maps/Whitecliff_Castlle/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WhiteCliff_Castle_OnTransition
# 3 "data/maps/Whitecliff_Castlle/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Whitecliff_Castlle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Whitecliff_Castlle_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Whitecliff_Castlle/scripts.pory"
	map_script_2 VAR_CHAPTER_1, 6, Whitecliff_Castle_ForcePlayerHelp
	.2byte 0


WhiteCliff_Castle_OnTransition::
# 13 "data/maps/Whitecliff_Castlle/scripts.pory"
	call Update_IsabellLocation
# 14 "data/maps/Whitecliff_Castlle/scripts.pory"
	compare VAR_CHAPTER_1, 6
	goto_if_eq WhiteCliff_Castle_OnTransition_1
	return

WhiteCliff_Castle_OnTransition_1:
# 15 "data/maps/Whitecliff_Castlle/scripts.pory"
	clearflag FLAG_CECILE_LOCATION_CASTLE
# 16 "data/maps/Whitecliff_Castlle/scripts.pory"
	setobjectxyperm 8, 41, 17
# 17 "data/maps/Whitecliff_Castlle/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	return


Whitecliff_Castle_ForcePlayerHelp::
# 23 "data/maps/Whitecliff_Castlle/scripts.pory"
	lockall
# 24 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_CHAPTER_1, 7
# 25 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_0
# 26 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_1
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 28 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_ForcePlayerHelp_Movement_0
# 29 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_ForcePlayerHelp_Movement_1
# 30 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 31 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_0
# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_2
# 33 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 34 "data/maps/Whitecliff_Castlle/scripts.pory"
	removefieldmugshot
# 35 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 36 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_4
# 37 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 38 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_2
# 39 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 41 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_0
# 42 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_5
# 43 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 44 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_LEDGE
# 45 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_ForcePlayerHelp_Movement_3
# 46 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 47 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_7
# 49 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 50 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 51 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_8
# 52 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 53 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_ForcePlayerHelp_Movement_4
# 54 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_5
# 55 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 11
# 56 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_9
# 61 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_RescueChoice
	return


Whitecliff_Castle_RescueChoice::
# 65 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultipush Whitecliff_Castle_RescueChoice_Text_0, 0
# 66 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultipush Whitecliff_Castle_RescueChoice_Text_1, 1
# 67 "data/maps/Whitecliff_Castlle/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Whitecliff_Castle_RescueChoice_2
Whitecliff_Castle_RescueChoice_1:
# 70 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 71 "data/maps/Whitecliff_Castlle/scripts.pory"
	switch VAR_RESULT
# 72 "data/maps/Whitecliff_Castlle/scripts.pory"
	case 0, Whitecliff_Castle_RescueChoice_5
# 73 "data/maps/Whitecliff_Castlle/scripts.pory"
	case 1, Whitecliff_Castle_RescueChoice_6
# 74 "data/maps/Whitecliff_Castlle/scripts.pory"
	case 2, Whitecliff_Castle_RescueChoice_7
	return

Whitecliff_Castle_RescueChoice_2:
# 68 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultipush Whitecliff_Castle_RescueChoice_Text_2, 2
	goto Whitecliff_Castle_RescueChoice_1

Whitecliff_Castle_RescueChoice_5:
# 72 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_Agree
	return

Whitecliff_Castle_RescueChoice_6:
# 73 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_Compensation
	return

Whitecliff_Castle_RescueChoice_7:
# 74 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_Reject
	return


Whitecliff_Castle_Agree::
# 79 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_Agree_Text_0
# 80 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 81 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_AfterChoice
	return


Whitecliff_Castle_Compensation::
# 85 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_Compensation_Text_0
# 87 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 88 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_AfterChoice
	return


Whitecliff_Castle_Reject::
# 92 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_Reject_Text_0
# 94 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 95 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 96 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_RescueChoice
	return


Whitecliff_Castle_AfterChoice::
# 100 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_ForcePlayerHelp_Movement_5
# 101 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 102 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_0
# 103 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 104 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_AfterChoice_Movement_0
# 105 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_LEDGE
# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_1
# 107 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 108 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_1
# 110 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 111 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_2
# 112 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 113 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_2
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_3
# 115 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 116 "data/maps/Whitecliff_Castlle/scripts.pory"
	setflag FLAG_CECILE_LOCATION_CASTLE
# 117 "data/maps/Whitecliff_Castlle/scripts.pory"
	releaseall
	end


# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
CecileLeave:
	step_end

WC_GuardLeft::
# 127 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 128 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 129 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_GuardLeft_Halt::
# 135 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 137 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 9, WC_GuardLeft_Halt_Movement_0
# 138 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 139 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_2
# 141 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 9, Whitecliff_Castle_AfterChoice_Movement_0
# 142 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 0
# 143 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	end


WC_GuardRight::
# 152 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 153 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 154 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 155 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 156 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_GuardRight_Halt::
# 160 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 161 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 162 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 10, WC_GuardRight_Halt_Movement_0
# 163 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardRight_NoEntry
# 164 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 165 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_2
# 166 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 10, Whitecliff_Castle_AfterChoice_Movement_0
# 167 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 0
# 168 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	end


WC_CliffGirl::
# 177 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 178 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 179 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_cliffgirl
# 180 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 181 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Gardener::
# 189 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 190 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 191 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Gardener
# 192 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 193 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Shopper::
# 201 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 202 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 203 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Shopper
# 204 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 205 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Fashiongirl::
# 212 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 213 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 214 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Fashion
# 215 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 216 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_BlacksmithNeighbour::
# 224 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 225 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 226 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Neighbour
# 227 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 228 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_CrazyGuy::
# 236 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 237 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 238 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_CrazyGuy
# 239 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 240 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


Whitecliff_Cecile::
# 248 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 249 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 250 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 251 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Cecile_Text_0
# 253 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 254 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Sign_Botanist::
# 258 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Botanist_Text_0, MSGBOX_SIGN
	return


WC_Sign_Blacksmith::
# 262 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Blacksmith_Text_0, MSGBOX_SIGN
	return


WC_Sign_Market::
# 266 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Market_Text_0, MSGBOX_SIGN
	return


# 28 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_0:
# 28 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 28 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 28 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
	step_end

# 29 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_1:
# 29 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_left
	step_end

# 38 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_2:
# 38 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
	step_end

# 45 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_3:
# 45 "data/maps/Whitecliff_Castlle/scripts.pory"
	jump_in_place_up
	step_end

# 53 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_4:
# 53 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
	step_end

# 54 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_5:
# 54 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
	step_end

# 104 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_0:
# 104 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_down
	step_end

# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_1:
# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
	jump_in_place_up
	step_end

# 111 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_2:
# 111 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 111 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
	step_end

# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_3:
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_right
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
	step_end

# 137 "data/maps/Whitecliff_Castlle/scripts.pory"
WC_GuardLeft_Halt_Movement_0:
# 137 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 137 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
	step_end

# 162 "data/maps/Whitecliff_Castlle/scripts.pory"
WC_GuardRight_Halt_Movement_0:
# 162 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 162 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_left
	step_end

Whitecliff_Castle_ForcePlayerHelp_Text_0:
# 25 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "???$"

Whitecliff_Castle_ForcePlayerHelp_Text_1:
# 26 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Well, lookie here. They've got some\ngood timing!$"

Whitecliff_Castle_ForcePlayerHelp_Text_2:
# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Hey hey, come here. No need to be\nafraid of me.$"

Whitecliff_Castle_ForcePlayerHelp_Text_3:
# 35 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Isabell$"

Whitecliff_Castle_ForcePlayerHelp_Text_4:
# 36 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}It's fine, {PLAYER}.$"

Whitecliff_Castle_ForcePlayerHelp_Text_5:
# 42 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I saw you run around the castle\nyesterday⋯ So you're Isabell's\lnew toy? Must be nice.$"

Whitecliff_Castle_ForcePlayerHelp_Text_6:
# 46 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Cecile$"

Whitecliff_Castle_ForcePlayerHelp_Text_7:
# 47 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oh, how uncivilized of me, I haven't\neven introduced myself! I'm Cecile.\p"
	.string "Nice to meet you, {PLAYER}.\nI hope we'll get along well, hehe$"

Whitecliff_Castle_ForcePlayerHelp_Text_8:
# 51 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Cecile. Stop it. You're just making them\nconfused.$"

Whitecliff_Castle_ForcePlayerHelp_Text_9:
# 56 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I've got one more task for you\nbefore I can let you go.\p"
	.string "We've got report that some children\nhave gone missing.\p"
	.string "Normally I wouldn't ask outsiders to\nhelp⋯ but there have been other\lincidents today too.\p"
	.string "It's too many to be a coincidence,\nbut my current priority is to get\lthe citizens back to safety.\p"
	.string "I need you to work with Cecile to\nlocate and bring back the kids.$"

Whitecliff_Castle_RescueChoice_Text_0:
# 65 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Sure thing!$"

Whitecliff_Castle_RescueChoice_Text_1:
# 66 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Fine, but what's in it for me?$"

Whitecliff_Castle_RescueChoice_Text_2:
# 68 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "What if I say no?$"

Whitecliff_Castle_Agree_Text_0:
# 79 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Good, thank you for accepting. I'll make sure it is worth your while$"

Whitecliff_Castle_Compensation_Text_0:
# 85 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Well, besides a payment, I'll get a\ngood word for you in with my\lparents.\p"
	.string "As long as you succeed.$"

Whitecliff_Castle_Reject_Text_0:
# 92 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Well, if you don't agree I'll have\nyou imprisoned for not following\la royal's orders.\p"
	.string "Justー trust me, helping out will be\nbeneficial for you too.$"

Whitecliff_Castle_AfterChoice_Text_0:
# 102 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "See! I knew they'd help. Nobody can\nresist you, ofcourse.$"

Whitecliff_Castle_AfterChoice_Text_1:
# 108 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I've already scoped out where the\nkids could be taken to.\p"
	.string "But there's too many ruffians for me\nto take on alone. I need someone to\lprovide a distraction.\p$"

Whitecliff_Castle_AfterChoice_Text_2:
# 113 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Meet me at the Calcite Caves. Don't\nkeep me waiting! I won't be nice if\lyou forget about me!$"

Whitecliff_Cecile_Text_0:
# 251 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Hmm? You're new here, aren't you...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}I hope we can get along!$"

WC_Sign_Botanist_Text_0:
# 258 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Rowin's Flora.\n A flower for everyone!$"

WC_Sign_Blacksmith_Text_0:
# 262 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whitecliff's finest blacksmith!$"

WC_Sign_Market_Text_0:
# 266 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Market days: Wednesday & Thursday$"

WC_GuardLeft_NoEntry::
# 147 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Hold it. No entry beyond this point.$"

WC_GuardRight_NoEntry::
# 172 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Sorry kid, can't let ye through\nwithout an official invitation$"

WC_text_cliffgirl::
# 184 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I love the view up here. I wonder what's\n"
	.string "on that island on the horizon.$"

WC_text_Gardener::
# 196 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oho, a youngster found our little\n"
	.string "garden. If you're interested in\l"
	.string "gardening too, you should talk with my\l"
	.string "husband! He's inside.$"

WC_text_Shopper::
# 207 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I was hoping to buy a batch of time\n"
	.string "candles, but it seems the candlemaker's\l"
	.string "not here today$"

WC_text_Fashion::
# 219 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whoa... your outfit is so cool! I've\n"
	.string "never seen something like that! Where\l"
	.string "did you get it from?$"

WC_text_Neighbour::
# 231 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I'm glad we've got a skilled blacksmith\n"
	.string "in Whitecliff, but living next to her\l"
	.string "drives me insane.\p"
	.string "How can someone produce this much\n"
	.string "sound!?$"

WC_text_CrazyGuy::
# 243 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "The sun is moving! It's moving, I tell ya!\n"
	.string "The end is upon us!$"
