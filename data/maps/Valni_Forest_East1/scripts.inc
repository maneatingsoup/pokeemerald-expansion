Valni_Forest_East1_MapScripts::
# 2 "data/maps/Valni_Forest_East1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldusForestEastOnLoad
# 3 "data/maps/Valni_Forest_East1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


AldusForestEastOnLoad::
# 7 "data/maps/Valni_Forest_East1/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Valni_Forest_East1/scripts.pory"
	call_if_ge AldusForestEastRemovePuddles
	return


AldusForestEastRemovePuddles::
# 12 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 13, 2, METATILE_General_Grass, FALSE
# 13 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 14, 2, METATILE_General_Grass, FALSE
# 14 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 13, 3, METATILE_General_Grass, FALSE
# 15 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 14, 3, METATILE_General_Grass, FALSE
# 16 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 22, 5, METATILE_General_Grass, FALSE
# 17 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 23, 5, METATILE_General_Grass, FALSE
# 18 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 22, 6, METATILE_General_Grass, FALSE
# 19 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 23, 6, METATILE_General_Grass, FALSE
# 20 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 24, 21, METATILE_General_Grass, FALSE
# 21 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 25, 21, METATILE_General_Grass, FALSE
# 22 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 24, 22, METATILE_General_Grass, FALSE
# 23 "data/maps/Valni_Forest_East1/scripts.pory"
	setmetatile 25, 22, METATILE_General_Grass, FALSE
	return


PkmnRangerLily::
# 27 "data/maps/Valni_Forest_East1/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LILY, PkmnRangerLilyIntro, PkmnRangerLilyLose
# 28 "data/maps/Valni_Forest_East1/scripts.pory"
	msgbox PkmnRangerLily_Text_0, MSGBOX_AUTOCLOSE
	return


BugManiacCaden::
# 35 "data/maps/Valni_Forest_East1/scripts.pory"
	trainerbattle_single TRAINER_BUG_MANIAC_CADEN, BugManiacCadenIntro, BugManiacCadenLose
# 36 "data/maps/Valni_Forest_East1/scripts.pory"
	msgbox BugManiacCaden_Text_0, MSGBOX_AUTOCLOSE
	return


BirdKeeperLucas::
# 42 "data/maps/Valni_Forest_East1/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_LUCAS, BirdKeeperLucasIntro, BirdKeeperLucasLose, Dummy
# 43 "data/maps/Valni_Forest_East1/scripts.pory"
	msgbox BirdKeeperLucas_Text_0, MSGBOX_AUTOCLOSE
	return


PkmnRangerLily_Text_0:
# 28 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "The Forest has been here long before\n"
	.string "people ever were.\p"
	.string "It's a vital part of the ecosystem\n"
	.string "here in the rainy region.$"

BugManiacCaden_Text_0:
# 36 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "I'll beat the next guy who wanders\n"
	.string "through here, and they'll see just\l"
	.string "how strong my bug pokémon are!$"

BirdKeeperLucas_Text_0:
# 43 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "I'm here looking for a Trumbeak,\n"
	.string "but I haven't seen one yet.$"

PkmnRangerLilyIntro::
# 47 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "The Vlani Forest is such a beautiful\n"
	.string "place, don't you think?$"

PkmnRangerLilyLose::
# 52 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "Aw, you beat me.$"

BugManiacCadenIntro::
# 56 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "My bug pokémon are too strong to\n"
	.string "lose to you!$"

BugManiacCadenLose::
# 61 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "Ack! Maybe they aren't so strong\n"
	.string "after all.$"

BirdKeeperLucasIntro::
# 66 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "The thick trees in this forest\n"
	.string "provide a perfect vantage point\l"
	.string "for my bird pokémon.$"

BirdKeeperLucasLose::
# 72 "data/maps/Valni_Forest_East1/scripts.pory"
	.string "Looks like it wasn't good enough\n"
	.string "for them to claim victory.$"
