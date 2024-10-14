ValniHouse3_MapScripts::
# 2 "data/maps/ValniHouse3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpValniHouses
	.byte 0


SetUpValniHouses::
# 6 "data/maps/ValniHouse3/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/ValniHouse3/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpValniHouses_1
	return

SetUpValniHouses_1:
# 8 "data/maps/ValniHouse3/scripts.pory"
	setflag FLAG_TEMP_2
	return


ValniEggWoman::
# 13 "data/maps/ValniHouse3/scripts.pory"
	lock
# 14 "data/maps/ValniHouse3/scripts.pory"
	faceplayer
# 15 "data/maps/ValniHouse3/scripts.pory"
	goto_if_unset FLAG_TOGEPI_EGG, ValniEggWoman_2
# 45 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_6
ValniEggWoman_1:
# 51 "data/maps/ValniHouse3/scripts.pory"
	release
	return

ValniEggWoman_2:
# 16 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_0, MSGBOX_YESNO
# 21 "data/maps/ValniHouse3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ValniEggWoman_5
# 40 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_5
	goto ValniEggWoman_1

ValniEggWoman_5:
# 22 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_1
# 23 "data/maps/ValniHouse3/scripts.pory"
	giveegg SPECIES_TOGEPI
# 24 "data/maps/ValniHouse3/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq ValniEggWoman_8
# 31 "data/maps/ValniHouse3/scripts.pory"
	setflag FLAG_TOGEPI_EGG
# 32 "data/maps/ValniHouse3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_3
# 35 "data/maps/ValniHouse3/scripts.pory"
	waitfanfare
# 36 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_4
	goto ValniEggWoman_1

ValniEggWoman_8:
# 25 "data/maps/ValniHouse3/scripts.pory"
	msgbox ValniEggWoman_Text_2
	goto ValniEggWoman_1


ValniEggWoman_Text_0:
# 16 "data/maps/ValniHouse3/scripts.pory"
	.string "I received an egg a week ago, but I\n"
	.string "don't really have what it takes to\l"
	.string "care for a baby pokémon.\p"
	.string "You're a pokémon trainer right?\n"
	.string "Would you raise it?$"

ValniEggWoman_Text_1:
# 22 "data/maps/ValniHouse3/scripts.pory"
	.string "Thank you, you're a life saver!$"

ValniEggWoman_Text_2:
# 25 "data/maps/ValniHouse3/scripts.pory"
	.string "Oh...\p"
	.string "It looks like you don't have room.\p"
	.string "You'll have to come back after clearing\n"
	.string "Some room in your PC.$"

ValniEggWoman_Text_3:
# 33 "data/maps/ValniHouse3/scripts.pory"
	.string "{PLAYER} received the mysterious\n"
	.string "pokémon egg!$"

ValniEggWoman_Text_4:
# 36 "data/maps/ValniHouse3/scripts.pory"
	.string "Make sure to take good care of it.$"

ValniEggWoman_Text_5:
# 40 "data/maps/ValniHouse3/scripts.pory"
	.string "Oh, I see.\p"
	.string "Let me know if you change your mind.$"

ValniEggWoman_Text_6:
# 45 "data/maps/ValniHouse3/scripts.pory"
	.string "Pokémon eggs aren't very common and\n"
	.string "so a lot of trainers aren't prepared\l"
	.string "to raise the pokémon that hatch.\p"
	.string "Thanks for looking after that egg.\n"
	.string "I'm sure it'll appreciate it, too.$"
