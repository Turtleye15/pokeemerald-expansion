Whitecliff_Castlle_MapScripts::
	.byte 0


WC_CliffGirl::
# 6 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 7 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 8 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_cliffgirl
# 9 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 10 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Gardener::
# 18 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 19 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 20 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Gardener
# 21 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 22 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Shopper::
# 30 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 31 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 32 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Shopper
# 33 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 34 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Fashiongirl::
# 41 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 42 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 43 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Fashion
# 44 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 45 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_BlacksmithNeighbour::
# 53 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 54 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 55 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_Neighbour
# 56 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 57 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_CrazyGuy::
# 65 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 66 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 67 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_text_CrazyGuy
# 68 "data/maps/Whitecliff_Castlle/scripts.pory"
	closemessage
# 69 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


Whitecliff_Cecile::
# 77 "data/maps/Whitecliff_Castlle/scripts.pory"
	lock
# 78 "data/maps/Whitecliff_Castlle/scripts.pory"
	faceplayer
# 79 "data/maps/Whitecliff_Castlle/scripts.pory"
	speakername Whitecliff_Cecile_Text_0
# 80 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox Whitecliff_Cecile_Text_1
# 82 "data/maps/Whitecliff_Castlle/scripts.pory"
	waitmessage
# 83 "data/maps/Whitecliff_Castlle/scripts.pory"
	release
	return


WC_Sign_Botanist::
# 87 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Botanist_Text_0, MSGBOX_SIGN
	return


WC_Sign_Blacksmith::
# 91 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Blacksmith_Text_0, MSGBOX_SIGN
	return


WC_Sign_Market::
# 95 "data/maps/Whitecliff_Castlle/scripts.pory"
	msgbox WC_Sign_Market_Text_0, MSGBOX_SIGN
	return


Whitecliff_Cecile_Text_0:
# 79 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Cecile$"

Whitecliff_Cecile_Text_1:
# 80 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_NORMAL}Hmm? You're new here, aren't you...\p"
	.string "{CREATE_MUGSHOT MUGSHOT_CECILE EMOTE_ALT}I hope we can get along!$"

WC_Sign_Botanist_Text_0:
# 87 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Rowin's Flora.\n A flower for everyone!$"

WC_Sign_Blacksmith_Text_0:
# 91 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whitecliff's finest blacksmith!$"

WC_Sign_Market_Text_0:
# 95 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Market days: Wednesday & Thursday$"

WC_text_cliffgirl::
# 13 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I love the view up here. I wonder what's\n"
	.string "on that island on the horizon.$"

WC_text_Gardener::
# 25 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Oho, a youngster found our little\n"
	.string "garden. If you're interested in\l"
	.string "gardening too, you should talk with my\l"
	.string "husband! He's inside.$"

WC_text_Shopper::
# 36 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I was hoping to buy a batch of time\n"
	.string "candles, but it seems the candlemaker's\l"
	.string "not here today$"

WC_text_Fashion::
# 48 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "Whoa... your outfit is so cool! I've\n"
	.string "never seen something like that! Where\l"
	.string "did you get it from?$"

WC_text_Neighbour::
# 60 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "I'm glad we've got a skilled blacksmith\n"
	.string "in Whitecliff, but living next to her\l"
	.string "drives me insane.\p"
	.string "How can someone produce this much\n"
	.string "sound!?$"

WC_text_CrazyGuy::
# 72 "data/maps/Whitecliff_Castlle/scripts.pory"
	.string "The sun is moving! It's moving, I tell ya!\n"
	.string "The end is upon us!$"
