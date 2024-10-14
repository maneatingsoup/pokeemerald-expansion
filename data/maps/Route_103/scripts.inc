Route_103_MapScripts::
# 2 "data/maps/Route_103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_103OnLoad
# 3 "data/maps/Route_103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


Route_103OnLoad::
# 7 "data/maps/Route_103/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Route_103/scripts.pory"
	call_if_ge Route_103RemovePuddles
	return


Route_103RemovePuddles::
# 12 "data/maps/Route_103/scripts.pory"
	setmetatile 5, 8, METATILE_General_Grass, FALSE
# 13 "data/maps/Route_103/scripts.pory"
	setmetatile 6, 8, METATILE_General_Grass, FALSE
# 14 "data/maps/Route_103/scripts.pory"
	setmetatile 5, 9, METATILE_General_Grass, FALSE
# 15 "data/maps/Route_103/scripts.pory"
	setmetatile 6, 9, METATILE_General_Grass, FALSE
# 16 "data/maps/Route_103/scripts.pory"
	setmetatile 14, 26, METATILE_General_Grass, FALSE
# 17 "data/maps/Route_103/scripts.pory"
	setmetatile 15, 26, METATILE_General_Grass, FALSE
# 18 "data/maps/Route_103/scripts.pory"
	setmetatile 14, 27, METATILE_General_Grass, FALSE
# 19 "data/maps/Route_103/scripts.pory"
	setmetatile 15, 27, METATILE_General_Grass, FALSE
	return


AldusForestSignNorth::
# 23 "data/maps/Route_103/scripts.pory"
	lock
# 24 "data/maps/Route_103/scripts.pory"
	msgbox AldusForestSignNorth_Text_0
# 26 "data/maps/Route_103/scripts.pory"
	release
	return


Route103Girl::
# 30 "data/maps/Route_103/scripts.pory"
	lock
# 31 "data/maps/Route_103/scripts.pory"
	faceplayer
# 32 "data/maps/Route_103/scripts.pory"
	goto_if_set FLAG_ARUM_TWIG, Route103Girl_2
# 37 "data/maps/Route_103/scripts.pory"
	msgbox Route103Girl_Text_1
# 41 "data/maps/Route_103/scripts.pory"
	setflag FLAG_ARUM_TWIG
# 42 "data/maps/Route_103/scripts.pory"
	giveitem ITEM_ARUM_TWIG
# 43 "data/maps/Route_103/scripts.pory"
	msgbox Route103Girl_Text_2
Route103Girl_1:
# 49 "data/maps/Route_103/scripts.pory"
	release
	return

Route103Girl_2:
# 33 "data/maps/Route_103/scripts.pory"
	msgbox Route103Girl_Text_0
	goto Route103Girl_1


LassEmma::
# 53 "data/maps/Route_103/scripts.pory"
	trainerbattle_double TRAINER_LASS_EMMA, LassEmmaIntro, LassEmmaLose, Dummy
# 54 "data/maps/Route_103/scripts.pory"
	msgbox LassEmma_Text_0, MSGBOX_AUTOCLOSE
	return


FishermanAnthony::
# 58 "data/maps/Route_103/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_ANTHONY, FishermanAnthonyIntro, FishermanAnthonyLose
# 59 "data/maps/Route_103/scripts.pory"
	msgbox FishermanAnthony_Text_0, MSGBOX_AUTOCLOSE
	return


AceTrainerOlivia::
# 63 "data/maps/Route_103/scripts.pory"
	trainerbattle_single TRAINER_ACE_TRAINER_OLIVIA, AceTrainerOliviaIntro, AceTrainerOliviaLose
# 64 "data/maps/Route_103/scripts.pory"
	msgbox AceTrainerOlivia_Text_0, MSGBOX_AUTOCLOSE
	return


AldusForestSignNorth_Text_0:
# 24 "data/maps/Route_103/scripts.pory"
	.string "Valni Forest\n"
	.string "North Entrance$"

Route103Girl_Text_0:
# 33 "data/maps/Route_103/scripts.pory"
	.string "I want to see my grandparents in Aldus,\n"
	.string "but I'm afraid I'll get lost in there.$"

Route103Girl_Text_1:
# 37 "data/maps/Route_103/scripts.pory"
	.string "Oh, you made it through the Valni Forest\n"
	.string "all by yourself?\p"
	.string "There are a lot of wild pokémon in\n"
	.string "the forest, you should take this.$"

Route103Girl_Text_2:
# 43 "data/maps/Route_103/scripts.pory"
	.string "That twig came from a flowering plant.\p"
	.string "It's pollen smells nice to people,\n"
	.string "but pokémon find it repulsive.\p"
	.string "Many pokémon will avoid you if you\n"
	.string "hold it.$"

LassEmma_Text_0:
# 54 "data/maps/Route_103/scripts.pory"
	.string "I'll just have to keep practicing.$"

FishermanAnthony_Text_0:
# 59 "data/maps/Route_103/scripts.pory"
	.string "Still no bites yet today.$"

AceTrainerOlivia_Text_0:
# 64 "data/maps/Route_103/scripts.pory"
	.string "Maybe if I catch another pokémon.\n"
	.string "Then I'd be strong enough for the gym.$"

LassEmmaIntro::
# 68 "data/maps/Route_103/scripts.pory"
	.string "My big sis let me borrow her pokémon,\n"
	.string "so I could learn how to battle!$"

LassEmmaLose::
# 73 "data/maps/Route_103/scripts.pory"
	.string "Looks like I still have a lot of work\n"
	.string "to do before I'm as good as her.$"

FishermanAnthonyIntro::
# 78 "data/maps/Route_103/scripts.pory"
	.string "Nothing here has been biting for me\n"
	.string "today.$"

FishermanAnthonyLose::
# 83 "data/maps/Route_103/scripts.pory"
	.string "Maybe I'll stick to fishing in the\n"
	.string "ocean. Nobody asks me to battle on\l"
	.string "my boat.$"

AceTrainerOliviaIntro::
# 89 "data/maps/Route_103/scripts.pory"
	.string "I haven't lost a single battle today.\n"
	.string "If I beat you too, I'm going to\l"
	.string "challenge Ostia's gym leader.$"

AceTrainerOliviaLose::
# 95 "data/maps/Route_103/scripts.pory"
	.string "Maybe I should train a bit more first.$"
