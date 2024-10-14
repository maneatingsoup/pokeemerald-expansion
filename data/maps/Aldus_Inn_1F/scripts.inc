Aldus_Inn_1F_MapScripts::
# 2 "data/maps/Aldus_Inn_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpAldusInn
	.byte 0


SetUpAldusInn::
# 6 "data/maps/Aldus_Inn_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/Aldus_Inn_1F/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpAldusInn_1
	return

SetUpAldusInn_1:
# 8 "data/maps/Aldus_Inn_1F/scripts.pory"
	setflag FLAG_TEMP_2
	return


AldusInnKeeper::
# 13 "data/maps/Aldus_Inn_1F/scripts.pory"
	lock
# 14 "data/maps/Aldus_Inn_1F/scripts.pory"
	faceplayer
# 15 "data/maps/Aldus_Inn_1F/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq AldusInnKeeper_2
# 21 "data/maps/Aldus_Inn_1F/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq AldusInnKeeper_3
# 25 "data/maps/Aldus_Inn_1F/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq AldusInnKeeper_4
AldusInnKeeper_1:
# 28 "data/maps/Aldus_Inn_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AldusInnKeeper_9
# 39 "data/maps/Aldus_Inn_1F/scripts.pory"
	setvar VAR_TEMP_5, 2
# 40 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_5
AldusInnKeeper_8:
# 43 "data/maps/Aldus_Inn_1F/scripts.pory"
	goto_if_unset FLAG_INN_PC_INFO, AldusInnKeeper_13
AldusInnKeeper_12:
# 50 "data/maps/Aldus_Inn_1F/scripts.pory"
	release
	return

AldusInnKeeper_2:
# 16 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_0, MSGBOX_YESNO
	goto AldusInnKeeper_1

AldusInnKeeper_3:
# 22 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_1, MSGBOX_YESNO
	goto AldusInnKeeper_1

AldusInnKeeper_4:
# 26 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_2, MSGBOX_YESNO
	goto AldusInnKeeper_1

AldusInnKeeper_9:
# 29 "data/maps/Aldus_Inn_1F/scripts.pory"
	setvar VAR_TEMP_5, 1
# 30 "data/maps/Aldus_Inn_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ALDUS
# 31 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_3
# 34 "data/maps/Aldus_Inn_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 35 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_4
	goto AldusInnKeeper_8

AldusInnKeeper_13:
# 44 "data/maps/Aldus_Inn_1F/scripts.pory"
	setflag FLAG_INN_PC_INFO
# 45 "data/maps/Aldus_Inn_1F/scripts.pory"
	msgbox AldusInnKeeper_Text_6
	goto AldusInnKeeper_12


AldusInnKeeper_Text_0:
# 16 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "Welcome, dear.\p"
	.string "It's nice to see someone so young\n"
	.string "stop by.\p"
	.string "Why don't you rest up here for the day?$"

AldusInnKeeper_Text_1:
# 22 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "Want to stay another night dear?\n"
	.string "Don't be shy.$"

AldusInnKeeper_Text_2:
# 26 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "Oh, did you decide to change you mind?$"

AldusInnKeeper_Text_3:
# 31 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "That's right dear.\p"
	.string "Wouldn't want you to push yourself too\n"
	.string "hard now, would we?$"

AldusInnKeeper_Text_4:
# 35 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "Don't be a stranger.\p"
	.string "Come back any time you need to rest up.$"

AldusInnKeeper_Text_5:
# 40 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "If you're sure. But don't forget we're\n"
	.string "here if you decide you need to rest.$"

AldusInnKeeper_Text_6:
# 45 "data/maps/Aldus_Inn_1F/scripts.pory"
	.string "Oh, by the way, dear, there is one of\n"
	.string "those PC machines upstairs.\p"
	.string "You can use it to switch which of your\n"
	.string "pokémon you bring on your journey.$"
