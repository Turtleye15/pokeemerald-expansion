MyMapscripts::
	.byte 0


# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 7 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 8 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 11 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 12 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 13 "data/maps/OldaleTown/scripts.pory"

# 14 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 15 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 17 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 18 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 19 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 20 "data/maps/OldaleTown/scripts.pory"
	end
# 21 "data/maps/OldaleTown/scripts.pory"

# 22 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 23 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 24 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 25 "data/maps/OldaleTown/scripts.pory"
	return
# 26 "data/maps/OldaleTown/scripts.pory"

# 27 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 28 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 29 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 30 "data/maps/OldaleTown/scripts.pory"
	return
# 31 "data/maps/OldaleTown/scripts.pory"

# 32 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 33 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
# 34 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 35 "data/maps/OldaleTown/scripts.pory"
	return
# 36 "data/maps/OldaleTown/scripts.pory"

# 37 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 39 "data/maps/OldaleTown/scripts.pory"
	end
# 40 "data/maps/OldaleTown/scripts.pory"

# 41 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 42 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 43 "data/maps/OldaleTown/scripts.pory"
	end
# 44 "data/maps/OldaleTown/scripts.pory"

# 45 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 46 "data/maps/OldaleTown/scripts.pory"
	lock
# 47 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 48 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 49 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 50 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 51 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 52 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 53 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 54 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 55 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 56 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 57 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 58 "data/maps/OldaleTown/scripts.pory"
	end
# 59 "data/maps/OldaleTown/scripts.pory"

# 60 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 61 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 62 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 63 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 65 "data/maps/OldaleTown/scripts.pory"
	end
# 66 "data/maps/OldaleTown/scripts.pory"

# 67 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 68 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 69 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 70 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 72 "data/maps/OldaleTown/scripts.pory"
	end
# 73 "data/maps/OldaleTown/scripts.pory"

# 74 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 75 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 76 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 77 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 79 "data/maps/OldaleTown/scripts.pory"
	end
# 80 "data/maps/OldaleTown/scripts.pory"

# 81 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 82 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 83 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 84 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 86 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 87 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 88 "data/maps/OldaleTown/scripts.pory"
	release
# 89 "data/maps/OldaleTown/scripts.pory"
	end
# 90 "data/maps/OldaleTown/scripts.pory"

# 91 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 92 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 93 "data/maps/OldaleTown/scripts.pory"
	release
# 94 "data/maps/OldaleTown/scripts.pory"
	end
# 95 "data/maps/OldaleTown/scripts.pory"

# 96 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 97 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 98 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 99 "data/maps/OldaleTown/scripts.pory"
	release
# 100 "data/maps/OldaleTown/scripts.pory"
	end
# 101 "data/maps/OldaleTown/scripts.pory"

# 102 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 111 "data/maps/OldaleTown/scripts.pory"
	step_end
# 112 "data/maps/OldaleTown/scripts.pory"

# 113 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 116 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 124 "data/maps/OldaleTown/scripts.pory"
	step_end
# 125 "data/maps/OldaleTown/scripts.pory"

# 126 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 135 "data/maps/OldaleTown/scripts.pory"
	step_end
# 136 "data/maps/OldaleTown/scripts.pory"

# 137 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 151 "data/maps/OldaleTown/scripts.pory"
	step_end
# 152 "data/maps/OldaleTown/scripts.pory"

# 153 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	step_end
# 162 "data/maps/OldaleTown/scripts.pory"

# 163 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 164 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 165 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 166 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 167 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 171 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	step_end
# 174 "data/maps/OldaleTown/scripts.pory"

# 175 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 183 "data/maps/OldaleTown/scripts.pory"
	step_end
# 184 "data/maps/OldaleTown/scripts.pory"

# 185 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 197 "data/maps/OldaleTown/scripts.pory"
	step_end
# 198 "data/maps/OldaleTown/scripts.pory"

# 199 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 200 "data/maps/OldaleTown/scripts.pory"
	lock
# 201 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 202 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 203 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 204 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 205 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 206 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/OldaleTown/scripts.pory"
	release
# 208 "data/maps/OldaleTown/scripts.pory"
	end
# 209 "data/maps/OldaleTown/scripts.pory"

# 210 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 211 "data/maps/OldaleTown/scripts.pory"
	lockall
# 212 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 213 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 214 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 216 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 217 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 218 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 220 "data/maps/OldaleTown/scripts.pory"
	end
# 221 "data/maps/OldaleTown/scripts.pory"

# 222 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 223 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 224 "data/maps/OldaleTown/scripts.pory"
	release
# 225 "data/maps/OldaleTown/scripts.pory"
	end
# 226 "data/maps/OldaleTown/scripts.pory"

# 227 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 228 "data/maps/OldaleTown/scripts.pory"
	lockall
# 229 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 230 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 232 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 233 "data/maps/OldaleTown/scripts.pory"
	end
# 234 "data/maps/OldaleTown/scripts.pory"

