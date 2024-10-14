Valni_Shop_MapScripts::
# 2 "data/maps/Valni_Shop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpValniHouses
	.byte 0


ValniStoreMan::
# 6 "data/maps/Valni_Shop/scripts.pory"
	lock
# 7 "data/maps/Valni_Shop/scripts.pory"
	faceplayer
# 8 "data/maps/Valni_Shop/scripts.pory"
	checkplayergender
# 9 "data/maps/Valni_Shop/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ValniStoreMan_2
# 15 "data/maps/Valni_Shop/scripts.pory"
	message ValniStoreMan_Text_1
ValniStoreMan_1:
# 19 "data/maps/Valni_Shop/scripts.pory"
	waitmessage
# 20 "data/maps/Valni_Shop/scripts.pory"
	call CityMart
# 21 "data/maps/Valni_Shop/scripts.pory"
	msgbox ValniStoreMan_Text_2
# 22 "data/maps/Valni_Shop/scripts.pory"
	release
	return

ValniStoreMan_2:
# 10 "data/maps/Valni_Shop/scripts.pory"
	message ValniStoreMan_Text_0
	goto ValniStoreMan_1


ValniStoreGirl::
# 26 "data/maps/Valni_Shop/scripts.pory"
	lockall
# 27 "data/maps/Valni_Shop/scripts.pory"
	faceplayer
# 28 "data/maps/Valni_Shop/scripts.pory"
	msgbox ValniStoreGirl_Text_0
# 34 "data/maps/Valni_Shop/scripts.pory"
	releaseall
	return


ValniStoreMan_Text_0:
# 10 "data/maps/Valni_Shop/scripts.pory"
	.string "Why, hello young man!\p"
	.string "Welcome to the Valni General Store.\p"
	.string "What can I do for you?$"

ValniStoreMan_Text_1:
# 15 "data/maps/Valni_Shop/scripts.pory"
	.string "Why hello young lady!\n"
	.string "Welcome to the Valni General Store.\p"
	.string "What can I do for you?$"

ValniStoreMan_Text_2:
# 21 "data/maps/Valni_Shop/scripts.pory"
	.string "Thank you for your business.$"

ValniStoreGirl_Text_0:
# 28 "data/maps/Valni_Shop/scripts.pory"
	.string "Grandpa has lots and lots of boxes full\n"
	.string "of all kinds of stuff.\p"
	.string "People come by every week to drop them\n"
	.string "off, and he sells the stuff inside.\p"
	.string "I like to make box forts out of them\n"
	.string "when they're empty!$"
