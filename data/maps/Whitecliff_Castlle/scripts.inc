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
	call Update_CecileLocation
# 15 "data/maps/Whitecliff_Castlle/scripts.pory"
	compare VAR_CHAPTER_1, 6
	goto_if_eq WhiteCliff_Castle_OnTransition_1
	return

WhiteCliff_Castle_OnTransition_1:
# 16 "data/maps/Whitecliff_Castlle/scripts.pory"
	clearflag FLAG_CECILE_LOCATION_CASTLE
# 17 "data/maps/Whitecliff_Castlle/scripts.pory"
	setobjectxyperm 8, 41, 17
# 18 "data/maps/Whitecliff_Castlle/scripts.pory"
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
	return


Whitecliff_Castle_ForcePlayerHelp::
# 24 "data/maps/Whitecliff_Castlle/scripts.pory"
	lockall
# 25 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_CHAPTER_1, 7
# 26 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_ForcePlayerHelp_Movement_0
# 28 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 29 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_0
# 30 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_1
# 31 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_ForcePlayerHelp_Movement_1
# 33 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_ForcePlayerHelp_Movement_2
# 34 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 35 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_0
# 36 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_2
# 37 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 38 "data/maps/Whitecliff_Castlle/scripts.pory"
	removefieldmugshot
# 39 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_3
# 40 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 41 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_4
# 42 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 43 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_4
# 44 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_0
# 47 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_5
# 48 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 49 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_LEDGE
# 50 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_ForcePlayerHelp_Movement_5
# 51 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 52 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_7
# 54 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 55 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 56 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_8
# 57 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 58 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_ForcePlayerHelp_Movement_6
# 59 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_3
# 60 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 11
# 61 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_ForcePlayerHelp_Text_9
# 66 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_RescueChoice
	return


Whitecliff_Castle_RescueChoice::
# 70 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultipush Whitecliff_Castle_RescueChoice_Text_0, 0
# 71 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultipush Whitecliff_Castle_RescueChoice_Text_1, 1
# 72 "data/maps/Whitecliff_Castlle/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq Whitecliff_Castle_RescueChoice_2
Whitecliff_Castle_RescueChoice_1:
# 75 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 76 "data/maps/Whitecliff_Castlle/scripts.pory"
	switch VAR_RESULT
# 77 "data/maps/Whitecliff_Castlle/scripts.pory"
	case 0, Whitecliff_Castle_RescueChoice_5
# 78 "data/maps/Whitecliff_Castlle/scripts.pory"
	case 1, Whitecliff_Castle_RescueChoice_6
# 79 "data/maps/Whitecliff_Castlle/scripts.pory"
	case 2, Whitecliff_Castle_RescueChoice_7
	return

Whitecliff_Castle_RescueChoice_2:
# 73 "data/maps/Whitecliff_Castlle/scripts.pory"
	dynmultipush Whitecliff_Castle_RescueChoice_Text_2, 2
	goto Whitecliff_Castle_RescueChoice_1

Whitecliff_Castle_RescueChoice_5:
# 77 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_Agree
	return

Whitecliff_Castle_RescueChoice_6:
# 78 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_Compensation
	return

Whitecliff_Castle_RescueChoice_7:
# 79 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_Reject
	return


Whitecliff_Castle_Agree::
# 84 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_Agree_Text_0
# 85 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 86 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_AfterChoice
	return


Whitecliff_Castle_Compensation::
# 90 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_Compensation_Text_0
# 92 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 93 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_AfterChoice
	return


Whitecliff_Castle_Reject::
# 97 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_Reject_Text_0
# 99 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 100 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_TEMP_0, 1
# 101 "data/maps/Whitecliff_Castlle/scripts.pory"
	goto Whitecliff_Castle_RescueChoice
	return


Whitecliff_Castle_AfterChoice::
# 105 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_0
# 107 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 108 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_0
# 109 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 110 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_AfterChoice_Movement_1
# 111 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_LEDGE
# 112 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_2
# 113 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_1
# 116 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 117 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_3
# 118 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 8
# 119 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_2
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_4
# 123 "data/maps/Whitecliff_Castlle/scripts.pory"
	delay 60
