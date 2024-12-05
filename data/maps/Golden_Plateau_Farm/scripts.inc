Golden_Plateau_Farm_MapScripts::
# 2 "data/maps/Golden_Plateau_Farm/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Golden_Plateau_Farm_OnTransition
	.byte 0


Golden_Plateau_Farm_OnTransition::
# 12 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removeobject 4
# 13 "data/maps/Golden_Plateau_Farm/scripts.pory"
	setflag FLAG_DANIA_LOCATION_FARM
	return


Golden_Plateau_Farm_Gaius::
# 17 "data/maps/Golden_Plateau_Farm/scripts.pory"
	lock
# 18 "data/maps/Golden_Plateau_Farm/scripts.pory"
	faceplayer
# 19 "data/maps/Golden_Plateau_Farm/scripts.pory"
	compare VAR_CHAPTER_1, 0
	goto_if_eq Golden_Plateau_Farm_Gaius_1
# 23 "data/maps/Golden_Plateau_Farm/scripts.pory"
	goto Golden_Plateau_Farm_Shop
	return

Golden_Plateau_Farm_Gaius_1:
# 20 "data/maps/Golden_Plateau_Farm/scripts.pory"
	goto Golden_Plateau_Farm_GetBerries
	return


Golden_Plateau_Farm_GetBerries::
# 28 "data/maps/Golden_Plateau_Farm/scripts.pory"
	setvar VAR_CHAPTER_1, 1
# 29 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Greeting
# 30 "data/maps/Golden_Plateau_Farm/scripts.pory"
	dynmultichoice 0, 0, TRUE 1, 0, DYN_MULTICHOICE_CB_NONE, Golden_Plateau_Farm_GetBerries_Text_0
# 31 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GreetingSecond
# 32 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 33 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, CollectBerries
# 34 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 1
# 35 "data/maps/Golden_Plateau_Farm/scripts.pory"
	clearflag FLAG_DANIA_LOCATION_FARM
# 36 "data/maps/Golden_Plateau_Farm/scripts.pory"
	playse SE_DOOR
# 37 "data/maps/Golden_Plateau_Farm/scripts.pory"
	addobject 4
# 38 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, CollectBerries_Second
# 39 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_1
# 40 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_2
# 41 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 42 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 4, Golden_Plateau_Farm_GetBerries_Movement_0
# 43 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 0
# 44 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Golden_Plateau_Farm_GetBerries_Movement_1
# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 4, Golden_Plateau_Farm_GetBerries_Movement_2
# 46 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 0
# 47 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_1
# 48 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_3
# 49 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, Golden_Plateau_Farm_GetBerries_Movement_3
# 50 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 51 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_4
# 52 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 53 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 4, Golden_Plateau_Farm_GetBerries_Movement_4
# 54 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_1
# 55 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Dania_Isabell
# 56 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, CollectBerries_Third
# 57 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 1
# 58 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 59 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_CalmDown
# 60 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 61 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_5
# 62 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Prepare
# 63 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removefieldmugshot
# 64 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 65 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 4, Golden_Plateau_Farm_GetBerries_Movement_5
# 66 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 4
# 67 "data/maps/Golden_Plateau_Farm/scripts.pory"
	playse SE_DOOR
# 68 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removeobject 4
# 69 "data/maps/Golden_Plateau_Farm/scripts.pory"
	setflag FLAG_DANIA_LOCATION_FARM
# 70 "data/maps/Golden_Plateau_Farm/scripts.pory"
	delay 30
# 71 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Golden_Plateau_Farm_GetBerries_Movement_4
# 72 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, Golden_Plateau_Farm_GetBerries_Movement_6
# 73 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 1
# 74 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_HandOverBerries
# 75 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 76 "data/maps/Golden_Plateau_Farm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 77 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_6
# 78 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmessage
# 79 "data/maps/Golden_Plateau_Farm/scripts.pory"
	release
	return


