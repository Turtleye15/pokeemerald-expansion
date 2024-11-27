Whitecliff_Castle_House3_F2_MapScripts::
	.byte 0


Whitecliff_House3_Bookshelf::
# 6 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	lock
# 7 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Bookshelf_Text_0, MSGBOX_YESNO
# 8 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Whitecliff_House3_Bookshelf_1
# 12 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	goto Whitecliff_House3_Diary
	return

Whitecliff_House3_Bookshelf_1:
# 9 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	goto Whitecliff_House3_DiaryEnd
	return


Whitecliff_House3_DiaryEnd::
# 17 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_DiaryEnd_Text_0
# 18 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 19 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	release
	return


Whitecliff_House3_Diary::
# 23 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_0
# 24 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 25 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_1
# 26 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 27 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_2
# 28 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 29 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_3
# 30 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 31 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_4
# 32 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 33 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_5
# 34 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
# 35 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	goto_if_set FLAG_WHITECLIFF_CASTLE_TRADE, Whitecliff_House3_Diary_2
Whitecliff_House3_Diary_1:
# 39 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	release
	return

Whitecliff_House3_Diary_2:
# 36 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	msgbox Whitecliff_House3_Diary_Text_6
# 37 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	waitmessage
	goto Whitecliff_House3_Diary_1


Whitecliff_House3_Bookshelf_Text_0:
# 7 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "It's someone's diary...\nOpen it?$"

Whitecliff_House3_DiaryEnd_Text_0:
# 17 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Private matters!$"

Whitecliff_House3_Diary_Text_0:
# 23 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Nov 3, 1431\nElla adviced me to get a\ljournal to vent my feelings. I'll\lgive it a go...$"

Whitecliff_House3_Diary_Text_1:
# 25 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Nov 4, 1431\nI miss her so much. It happened too\lquickly, it happened too soon.\pIt hurts.$"

Whitecliff_House3_Diary_Text_2:
# 27 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Nov 4, 1431\nBeatrice keeps asking where\lmommy is.\pI can't bring myself to tell her the truth.$"

Whitecliff_House3_Diary_Text_3:
# 29 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Nov 20, 1431\nToday, I told Beatrice what\lhappened. It was... difficult.$"

Whitecliff_House3_Diary_Text_4:
# 31 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Dec 13, 1431\nI suppose the singular good thing\lis that I have to provide for 1\lless person.\pI feel like I am a monster for even\nthinking about this. Forgive me.$"

Whitecliff_House3_Diary_Text_5:
# 33 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Jan 21, 1432\nI came across a merchant selling\lpokemon, and bought one of them.\pHopefully, it can keep Beatrice\ncompany when I am working. I can't\lkeep bothering Ella$"

Whitecliff_House3_Diary_Text_6:
# 36 "data/maps/Whitecliff_Castle_House3_F2/scripts.pory"
	.string "Feb 2, 1432\nAgh... The Shinx was a bad idea.\pBut, I found someone who wanted to\ntrade their Woobat for it! Beatrice\ladores this furball!$"
