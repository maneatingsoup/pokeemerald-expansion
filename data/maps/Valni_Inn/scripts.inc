Valni_Inn_MapScripts::
	.byte 0


ValniInnKeeper::
# 4 "data/maps/Valni_Inn/scripts.pory"
	lock
# 5 "data/maps/Valni_Inn/scripts.pory"
	faceplayer
# 6 "data/maps/Valni_Inn/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq ValniInnKeeper_2
# 11 "data/maps/Valni_Inn/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq ValniInnKeeper_3
# 15 "data/maps/Valni_Inn/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq ValniInnKeeper_4
ValniInnKeeper_1:
# 18 "data/maps/Valni_Inn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ValniInnKeeper_9
# 26 "data/maps/Valni_Inn/scripts.pory"
	setvar VAR_TEMP_5, 2
# 27 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_5
ValniInnKeeper_8:
# 30 "data/maps/Valni_Inn/scripts.pory"
	goto_if_unset FLAG_INN_PC_INFO, ValniInnKeeper_13
ValniInnKeeper_12:
# 37 "data/maps/Valni_Inn/scripts.pory"
	release
	return

ValniInnKeeper_2:
# 7 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_0, MSGBOX_YESNO
	goto ValniInnKeeper_1

ValniInnKeeper_3:
# 12 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_1, MSGBOX_YESNO
	goto ValniInnKeeper_1

ValniInnKeeper_4:
# 16 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_2, MSGBOX_YESNO
	goto ValniInnKeeper_1

ValniInnKeeper_9:
# 19 "data/maps/Valni_Inn/scripts.pory"
	setvar VAR_TEMP_5, 1
# 20 "data/maps/Valni_Inn/scripts.pory"
	setrespawn HEAL_LOCATION_VALNI
# 21 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_3
# 22 "data/maps/Valni_Inn/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 23 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_4
	goto ValniInnKeeper_8

ValniInnKeeper_13:
# 31 "data/maps/Valni_Inn/scripts.pory"
	setflag FLAG_INN_PC_INFO
# 32 "data/maps/Valni_Inn/scripts.pory"
	msgbox ValniInnKeeper_Text_6
	goto ValniInnKeeper_12


ValniInnKeeper_Text_0:
# 7 "data/maps/Valni_Inn/scripts.pory"
	.string "Hey, welcome to Valni's Canopy.\n"
	.string "I run the inn here.\p"
	.string "Wanna take a rest in the treetop?$"

ValniInnKeeper_Text_1:
# 12 "data/maps/Valni_Inn/scripts.pory"
	.string "Looking to spend another night in the\n"
	.string "treehouse?$"

ValniInnKeeper_Text_2:
# 16 "data/maps/Valni_Inn/scripts.pory"
	.string "Ah, back for another rest already?$"

ValniInnKeeper_Text_3:
# 21 "data/maps/Valni_Inn/scripts.pory"
	.string "Okay, I'll get the room set up.$"

ValniInnKeeper_Text_4:
# 23 "data/maps/Valni_Inn/scripts.pory"
	.string "I hope you enjoyed your stay.$"

ValniInnKeeper_Text_5:
# 27 "data/maps/Valni_Inn/scripts.pory"
	.string "Alright, let me know if you change\n"
	.string "your mind.$"

ValniInnKeeper_Text_6:
# 32 "data/maps/Valni_Inn/scripts.pory"
	.string "Oh, by the way, there's a PC over by\n"
	.string "the bed.\p"
	.string "You can use it to switch which pokémon\n"
	.string "you have with you.$"
