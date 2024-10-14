Valni_Forest_East2_MapScripts::
# 2 "data/maps/Valni_Forest_East2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldusForestEast2OnLoad
# 3 "data/maps/Valni_Forest_East2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


AldusForestEast2OnLoad::
# 7 "data/maps/Valni_Forest_East2/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Valni_Forest_East2/scripts.pory"
	call_if_ge AldusForestEast2RemovePuddles
	return


AldusForestEast2RemovePuddles::
# 12 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 17, 12, METATILE_General_Grass, FALSE
# 13 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 18, 12, METATILE_General_Grass, FALSE
# 14 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 17, 13, METATILE_General_Grass, FALSE
# 15 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 18, 13, METATILE_General_Grass, FALSE
# 16 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 31, 4, METATILE_General_Grass, FALSE
# 17 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 32, 4, METATILE_General_Grass, FALSE
# 18 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 33, 4, METATILE_General_Grass, FALSE
# 19 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 31, 5, METATILE_General_Grass, FALSE
# 20 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 32, 5, METATILE_General_Grass, FALSE
# 21 "data/maps/Valni_Forest_East2/scripts.pory"
	setmetatile 33, 5, METATILE_General_Grass, FALSE
	return