Golden_Plateau_Farm_Shop::
# 84 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Shop_Text_0
# 85 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmessage
# 86 "data/maps/Golden_Plateau_Farm/scripts.pory"
	pokemart FarmShop
# 87 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Shop_Text_1
# 88 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 89 "data/maps/Golden_Plateau_Farm/scripts.pory"
	release
	return


	.align 2
# 92 "data/maps/Golden_Plateau_Farm/scripts.pory"
FarmShop:
# 93 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 94 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 95 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 96 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 97 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 98 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

# 133 "data/maps/Golden_Plateau_Farm/scripts.pory"
CollectBerries:
# 134 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
# 135 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 135 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 136 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_down
# 137 "data/maps/Golden_Plateau_Farm/scripts.pory"
	delay_16
# 137 "data/maps/Golden_Plateau_Farm/scripts.pory"
	delay_16
# 138 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
# 138 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
# 138 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
	step_end

# 141 "data/maps/Golden_Plateau_Farm/scripts.pory"
CollectBerries_Second:
# 142 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
	step_end

# 145 "data/maps/Golden_Plateau_Farm/scripts.pory"
CollectBerries_Third:
# 146 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 146 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 147 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
	step_end

# 42 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_0:
# 42 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
# 42 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_1:
# 44 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_right
	step_end

# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_2:
# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_left
	step_end

# 49 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_3:
# 49 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_down
	step_end

# 53 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_4:
# 53 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_up
	step_end

# 65 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_5:
# 65 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
# 65 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_6:
# 72 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
# 72 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
	step_end

Golden_Plateau_Farm_GetBerries_Text_0:
# 30 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "I'm here on Isabell's behalf$"

Golden_Plateau_Farm_GetBerries_Text_1:
# 39 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "???$"

Golden_Plateau_Farm_GetBerries_Text_2:
# 40 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}Hey all, I'm back!$"

Golden_Plateau_Farm_GetBerries_Text_3:
# 48 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}Oh, got a customer?$"

Golden_Plateau_Farm_GetBerries_Text_4:
# 51 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Aye, sort of. They're here to\ncollect goods for lady Isabell.$"

Golden_Plateau_Farm_GetBerries_Text_5:
# 61 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Dania$"

Golden_Plateau_Farm_GetBerries_Text_6:
# 77 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Obtained a satchel with berries!$"

Golden_Plateau_Farm_Shop_Text_0:
# 84 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "'ave a look at our produce!$"

Golden_Plateau_Farm_Shop_Text_1:
# 87 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "See ye again!$"

Golden_Plateau_Farm_Greeting::
# 102 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Welcome to the farm! Came to have a\nlook at our produce?\p"
	.string "⋯ Oh, yer 'ere for somethin' else?\p$"

Golden_Plateau_Farm_GreetingSecond::
# 107 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "She's running low on Rawst and Sitrus\nberries? Sure thing!\p"
	.string "I'll get ye sorted, give me a minute.$"

Golden_Plateau_Farm_Dania_Isabell::
# 112 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}I see.\p"
	.string "So little miss princess does not\nwant to grace us with her presence.\p"
	.string "How unfortunate.\nSeems that we are only worthy\lof speaking to her servant.$"

Golden_Plateau_Farm_CalmDown::
# 118 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Oh stuff it Dania, they're not her\nservant. Just runnin' an errand\lafter she saved their live.\p"
	.string "And stop dragging 'er name through\nthe mud. Not a good look on ye.$"

Golden_Plateau_Farm_Prepare::
# 123 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}⋯ fine.\nWe don't have to talk about this.\p"
	.string "I'm going to get Rapidash and prepare\nfor the trip.$"

Golden_Plateau_Farm_HandOverBerries::
# 128 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "'ere ye go, got the Rawst and Sitrus\nberries Isabell asked for.\p"
	.string "Don't mind my sis, she's got some\nstrong opinions on certain folks.$"
