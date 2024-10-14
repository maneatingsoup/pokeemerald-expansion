PortNelerasInn_MapScripts::
	.byte 0


PortNelerasInnKeeper::
# 4 "data/maps/PortNelerasInn/scripts.pory"
	lock
# 5 "data/maps/PortNelerasInn/scripts.pory"
	faceplayer
# 6 "data/maps/PortNelerasInn/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq PortNelerasInnKeeper_2
# 11 "data/maps/PortNelerasInn/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq PortNelerasInnKeeper_3
# 14 "data/maps/PortNelerasInn/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq PortNelerasInnKeeper_4
PortNelerasInnKeeper_1:
# 17 "data/maps/PortNelerasInn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PortNelerasInnKeeper_9
# 25 "data/maps/PortNelerasInn/scripts.pory"
	setvar VAR_TEMP_5, 2
# 26 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_5
PortNelerasInnKeeper_8:
# 28 "data/maps/PortNelerasInn/scripts.pory"
	goto_if_unset FLAG_INN_PC_INFO, PortNelerasInnKeeper_13
PortNelerasInnKeeper_12:
# 35 "data/maps/PortNelerasInn/scripts.pory"
	release
	return

PortNelerasInnKeeper_2:
# 7 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_0, MSGBOX_YESNO
	goto PortNelerasInnKeeper_1

PortNelerasInnKeeper_3:
# 12 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_1, MSGBOX_YESNO
	goto PortNelerasInnKeeper_1

PortNelerasInnKeeper_4:
# 15 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_2, MSGBOX_YESNO
	goto PortNelerasInnKeeper_1

PortNelerasInnKeeper_9:
# 18 "data/maps/PortNelerasInn/scripts.pory"
	setvar VAR_TEMP_5, 1
# 19 "data/maps/PortNelerasInn/scripts.pory"
	setrespawn HEAL_LOCATION_PORT_NELERAS
# 20 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_3
# 21 "data/maps/PortNelerasInn/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 22 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_4
	goto PortNelerasInnKeeper_8

PortNelerasInnKeeper_13:
# 29 "data/maps/PortNelerasInn/scripts.pory"
	setflag FLAG_INN_PC_INFO
# 30 "data/maps/PortNelerasInn/scripts.pory"
	msgbox PortNelerasInnKeeper_Text_6
	goto PortNelerasInnKeeper_12


PortNelerasInnKeeper_Text_0:
# 7 "data/maps/PortNelerasInn/scripts.pory"
	.string "Ahoy, welcome to Neleras Inn.\n"
	.string "I run things around here.\p"
	.string "Need to take a rest?$"

PortNelerasInnKeeper_Text_1:
# 12 "data/maps/PortNelerasInn/scripts.pory"
	.string "Do you want to spend another night?$"

PortNelerasInnKeeper_Text_2:
# 15 "data/maps/PortNelerasInn/scripts.pory"
	.string "Oh, changed your mind already?$"

PortNelerasInnKeeper_Text_3:
# 20 "data/maps/PortNelerasInn/scripts.pory"
	.string "I'll get your room set up.$"

PortNelerasInnKeeper_Text_4:
# 22 "data/maps/PortNelerasInn/scripts.pory"
	.string "I hope your stay was comfortable.$"

PortNelerasInnKeeper_Text_5:
# 26 "data/maps/PortNelerasInn/scripts.pory"
	.string "Let me know if you change your mind.$"

PortNelerasInnKeeper_Text_6:
# 30 "data/maps/PortNelerasInn/scripts.pory"
	.string "Oh, by the way, there's a PC over by\n"
	.string "the bed.\p"
	.string "You can use it to switch which pokémon\n"
	.string "you have with you.$"
