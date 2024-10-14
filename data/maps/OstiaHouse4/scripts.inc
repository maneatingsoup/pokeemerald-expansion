OstiaHouse4_MapScripts::
# 2 "data/maps/OstiaHouse4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaHouses
	.byte 0


SetUpOstiaHouses::
# 6 "data/maps/OstiaHouse4/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/OstiaHouse4/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpOstiaHouses_1
	return

SetUpOstiaHouses_1:
# 8 "data/maps/OstiaHouse4/scripts.pory"
	setflag FLAG_TEMP_2
	return


OstiaWingull::
# 13 "data/maps/OstiaHouse4/scripts.pory"
	lock
# 14 "data/maps/OstiaHouse4/scripts.pory"
	faceplayer
# 15 "data/maps/OstiaHouse4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_ENCOUNTER
# 16 "data/maps/OstiaHouse4/scripts.pory"
	msgbox OstiaWingull_Text_0
# 17 "data/maps/OstiaHouse4/scripts.pory"
	waitmoncry
# 18 "data/maps/OstiaHouse4/scripts.pory"
	release
	return


OstiaDeafMan::
# 22 "data/maps/OstiaHouse4/scripts.pory"
	lock
# 23 "data/maps/OstiaHouse4/scripts.pory"
	faceplayer
# 24 "data/maps/OstiaHouse4/scripts.pory"
	goto_if_unset FLAG_TM50, OstiaDeafMan_2
# 40 "data/maps/OstiaHouse4/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq OstiaDeafMan_5
# 51 "data/maps/OstiaHouse4/scripts.pory"
	msgbox OstiaDeafMan_Text_3
OstiaDeafMan_1:
# 56 "data/maps/OstiaHouse4/scripts.pory"
	release
	end

OstiaDeafMan_2:
# 25 "data/maps/OstiaHouse4/scripts.pory"
	setvar VAR_TEMP_0, 1
# 26 "data/maps/OstiaHouse4/scripts.pory"
	msgbox OstiaDeafMan_Text_0
# 34 "data/maps/OstiaHouse4/scripts.pory"
	giveitem ITEM_TM51_ECHOED_VOICE, 1
# 35 "data/maps/OstiaHouse4/scripts.pory"
	setflag FLAG_TM50
# 36 "data/maps/OstiaHouse4/scripts.pory"
	msgbox OstiaDeafMan_Text_1
	goto OstiaDeafMan_1

OstiaDeafMan_5:
# 41 "data/maps/OstiaHouse4/scripts.pory"
	msgbox OstiaDeafMan_Text_2
	goto OstiaDeafMan_1


OstiaWingull_Text_0:
# 16 "data/maps/OstiaHouse4/scripts.pory"
	.string "Pihyoh!$"

OstiaDeafMan_Text_0:
# 26 "data/maps/OstiaHouse4/scripts.pory"
	.string "What's that?\p"
	.string "You need to speak up, youngster.\n"
	.string "I'm old and my hearing isn't so good.\p"
	.string "...\p"
	.string "Nope.\p"
	.string "Still can't hear you.\p"
	.string "Maybe this will help.\n"
	.string "Here you go.$"

OstiaDeafMan_Text_1:
# 36 "data/maps/OstiaHouse4/scripts.pory"
	.string "There you go. That should help you speak\n"
	.string "up a little bit.$"

OstiaDeafMan_Text_2:
# 41 "data/maps/OstiaHouse4/scripts.pory"
	.string "ACK!\p"
	.string "There's no need to shout!\p"
	.string "Turns out my hearing aid was turned off\n"
	.string "before. But it's on now, so please try\l"
	.string "to manage your volume better.\p"
	.string "...\p"
	.string "...\p"
	.string "Kids these days.$"

OstiaDeafMan_Text_3:
# 51 "data/maps/OstiaHouse4/scripts.pory"
	.string "Hmm...\p"
	.string "Nope.\p"
	.string "I still can't hear you...$"
