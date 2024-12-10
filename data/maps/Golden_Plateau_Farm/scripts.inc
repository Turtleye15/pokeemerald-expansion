Golden_Plateau_Farm_MapScripts::
# 2 "data/maps/Golden_Plateau_Farm/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Golden_Plateau_Farm_OnTransition
	.byte 0


Golden_Plateau_Farm_OnTransition::
# 12 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removeobject 3
# 13 "data/maps/Golden_Plateau_Farm/scripts.pory"
	setflag FLAG_DANIA_LOCATION_FARM
	return


Golden_Plateau_Farm_Gaius::
# 17 "data/maps/Golden_Plateau_Farm/scripts.pory"
	lock
# 18 "data/maps/Golden_Plateau_Farm/scripts.pory"
	faceplayer
# 19 "data/maps/Golden_Plateau_Farm/scripts.pory"
	compare VAR_CHAPTER_1, 2
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
	setvar VAR_CHAPTER_1, 3
# 29 "data/maps/Golden_Plateau_Farm/scripts.pory"
	setvar VAR_DANIA_STATE, 1
# 30 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Greeting
# 31 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmessage
# 32 "data/maps/Golden_Plateau_Farm/scripts.pory"
	dynmultichoice 0, 0, TRUE 1, 0, DYN_MULTICHOICE_CB_NONE, Golden_Plateau_Farm_GetBerries_Text_0
# 33 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GreetingSecond
# 34 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 35 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, CollectBerries
# 36 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 1
# 38 "data/maps/Golden_Plateau_Farm/scripts.pory"
	clearflag FLAG_DANIA_LOCATION_FARM
# 39 "data/maps/Golden_Plateau_Farm/scripts.pory"
	playse SE_DOOR
# 40 "data/maps/Golden_Plateau_Farm/scripts.pory"
	addobject 3
# 41 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, CollectBerries_Second
# 42 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_1
# 43 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_2
# 44 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 3, Golden_Plateau_Farm_GetBerries_Movement_0
# 46 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 0
# 47 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Golden_Plateau_Farm_GetBerries_Movement_1
# 48 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 3, Golden_Plateau_Farm_GetBerries_Movement_2
# 49 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 0
# 50 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_1
# 51 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_3
# 52 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, Golden_Plateau_Farm_GetBerries_Movement_3
# 53 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 54 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_GetBerries_Text_4
# 55 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 57 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 3, Golden_Plateau_Farm_GetBerries_Movement_4
# 58 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_1
# 59 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Dania_Isabell
# 60 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removefieldmugshot
# 61 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, CollectBerries_Third
# 62 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 1
# 63 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 64 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_CalmDown
# 65 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 66 "data/maps/Golden_Plateau_Farm/scripts.pory"
	speakername Golden_Plateau_Farm_GetBerries_Text_5
# 67 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Prepare
# 68 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removefieldmugshot
# 69 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 71 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 3, Golden_Plateau_Farm_GetBerries_Movement_5
# 72 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 3
# 73 "data/maps/Golden_Plateau_Farm/scripts.pory"
	playse SE_DOOR
# 74 "data/maps/Golden_Plateau_Farm/scripts.pory"
	removeobject 3
# 75 "data/maps/Golden_Plateau_Farm/scripts.pory"
	setflag FLAG_DANIA_LOCATION_FARM
# 76 "data/maps/Golden_Plateau_Farm/scripts.pory"
	delay 30
# 78 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Golden_Plateau_Farm_GetBerries_Movement_4
# 79 "data/maps/Golden_Plateau_Farm/scripts.pory"
	applymovement 1, Golden_Plateau_Farm_GetBerries_Movement_6
# 80 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmovement 1
# 81 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_HandOverBerries
# 82 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 83 "data/maps/Golden_Plateau_Farm/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/Golden_Plateau_Farm/scripts.pory"
	giveitem ITEM_BERRY_SATCHEL
# 85 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmessage
# 86 "data/maps/Golden_Plateau_Farm/scripts.pory"
	release
	return


Golden_Plateau_Farm_Shop::
# 91 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Shop_Text_0
# 92 "data/maps/Golden_Plateau_Farm/scripts.pory"
	waitmessage
# 93 "data/maps/Golden_Plateau_Farm/scripts.pory"
	pokemart FarmShop
# 94 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Shop_Text_1
# 95 "data/maps/Golden_Plateau_Farm/scripts.pory"
	closemessage
# 96 "data/maps/Golden_Plateau_Farm/scripts.pory"
	release
	return


	.align 2
