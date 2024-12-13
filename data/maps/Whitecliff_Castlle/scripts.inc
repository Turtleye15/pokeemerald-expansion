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
# 120 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 8, Whitecliff_Castle_AfterChoice_Movement_4
# 122 "data/maps/Whitecliff_Castlle/scripts.pory"
	delay 60
# 123 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_3
# 124 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 125 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_3
# 126 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 127 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_CECILE_STATE, 1
# 128 "data/maps/Whitecliff_Castlle/scripts.pory"
	setflag FLAG_CECILE_LOCATION_CASTLE
# 129 "data/maps/Whitecliff_Castlle/scripts.pory"
	removeobject 8
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_AfterChoice_Movement_5
# 131 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 11
# 132 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_2
# 133 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_3
# 134 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Castle_AfterChoice_Text_4
# 135 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 11, Whitecliff_Castle_AfterChoice_Movement_6
# 137 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 11
# 138 "data/maps/Whitecliff_Castlle/scripts.pory"
	clearflag FLAG_ISABELL_LOCATION_CASTLE
# 139 "data/maps/Whitecliff_Castlle/scripts.pory"
	setvar VAR_ISABELL_STATE, 2
# 140 "data/maps/Whitecliff_Castlle/scripts.pory"
	removeobject 11
# 141 "data/maps/Whitecliff_Castlle/scripts.pory"
	releaseall
	end


WC_GuardLeft::
# 147 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 148 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 149 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 150 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 151 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_GuardLeft_Halt::
# 155 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 156 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 157 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 9, WC_GuardLeft_Halt_Movement_0
# 158 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 159 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 160 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_4
# 161 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 9, Whitecliff_Castle_AfterChoice_Movement_1
# 162 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 0
# 163 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	end


WC_GuardRight::
# 172 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 173 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 174 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardLeft_NoEntry
# 175 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 176 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_GuardRight_Halt::
# 180 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 181 "data/maps/Whitecliff_Castlle/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 10, WC_GuardRight_Halt_Movement_0
# 183 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_GuardRight_NoEntry
# 184 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 185 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Whitecliff_Castle_ForcePlayerHelp_Movement_4
# 186 "data/maps/Whitecliff_Castlle/scripts.pory"
	applymovement 10, Whitecliff_Castle_AfterChoice_Movement_1
# 187 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmovement 0
# 188 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	end


WC_CliffGirl::
# 197 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 198 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 199 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_cliffgirl
# 200 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 201 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Gardener::
# 209 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 210 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 211 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Gardener
# 212 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 213 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Shopper::
# 221 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 222 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 223 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Shopper
# 224 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 225 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Fashiongirl::
# 232 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 233 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 234 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Fashion
# 235 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 236 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_BlacksmithNeighbour::
# 244 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 245 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 246 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Neighbour
# 247 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 248 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_CrazyGuy::
# 256 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 257 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 258 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_CrazyGuy
# 259 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 260 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


Whitecliff_Cecile::
# 268 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 269 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 270 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Castle_ForcePlayerHelp_Text_6
# 271 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Cecile_Text_0
# 273 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 274 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Sign_Botanist::
# 278 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Botanist_Text_0, MSGBOX_SIGN
	return


WC_Sign_Blacksmith::
# 282 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Blacksmith_Text_0, MSGBOX_SIGN
	return


WC_Sign_Market::
# 286 "data/maps/Whitecliff_Castlle/scripts.pory"
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

# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_4:
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_right
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
# 121 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_down
	step_end

# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_5:
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 130 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
	step_end

# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
Whitecliff_Castle_AfterChoice_Movement_6:
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_left
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
# 136 "data/maps/Whitecliff_Castlle/scripts.pory"
	walk_up
	step_end

# 157 "data/maps/Whitecliff_Castlle/scripts.pory"
WC_GuardLeft_Halt_Movement_0:
# 157 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 157 "data/maps/Whitecliff_Castlle/scripts.pory"
	face_right
	step_end

# 182 "data/maps/Whitecliff_Castlle/scripts.pory"
WC_GuardRight_Halt_Movement_0:
# 182 "data/maps/Whitecliff_Castlle/scripts.pory"
	emote_exclamation_mark
# 182 "data/maps/Whitecliff_Castlle/scripts.pory"
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
	.string "I saw you run around the castle\nyesterday⋯ So you're Isabell's\lnew toy? Must be nice.$"

Whitecliff_Castle_ForcePlayerHelp_Text_6:
# 51 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Cecile$"

Whitecliff_Castle_ForcePlayerHelp_Text_7:
# 52 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oh, how uncivilized of me, I haven't\neven introduced myself! I'm Cecile.\p"
	.string "Nice to meet you, {PLAYER}.\nI hope we'll get along well, hehe.$"

Whitecliff_Castle_ForcePlayerHelp_Text_8:
# 56 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Cecile. Stop it. You're just weirding\nthem out.$"

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
	.string "Fine, but what's in it for me?$"

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
	.string "See! I knew they'd help. Nobody can\nresist you, ofcourse.$"

Whitecliff_Castle_AfterChoice_Text_1:
# 114 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I've already scoped out where the\nkids could be taken to.\p"
	.string "But there's too many ruffians for me\nto take on alone. I need someone to\lprovide a distraction.$"

Whitecliff_Castle_AfterChoice_Text_2:
# 119 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Meet me at the Calcite Caves. Don't\nkeep me waiting! I won't be nice if\lyou forget about me!$"

Whitecliff_Castle_AfterChoice_Text_3:
# 125 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "In case you haven't been there yet,\nthe cave entrance is to the south\lof the castle.$"

Whitecliff_Castle_AfterChoice_Text_4:
# 134 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "⋯\pTake care.$"

Whitecliff_Cecile_Text_0:
# 271 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Hmm? You're new here, aren't you...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}I hope we can get along!$"

WC_Sign_Botanist_Text_0:
# 278 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Rowin's Flora.\n A flower for everyone!$"

WC_Sign_Blacksmith_Text_0:
# 282 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whitecliff's finest blacksmith!$"

WC_Sign_Market_Text_0:
# 286 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Market days: Wednesday & Thursday$"

WC_GuardLeft_NoEntry::
# 167 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Hold it. No entry beyond this point.$"

WC_GuardRight_NoEntry::
# 192 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Sorry kid, can't let ye through\nwithout an official invitation$"

WC_text_cliffgirl::
# 204 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I love the view up here. I wonder what's\n"
	.string "on that island on the horizon.$"

WC_text_Gardener::
# 216 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oho, a youngster found our little\n"
	.string "garden. If you're interested in\l"
	.string "gardening too, you should talk with my\l"
	.string "husband! He's inside.$"

WC_text_Shopper::
# 227 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I was hoping to buy a batch of time\n"
	.string "candles, but it seems the candlemaker's\l"
	.string "not here today$"

WC_text_Fashion::
# 239 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whoa... your outfit is so cool! I've\n"
	.string "never seen something like that! Where\l"
	.string "did you get it from?$"

WC_text_Neighbour::
# 251 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I'm glad we've got a skilled blacksmith\n"
	.string "in Whitecliff, but living next to her\l"
	.string "drives me insane.\p"
	.string "How can someone produce this much\n"
	.string "sound!?$"

WC_text_CrazyGuy::
# 263 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "The sun is moving! It's moving, I tell ya!\n"
	.string "The end is upon us!$"
