Route_101_MapScripts::
# 2 "data/maps/Route_101/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_101OnLoad
# 3 "data/maps/Route_101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


SetUpMapWeather::
# 7 "data/maps/Route_101/scripts.pory"
	special SetGroupWeather
	return


Route_101OnLoad::
# 11 "data/maps/Route_101/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 12 "data/maps/Route_101/scripts.pory"
	call_if_ge Route_101RemovePuddles
	return


Route_101RemovePuddles::
# 16 "data/maps/Route_101/scripts.pory"
	setmetatile 17, 19, METATILE_General_Grass, FALSE
# 17 "data/maps/Route_101/scripts.pory"
	setmetatile 18, 19, METATILE_General_Grass, FALSE
# 18 "data/maps/Route_101/scripts.pory"
	setmetatile 17, 20, METATILE_General_Grass, FALSE
# 19 "data/maps/Route_101/scripts.pory"
	setmetatile 18, 20, METATILE_General_Grass, FALSE
# 20 "data/maps/Route_101/scripts.pory"
	setmetatile 23, 24, METATILE_General_Grass, FALSE
# 21 "data/maps/Route_101/scripts.pory"
	setmetatile 24, 24, METATILE_General_Grass, FALSE
# 22 "data/maps/Route_101/scripts.pory"
	setmetatile 23, 25, METATILE_General_Grass, FALSE
# 23 "data/maps/Route_101/scripts.pory"
	setmetatile 24, 25, METATILE_General_Grass, FALSE
# 24 "data/maps/Route_101/scripts.pory"
	setmetatile 26, 31, METATILE_General_Grass, FALSE
# 25 "data/maps/Route_101/scripts.pory"
	setmetatile 27, 31, METATILE_General_Grass, FALSE
# 26 "data/maps/Route_101/scripts.pory"
	setmetatile 26, 32, METATILE_General_Grass, FALSE
# 27 "data/maps/Route_101/scripts.pory"
	setmetatile 27, 32, METATILE_General_Grass, FALSE
	return


Route101LedgeBoy::
# 31 "data/maps/Route_101/scripts.pory"
	lock
# 32 "data/maps/Route_101/scripts.pory"
	faceplayer
# 33 "data/maps/Route_101/scripts.pory"
	msgbox Route101LedgeBoy_Text_0
# 37 "data/maps/Route_101/scripts.pory"
	release
	return


Route101ExcitedBoy::
# 41 "data/maps/Route_101/scripts.pory"
	lock
# 42 "data/maps/Route_101/scripts.pory"
	faceplayer
# 43 "data/maps/Route_101/scripts.pory"
	msgbox Route101ExcitedBoy_Text_0
# 51 "data/maps/Route_101/scripts.pory"
	release
	return


Route101LedgeBoy_Text_0:
# 33 "data/maps/Route_101/scripts.pory"
	.string "You can jump down ledges like these.\n"
	.string "But once you do, you can't hop back up.\p"
	.string "Better make sure that's what you want\n"
	.string "if you choose to hop down.$"

Route101ExcitedBoy_Text_0:
# 43 "data/maps/Route_101/scripts.pory"
	.string "I'm gonna be a pokémon trainer some\n"
	.string "day!\p"
	.string "So, I've been studying how to be one\n"
	.string "for like, a really long time.\p"
	.string "Did you know that if one so much as\n"
	.string "looks at you, you have to battle them?\p"
	.string "I don't know if that makes any sense,\n"
	.string "but those are the rules, I guess.$"
