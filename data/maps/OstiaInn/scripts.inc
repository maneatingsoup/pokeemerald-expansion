OstiaInn_MapScripts::
# 2 "data/maps/OstiaInn/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaHouses
	.byte 0


OsitaInnKeeper::
# 6 "data/maps/OstiaInn/scripts.pory"
	lock
# 7 "data/maps/OstiaInn/scripts.pory"
	faceplayer
# 8 "data/maps/OstiaInn/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq OsitaInnKeeper_2
# 12 "data/maps/OstiaInn/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq OsitaInnKeeper_3
# 16 "data/maps/OstiaInn/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq OsitaInnKeeper_4
OsitaInnKeeper_1:
# 19 "data/maps/OstiaInn/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OsitaInnKeeper_9
# 28 "data/maps/OstiaInn/scripts.pory"
	setvar VAR_TEMP_5, 2
# 29 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_5
OsitaInnKeeper_8:
# 31 "data/maps/OstiaInn/scripts.pory"
	goto_if_unset FLAG_INN_PC_INFO, OsitaInnKeeper_13
OsitaInnKeeper_12:
# 38 "data/maps/OstiaInn/scripts.pory"
	release
	return

OsitaInnKeeper_2:
# 9 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_0, MSGBOX_YESNO
	goto OsitaInnKeeper_1

OsitaInnKeeper_3:
# 13 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_1, MSGBOX_YESNO
	goto OsitaInnKeeper_1

OsitaInnKeeper_4:
# 17 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_2, MSGBOX_YESNO
	goto OsitaInnKeeper_1

OsitaInnKeeper_9:
# 20 "data/maps/OstiaInn/scripts.pory"
	setvar VAR_TEMP_5, 1
# 21 "data/maps/OstiaInn/scripts.pory"
	setrespawn HEAL_LOCATION_OSTIA
# 22 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_3
# 23 "data/maps/OstiaInn/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 24 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_4
	goto OsitaInnKeeper_8

OsitaInnKeeper_13:
# 32 "data/maps/OstiaInn/scripts.pory"
	setflag FLAG_INN_PC_INFO
# 33 "data/maps/OstiaInn/scripts.pory"
	msgbox OsitaInnKeeper_Text_6
	goto OsitaInnKeeper_12


OstiaInnMan::
# 42 "data/maps/OstiaInn/scripts.pory"
	lock
# 43 "data/maps/OstiaInn/scripts.pory"
	faceplayer
# 44 "data/maps/OstiaInn/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq OstiaInnMan_2
# 63 "data/maps/OstiaInn/scripts.pory"
	message OstiaInnMan_Text_2
OstiaInnMan_1:
# 65 "data/maps/OstiaInn/scripts.pory"
	waitmessage
# 66 "data/maps/OstiaInn/scripts.pory"
	pokemartdecoration2 OstiaInnMart
# 67 "data/maps/OstiaInn/scripts.pory"
	msgbox OstiaInnMan_Text_3
# 69 "data/maps/OstiaInn/scripts.pory"
	release
	return

OstiaInnMan_2:
# 45 "data/maps/OstiaInn/scripts.pory"
	checkplayergender
# 46 "data/maps/OstiaInn/scripts.pory"
	setvar VAR_TEMP_0, 1
# 47 "data/maps/OstiaInn/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OstiaInnMan_5
# 55 "data/maps/OstiaInn/scripts.pory"
	message OstiaInnMan_Text_1
	goto OstiaInnMan_1

OstiaInnMan_5:
# 48 "data/maps/OstiaInn/scripts.pory"
	message OstiaInnMan_Text_0
	goto OstiaInnMan_1


	.align 2
# 72 "data/maps/OstiaInn/scripts.pory"
OstiaInnMart:
# 73 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_CHARCOAL
# 74 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 75 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 76 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_MAGNET
# 77 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 78 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_POISON_BARB
# 79 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 80 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_METAL_COAT
# 81 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_HARD_STONE
# 82 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 83 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 84 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 85 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 86 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 87 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 88 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 89 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 90 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 91 "data/maps/OstiaInn/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

OsitaInnKeeper_Text_0:
# 9 "data/maps/OstiaInn/scripts.pory"
	.string "Welcome to the Ostia Inn.\p"
	.string "Do you want to rest here for the day?$"

OsitaInnKeeper_Text_1:
# 13 "data/maps/OstiaInn/scripts.pory"
	.string "Oh, do you want to stay another night?\n"
	.string "You're more than welcome to.$"

OsitaInnKeeper_Text_2:
# 17 "data/maps/OstiaInn/scripts.pory"
	.string "Change your mind, did you?$"

OsitaInnKeeper_Text_3:
# 22 "data/maps/OstiaInn/scripts.pory"
	.string "Alright, I'll get your room set up.$"

OsitaInnKeeper_Text_4:
# 24 "data/maps/OstiaInn/scripts.pory"
	.string "Do come again.\n"
	.string "We'd be happy to have you back.$"

OsitaInnKeeper_Text_5:
# 29 "data/maps/OstiaInn/scripts.pory"
	.string "We'll be here if you change you mind.$"

OsitaInnKeeper_Text_6:
# 33 "data/maps/OstiaInn/scripts.pory"
	.string "Oh, by the way, there's a PC over by\n"
	.string "the bed in the other room.\p"
	.string "You can use it to switch which of your\n"
	.string "pokémon you bring on your journey.$"

OstiaInnMan_Text_0:
# 48 "data/maps/OstiaInn/scripts.pory"
	.string "Welcome to the Ostia Inn my boy.\p"
	.string "My wife runs the inn, so talk to her if\n"
	.string "you're looking to spend the night.\p"
	.string "I do sell a few goods here though.\n"
	.string "Care to take a look?$"

OstiaInnMan_Text_1:
# 55 "data/maps/OstiaInn/scripts.pory"
	.string "Welcome to the Ostia Inn lass.\p"
	.string "My wife runs the inn, so talk to her if\n"
	.string "you're looking to spend the night.\p"
	.string "I do sell a few goods here though. Care\n"
	.string "to take a look?$"

OstiaInnMan_Text_2:
# 63 "data/maps/OstiaInn/scripts.pory"
	.string "Do you want to buy something?$"

OstiaInnMan_Text_3:
# 67 "data/maps/OstiaInn/scripts.pory"
	.string "I always have items in stock, so come\n"
	.string "back if you need anything.$"
