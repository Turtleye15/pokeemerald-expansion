Whitecliff_Castle_Smithy_MapScripts::
	.byte 0


Whitecliff_Smithy_Isaria::
# 8 "data/maps/Whitecliff_Castle_Smithy/scripts.pory"
	speakername Whitecliff_Smithy_Isaria_Text_0
# 9 "data/maps/Whitecliff_Castle_Smithy/scripts.pory"
	msgbox Whitecliff_Smithy_Isaria_Text_1, MSGBOX_NPC
	return


Whitecliff_Smithy_Isaria_Text_0:
# 8 "data/maps/Whitecliff_Castle_Smithy/scripts.pory"
	.string "Isaria$"

Whitecliff_Smithy_Isaria_Text_1:
# 9 "data/maps/Whitecliff_Castle_Smithy/scripts.pory"
	.string "{CREATE_MUGSHOT MUGSHOT_ISARIA EMOTE_NORMAL}Whoa! Watch your step, I'm working!$"
