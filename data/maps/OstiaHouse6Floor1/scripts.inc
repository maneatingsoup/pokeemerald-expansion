OstiaHouse6Floor1_MapScripts::
# 2 "data/maps/OstiaHouse6Floor1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaHouses
	.byte 0


OstiaBlackBelt::
# 6 "data/maps/OstiaHouse6Floor1/scripts.pory"
	lock
# 7 "data/maps/OstiaHouse6Floor1/scripts.pory"
	faceplayer
# 8 "data/maps/OstiaHouse6Floor1/scripts.pory"
	goto_if_unset FLAG_MUSCLE_BAND, OstiaBlackBelt_2
# 21 "data/maps/OstiaHouse6Floor1/scripts.pory"
	goto_if_unset FLAG_TEMP_A, OstiaBlackBelt_6
OstiaBlackBelt_5:
# 25 "data/maps/OstiaHouse6Floor1/scripts.pory"
	msgbox OstiaBlackBelt_Text_3
OstiaBlackBelt_1:
# 27 "data/maps/OstiaHouse6Floor1/scripts.pory"
	release
	return

OstiaBlackBelt_2:
# 9 "data/maps/OstiaHouse6Floor1/scripts.pory"
	setflag FLAG_TEMP_A
# 10 "data/maps/OstiaHouse6Floor1/scripts.pory"
	msgbox OstiaBlackBelt_Text_0
# 11 "data/maps/OstiaHouse6Floor1/scripts.pory"
	giveitem ITEM_MUSCLE_BAND, 1
# 12 "data/maps/OstiaHouse6Floor1/scripts.pory"
	setflag FLAG_MUSCLE_BAND
# 13 "data/maps/OstiaHouse6Floor1/scripts.pory"
	msgbox OstiaBlackBelt_Text_1
	goto OstiaBlackBelt_1

OstiaBlackBelt_6:
# 22 "data/maps/OstiaHouse6Floor1/scripts.pory"
	msgbox OstiaBlackBelt_Text_2
	goto OstiaBlackBelt_5


OstiaBlackBelt_Text_0:
# 10 "data/maps/OstiaHouse6Floor1/scripts.pory"
	.string "Don't say anything. Just take this.$"

OstiaBlackBelt_Text_1:
# 13 "data/maps/OstiaHouse6Floor1/scripts.pory"
	.string "They accidentally gave me two when I\n"
	.string "bought mine at the store.\p"
	.string "That's where people get black belts too,\n"
	.string "by the way.\p"
	.string "You can just buy them at the store.\n"
	.string "My blackbelt is just for show.$"

OstiaBlackBelt_Text_2:
# 22 "data/maps/OstiaHouse6Floor1/scripts.pory"
	.string "I totally bought my black belt from the\n"
	.string "old man in the inn.$"

OstiaBlackBelt_Text_3:
# 25 "data/maps/OstiaHouse6Floor1/scripts.pory"
	.string "Don't tell anybody I'm a big fake, okay?$"