# 235 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 236 "data/maps/OldaleTown/scripts.pory"
	lockall
# 237 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 238 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 240 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 242 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 243 "data/maps/OldaleTown/scripts.pory"
	end
# 244 "data/maps/OldaleTown/scripts.pory"

# 245 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 246 "data/maps/OldaleTown/scripts.pory"
	lockall
# 247 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 248 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 250 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 252 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 253 "data/maps/OldaleTown/scripts.pory"
	end
# 254 "data/maps/OldaleTown/scripts.pory"

# 255 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 256 "data/maps/OldaleTown/scripts.pory"
	lockall
# 257 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 258 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 260 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 262 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 263 "data/maps/OldaleTown/scripts.pory"
	end
# 264 "data/maps/OldaleTown/scripts.pory"

# 265 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 266 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 267 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 268 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 269 "data/maps/OldaleTown/scripts.pory"
	end
# 270 "data/maps/OldaleTown/scripts.pory"

# 271 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 272 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 273 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 274 "data/maps/OldaleTown/scripts.pory"
	end
# 275 "data/maps/OldaleTown/scripts.pory"

# 276 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 277 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 278 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 279 "data/maps/OldaleTown/scripts.pory"
	end
# 280 "data/maps/OldaleTown/scripts.pory"

# 281 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 282 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 283 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 284 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 285 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 286 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 288 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 289 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 290 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 291 "data/maps/OldaleTown/scripts.pory"
	end
# 292 "data/maps/OldaleTown/scripts.pory"

# 293 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 294 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 295 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 296 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 297 "data/maps/OldaleTown/scripts.pory"
	return
# 298 "data/maps/OldaleTown/scripts.pory"

# 299 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 300 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 301 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 302 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/OldaleTown/scripts.pory"
	return
# 304 "data/maps/OldaleTown/scripts.pory"

# 305 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 306 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 307 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 308 "data/maps/OldaleTown/scripts.pory"
	step_end
# 309 "data/maps/OldaleTown/scripts.pory"

# 310 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 311 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 312 "data/maps/OldaleTown/scripts.pory"
	step_end
# 313 "data/maps/OldaleTown/scripts.pory"

# 314 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 315 "data/maps/OldaleTown/scripts.pory"
	face_left
# 316 "data/maps/OldaleTown/scripts.pory"
	step_end
# 317 "data/maps/OldaleTown/scripts.pory"

# 318 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 319 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 320 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 321 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 322 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 323 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 324 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 325 "data/maps/OldaleTown/scripts.pory"
	step_end
# 326 "data/maps/OldaleTown/scripts.pory"

# 327 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 328 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 329 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 330 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 331 "data/maps/OldaleTown/scripts.pory"
	step_end
# 332 "data/maps/OldaleTown/scripts.pory"

# 333 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 334 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 335 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 336 "data/maps/OldaleTown/scripts.pory"
	step_end
# 337 "data/maps/OldaleTown/scripts.pory"

# 338 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 339 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 340 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 341 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 342 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 343 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 344 "data/maps/OldaleTown/scripts.pory"
	step_end
# 345 "data/maps/OldaleTown/scripts.pory"

# 346 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 347 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 348 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 349 "data/maps/OldaleTown/scripts.pory"
	step_end
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 352 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 354 "data/maps/OldaleTown/scripts.pory"

# 355 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 358 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 359 "data/maps/OldaleTown/scripts.pory"

# 360 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 362 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 364 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 365 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 367 "data/maps/OldaleTown/scripts.pory"

# 368 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 371 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 372 "data/maps/OldaleTown/scripts.pory"

# 373 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 375 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 377 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 378 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 380 "data/maps/OldaleTown/scripts.pory"

# 381 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 382 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 383 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 384 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 386 "data/maps/OldaleTown/scripts.pory"

# 387 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 388 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 392 "data/maps/OldaleTown/scripts.pory"

# 393 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 397 "data/maps/OldaleTown/scripts.pory"

# 398 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 402 "data/maps/OldaleTown/scripts.pory"

# 403 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 404 "data/maps/OldaleTown/scripts.pory"
    .string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL}"
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "This is Isabell\p"
# 406 "data/maps/OldaleTown/scripts.pory"
    .string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_ALT}"
# 407 "data/maps/OldaleTown/scripts.pory"
	.string "“Remember her!”$"
# 408 "data/maps/OldaleTown/scripts.pory"
    .string "{DESTROY_MUGSHOT}$"

OldaleTown_Eventscript_Isabell_Introduction::
# 412 "data/maps/OldaleTown/scripts.pory"
	lock
# 413 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 414 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Eventscript_Isabell_Introduction_Text_0
# 417 "data/maps/OldaleTown/scripts.pory"
	waitmessage
# 418 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_Eventscript_Isabell_Introduction_Text_0:
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISABELL EMOTE_NORMAL} Hello.\p"
	.string "..\n"
	.string "..\l"
	.string "..\p"
	.string "If you don't need my help, stop\n"
	.string "bothering me$"