# 124 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_3
# 125 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 126 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_3
# 127 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 128 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_CECILE_STATE, 1
# 129 "data/maps/Whitecliff_Castlle/scripts.pory"
	setflag FLAG_CECILE_LOCATION_CASTLE
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	removeobject 8
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_AfterChoice_Movement_5
# 132 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 11
# 133 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_2
# 134 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 135 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_4
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 137 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_ForcePlayerHelp_Movement_3
# 138 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_5
# 139 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_AfterChoice_Movement_6
# 141 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 11
# 142 "data/maps/Whitecliff_Castlle/scripts.pory"
	clearflag FLAG_ISABELL_LOCATION_CASTLE
# 143 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_ISABELL_STATE, 2
# 144 "data/maps/Whitecliff_Castlle/scripts.pory"
	removeobject 11
# 145 "data/maps/Whitecliff_Castlle/scripts.pory"
	releaseall
	end


WC_GuardLeft::
# 151 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 152 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 153 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 154 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 155 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_GuardLeft_Halt::
# 159 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 160 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 161 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 9, WC_GuardLeft_Halt_Movement_0
# 162 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 163 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 164 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_4
# 165 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 9, Whitecliff_Castle_AfterChoice_Movement_1
# 166 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 0
# 167 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	end


WC_GuardRight::
# 176 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 177 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 178 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 179 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 180 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_GuardRight_Halt::
# 184 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 185 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 186 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 10, WC_GuardRight_Halt_Movement_0
# 187 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardRight_NoEntry
# 188 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 189 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_4
# 190 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 10, Whitecliff_Castle_AfterChoice_Movement_1
# 191 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 0
# 192 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	end


WC_CliffGirl::
# 201 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 202 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 203 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_cliffgirl
# 204 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 205 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Gardener::
# 213 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 214 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 215 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Gardener
# 216 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 217 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Shopper::
# 225 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 226 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 227 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Shopper
# 228 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 229 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Fashiongirl::
# 236 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 237 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 238 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Fashion
# 239 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 240 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_BlacksmithNeighbour::
# 248 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 249 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 250 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Neighbour
# 251 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 252 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_CrazyGuy::
# 260 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 261 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 262 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_CrazyGuy
# 263 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 264 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


Whitecliff_Cecile::
# 272 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 273 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 274 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 275 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Cecile_Text_0
# 277 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 278 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Sign_Botanist::
# 282 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Botanist_Text_0, MSGBOX_SIGN
	return


WC_Sign_Blacksmith::
# 286 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Blacksmith_Text_0, MSGBOX_SIGN
	return


WC_Sign_Market::
# 290 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Market_Text_0, MSGBOX_SIGN
	return


# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_0:
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	delay_16
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 27 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
	step_end

# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_1:
# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
	step_end

# 33 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_2:
# 33 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_left
	step_end

# 39 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_3:
# 39 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
	step_end

# 43 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_4:
# 43 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
	step_end

# 50 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_5:
# 50 "data/maps/Whitecliff_Castlle/scripts.pory"
	jump_in_place_up
	step_end

# 58 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_ForcePlayerHelp_Movement_6:
# 58 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_0:
# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
# 106 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_heart
	step_end

# 110 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_1:
# 110 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_down
	step_end

# 112 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_2:
# 112 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
# 112 "data/maps/Whitecliff_Castlle/scripts.pory"
	jump_in_place_up
	step_end

# 117 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_3:
# 117 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 117 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_up
	step_end

# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_4:
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_right
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
	step_end

# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_5:
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
	step_end

# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_6:
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
	step_end

# 161 "data/maps/Whitecliff_Castlle/scripts.pory"
WC_GuardLeft_Halt_Movement_0:
# 161 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 161 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
	step_end

# 186 "data/maps/Whitecliff_Castlle/scripts.pory"
WC_GuardRight_Halt_Movement_0:
# 186 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 186 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_left
	step_end

Whitecliff_Castle_ForcePlayerHelp_Text_0:
# 29 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "???$"

Whitecliff_Castle_ForcePlayerHelp_Text_1:
# 30 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Well, lookie here. They've got some\ngood timing!$"

Whitecliff_Castle_ForcePlayerHelp_Text_2:
# 36 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Hey hey, come here. No need to be\nafraid of me.$"

Whitecliff_Castle_ForcePlayerHelp_Text_3:
# 40 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Isabell$"

Whitecliff_Castle_ForcePlayerHelp_Text_4:
# 41 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Sigh⋯ It's fine, {PLAYER}.$"

Whitecliff_Castle_ForcePlayerHelp_Text_5:
# 47 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}I saw you run around the castle\nyesterday⋯ So you're Isabell's\lnew toy? Must be nice.$"

Whitecliff_Castle_ForcePlayerHelp_Text_6:
# 51 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Cecile$"