# 99 "data/maps/Golden_Plateau_Farm/scripts.pory"
FarmShop:
# 100 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 101 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 102 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 103 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 104 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 105 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

# 140 "data/maps/Golden_Plateau_Farm/scripts.pory"
CollectBerries:
# 141 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
# 142 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 142 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 143 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_down
# 144 "data/maps/Golden_Plateau_Farm/scripts.pory"
	delay_16
# 144 "data/maps/Golden_Plateau_Farm/scripts.pory"
	delay_16
# 145 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
# 145 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
# 145 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
	step_end

# 148 "data/maps/Golden_Plateau_Farm/scripts.pory"
CollectBerries_Second:
# 149 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/Golden_Plateau_Farm/scripts.pory"
CollectBerries_Third:
# 153 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 153 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_right
# 154 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
	step_end

Golden_Plateau_Farm_Woman::
# 158 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_Woman_Text_0, MSGBOX_NPC
	return


Golden_Plateau_Farm_BerryBox::
# 162 "data/maps/Golden_Plateau_Farm/scripts.pory"
	msgbox Golden_Plateau_Farm_BerryBox_Text_0, MSGBOX_SIGN
	return


# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_0:
# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
# 45 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_up
	step_end

# 47 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_1:
# 47 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_right
	step_end

# 48 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_2:
# 48 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_left
	step_end

# 52 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_3:
# 52 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_down
	step_end

# 57 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_4:
# 57 "data/maps/Golden_Plateau_Farm/scripts.pory"
	face_up
	step_end

# 71 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_5:
# 71 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
# 71 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
	step_end

# 79 "data/maps/Golden_Plateau_Farm/scripts.pory"
Golden_Plateau_Farm_GetBerries_Movement_6:
# 79 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_left
# 79 "data/maps/Golden_Plateau_Farm/scripts.pory"
	walk_down
	step_end

Golden_Plateau_Farm_GetBerries_Text_0:
# 32 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "I'm here on Isabell's behalf$"

Golden_Plateau_Farm_GetBerries_Text_1:
# 42 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "???$"

Golden_Plateau_Farm_GetBerries_Text_2:
# 43 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}Hey all, I'm back!$"

Golden_Plateau_Farm_GetBerries_Text_3:
# 51 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}Oh, got a customer?$"

Golden_Plateau_Farm_GetBerries_Text_4:
# 54 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Aye, sort of. They're here to\ncollect goods for lady Isabell.$"

Golden_Plateau_Farm_GetBerries_Text_5:
# 66 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Dania$"

Golden_Plateau_Farm_Shop_Text_0:
# 91 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "'ave a look at our produce!$"

Golden_Plateau_Farm_Shop_Text_1:
# 94 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "See ye again!$"

Golden_Plateau_Farm_Woman_Text_0:
# 158 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "I love having everyone around, but\nfeeding them's a big task.$"

Golden_Plateau_Farm_BerryBox_Text_0:
# 162 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "A variety of berries stacked high.\nThey look freshly picked!$"

Golden_Plateau_Farm_Greeting::
# 109 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Welcome to the farm! Came to have a\nlook at our produce?\p"
	.string "⋯ Oh, yer 'ere for somethin' else?\p$"

Golden_Plateau_Farm_GreetingSecond::
# 114 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "She's running low on Rawst and Sitrus\nberries? Sure thing!\p"
	.string "I'll get ye sorted, give me a minute.$"

Golden_Plateau_Farm_Dania_Isabell::
# 119 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}I see.\p"
	.string "So little miss princess does not\nwant to grace us with her presence.\p"
	.string "How unfortunate.\nSeems that we are only worthy\lof speaking to her servant.$"

Golden_Plateau_Farm_CalmDown::
# 125 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "Oh stuff it Dania, they're not her\nservant. Just runnin' an errand\lafter she saved their live.\p"
	.string "And stop dragging 'er name through\nthe mud. Not a good look on ye.$"

Golden_Plateau_Farm_Prepare::
# 130 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_DANIA EMOTE_NORMAL}⋯ fine.\nWe don't have to talk about this.\p"
	.string "I'm going to get Rapidash and prepare\nfor the trip.$"

Golden_Plateau_Farm_HandOverBerries::
# 135 "data/maps/Golden_Plateau_Farm/scripts.pory"
	.string "'ere ye go, got the Rawst and Sitrus\nberries Isabell asked for.\p"
	.string "Don't mind my sis, she's got some\nstrong opinions on certain folks.$"
