Whitecliff_Castle_House3_MapScripts::
	.byte 0


Whitecliff_House3_Man::
# 6 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	lock
# 7 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	faceplayer
# 8 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	msgbox Whitecliff_House3_Trade
# 9 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	waitmessage
# 10 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	release
	return


Whitecliff_House3_Trade::
# 13 "data/maps/Whitecliff_Castle_House3/scripts.pory"
	.string "I got this Shinx for my daughter,\nbut it doesn't want to be cuddled.\pDo you have a fluffy pokemon? I'd\nhappily trade my Shinx for it!$"
