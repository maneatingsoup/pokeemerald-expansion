Port_Neleras_MapScripts::
# 2 "data/maps/Port_Neleras/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PortNelerasOnLoad
# 3 "data/maps/Port_Neleras/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpPortNeleras
	.byte 0


PortNelerasOnLoad::
# 7 "data/maps/Port_Neleras/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 15
# 8 "data/maps/Port_Neleras/scripts.pory"
	call_if_ge PortNelerasRemovePuddles
	return


PortNelerasRemovePuddles::
# 12 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 28, 13, METATILE_General_Grass, FALSE
# 13 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 29, 13, METATILE_General_Grass, FALSE
# 14 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 28, 14, METATILE_General_Grass, FALSE
# 15 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 29, 14, METATILE_General_Grass, FALSE
# 16 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 15, 15, METATILE_General_Grass, FALSE
# 17 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 16, 15, METATILE_General_Grass, FALSE
# 18 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 15, 16, METATILE_General_Grass, FALSE
# 19 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 16, 16, METATILE_General_Grass, FALSE
# 20 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 15, 17, METATILE_General_Grass, FALSE
# 21 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 16, 17, METATILE_General_Grass, FALSE
# 22 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 15, 18, METATILE_General_Grass, FALSE
# 23 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 16, 18, METATILE_General_Grass, FALSE
# 24 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 15, 38, METATILE_General_Grass, FALSE
# 25 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 16, 38, METATILE_General_Grass, FALSE
# 26 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 15, 39, METATILE_General_Grass, FALSE
# 27 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 16, 39, METATILE_General_Grass, FALSE
# 28 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 26, 37, METATILE_General_Grass, FALSE
# 29 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 27, 37, METATILE_General_Grass, FALSE
# 30 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 26, 38, METATILE_General_Grass, FALSE
# 31 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 27, 38, METATILE_General_Grass, FALSE
# 32 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 23, 42, METATILE_General_Grass, FALSE
# 33 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 24, 42, METATILE_General_Grass, FALSE
# 34 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 23, 43, METATILE_General_Grass, FALSE
# 35 "data/maps/Port_Neleras/scripts.pory"
	setmetatile 24, 43, METATILE_General_Grass, FALSE
	return


SetUpPortNeleras::
# 39 "data/maps/Port_Neleras/scripts.pory"
	special SetGroupWeather
# 40 "data/maps/Port_Neleras/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 15
	goto_if_lt SetUpPortNeleras_1
	return

SetUpPortNeleras_1:
# 41 "data/maps/Port_Neleras/scripts.pory"
	setflag FLAG_TEMP_1
	return


NelerasBoy::
# 46 "data/maps/Port_Neleras/scripts.pory"
	lock
# 47 "data/maps/Port_Neleras/scripts.pory"
	faceplayer
	return