Whitecliff_Castle_ForcePlayerHelp_Text_7:
# 52 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oh, how uncivilized of me, I haven't\neven introduced myself! I'm Cecile.\p"
	.string "Nice to meet you, {PLAYER}.\nI hope we'll get along well, hehe.$"

Whitecliff_Castle_ForcePlayerHelp_Text_8:
# 56 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}Cecile. Stop it. You're just weirding\nthem out.$"

Whitecliff_Castle_ForcePlayerHelp_Text_9:
# 61 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I've got one more task for you\nbefore I can let you go.\p"
	.string "We've got report that some children\nhave gone missing.\p"
	.string "Normally I wouldn't ask outsiders to\nhelp⋯ but there have been other\lincidents today too.\p"
	.string "It's too many to be a coincidence,\nbut my current priority is to get\lour citizens back to safety.\p"
	.string "I need you to work with Cecile to\nlocate and bring back the kids.$"

Whitecliff_Castle_RescueChoice_Text_0:
# 70 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Sure thing!$"

Whitecliff_Castle_RescueChoice_Text_1:
# 71 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Fine, what's in it for me?$"

Whitecliff_Castle_RescueChoice_Text_2:
# 73 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "What if I say no?$"

Whitecliff_Castle_Agree_Text_0:
# 84 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Good, thank you for accepting. I'll\nmake sure it is worth your while.$"

Whitecliff_Castle_Compensation_Text_0:
# 90 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Well, besides a payment, I'll get a\ngood word for you in with my\lparents.\p"
	.string "As long as you succeed.$"

Whitecliff_Castle_Reject_Text_0:
# 97 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Well, if you don't agree I'll have\nyou imprisoned for not following\la royal's orders.\p"
	.string "Justー trust me, helping out will be\nbeneficial for you too.$"

Whitecliff_Castle_AfterChoice_Text_0:
# 108 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}See! I knew they'd help. Nobody can\nresist you, ofcourse.$"

Whitecliff_Castle_AfterChoice_Text_1:
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I've already scoped out where the\nkids could be taken to.\p"
	.string "But there's too many ruffians for me\nto take on alone. I need someone to\lprovide a distraction.$"

Whitecliff_Castle_AfterChoice_Text_2:
# 119 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Meet me at the Calcite Caves. Don't\nkeep me waiting!\p"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}I won't be nice if you forget\nabout me!$"

Whitecliff_Castle_AfterChoice_Text_3:
# 126 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}In case you haven't been there yet,\nthe cave entrance is to the south\lof the castle.$"

Whitecliff_Castle_AfterChoice_Text_4:
# 135 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}⋯$"

Whitecliff_Castle_AfterChoice_Text_5:
# 138 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Take care$"

Whitecliff_Cecile_Text_0:
# 275 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Hmm? You're new here, aren't you...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}I hope we can get along!$"

WC_Sign_Botanist_Text_0:
# 282 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Rowin's Flora.\n A flower for everyone!$"

WC_Sign_Blacksmith_Text_0:
# 286 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whitecliff's finest blacksmith!$"

WC_Sign_Market_Text_0:
# 290 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Market days: Wednesday & Thursday$"

WC_GuardLeft_NoEntry::
# 171 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Hold it. No entry beyond this point.$"

WC_GuardRight_NoEntry::
# 196 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Sorry kid, can't let ye through\nwithout an official invitation$"

WC_text_cliffgirl::
# 208 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I love the view up here. I wonder what's\n"
	.string "on that island on the horizon.$"

WC_text_Gardener::
# 220 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oho, a youngster found our little\n"
	.string "garden. If you're interested in\l"
	.string "gardening too, you should talk with my\l"
	.string "husband! He's inside.$"

WC_text_Shopper::
# 231 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I was hoping to buy a batch of time\n"
	.string "candles, but it seems the candlemaker's\l"
	.string "not here today$"

WC_text_Fashion::
# 243 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whoa... your outfit is so cool! I've\n"
	.string "never seen something like that! Where\l"
	.string "did you get it from?$"

WC_text_Neighbour::
# 255 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I'm glad we've got a skilled blacksmith\n"
	.string "in Whitecliff, but living next to her\l"
	.string "drives me insane.\p"
	.string "How can someone produce this much\n"
	.string "sound!?$"

WC_text_CrazyGuy::
# 267 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "The sun is moving! It's moving, I tell ya!\n"
	.string "The end is upon us!$"
