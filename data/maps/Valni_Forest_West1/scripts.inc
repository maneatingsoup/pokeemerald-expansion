Valni_Forest_West1_MapScripts::
# 2 "data/maps/Valni_Forest_West1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldusForestWest1OnLoad
# 3 "data/maps/Valni_Forest_West1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


AldusForestWest1OnLoad::
# 7 "data/maps/Valni_Forest_West1/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Valni_Forest_West1/scripts.pory"
	call_if_ge AldusForestWest1RemovePuddles
	return


AldusForestWest1RemovePuddles::
# 12 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 14, 34, METATILE_General_Grass, FALSE
# 13 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 15, 34, METATILE_General_Grass, FALSE
# 14 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 14, 35, METATILE_General_Grass, FALSE
# 15 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 15, 35, METATILE_General_Grass, FALSE
# 16 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 10, 28, METATILE_General_Grass, FALSE
# 17 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 11, 28, METATILE_General_Grass, FALSE
# 18 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 10, 29, METATILE_General_Grass, FALSE
# 19 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 11, 29, METATILE_General_Grass, FALSE
# 20 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 31, 28, METATILE_General_Grass, FALSE
# 21 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 32, 28, METATILE_General_Grass, FALSE
# 22 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 31, 29, METATILE_General_Grass, FALSE
# 23 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 32, 29, METATILE_General_Grass, FALSE
# 24 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 25, 15, METATILE_General_Grass, FALSE
# 25 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 26, 15, METATILE_General_Grass, FALSE
# 26 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 25, 16, METATILE_General_Grass, FALSE
# 27 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 26, 16, METATILE_General_Grass, FALSE
# 28 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 10, 5, METATILE_General_Grass, FALSE
# 29 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 11, 5, METATILE_General_Grass, FALSE
# 30 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 10, 6, METATILE_General_Grass, FALSE
# 31 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 11, 6, METATILE_General_Grass, FALSE
# 32 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 25, 8, METATILE_General_Grass, FALSE
# 33 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 26, 8, METATILE_General_Grass, FALSE
# 34 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 25, 9, METATILE_General_Grass, FALSE
# 35 "data/maps/Valni_Forest_West1/scripts.pory"
	setmetatile 26, 9, METATILE_General_Grass, FALSE
	return


AldusForestSearchingMan::
# 39 "data/maps/Valni_Forest_West1/scripts.pory"
	lock
# 40 "data/maps/Valni_Forest_West1/scripts.pory"
	faceplayer
# 41 "data/maps/Valni_Forest_West1/scripts.pory"
	msgbox AldusForestSearchingMan_Text_0
# 44 "data/maps/Valni_Forest_West1/scripts.pory"
	release
	return


BugCatcherJacob::
# 48 "data/maps/Valni_Forest_West1/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JACOB, BugCatcherJacobIntro, BugCatcherJacobLose
# 49 "data/maps/Valni_Forest_West1/scripts.pory"
	msgbox BugCatcherJacob_Text_0, MSGBOX_AUTOCLOSE
	return


BugCatcherJosh::
# 54 "data/maps/Valni_Forest_West1/scripts.pory"
	trainerbattle_double TRAINER_BUG_CATCHER_JOSH, BugCatcherJoshIntro, BugCatcherJoshLose, Dummy
# 55 "data/maps/Valni_Forest_West1/scripts.pory"
	msgbox BugCatcherJosh_Text_0, MSGBOX_AUTOCLOSE
	return


YoungsterMatthew::
# 60 "data/maps/Valni_Forest_West1/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_MATTHEW, YoungsterMatthewIntro, YoungsterMatthewLose
# 61 "data/maps/Valni_Forest_West1/scripts.pory"
	msgbox YoungsterMatthew_Text_0, MSGBOX_AUTOCLOSE
	return


YoungsterDaniel::
# 66 "data/maps/Valni_Forest_West1/scripts.pory"
	trainerbattle_double TRAINER_YOUNGSTER_DANIEL, YoungsterDanielIntro, YoungsterDanielLose, Dummy
# 67 "data/maps/Valni_Forest_West1/scripts.pory"
	msgbox YoungsterDaniel_Text_0, MSGBOX_AUTOCLOSE
	return


BugCatcherChris::
# 72 "data/maps/Valni_Forest_West1/scripts.pory"
	trainerbattle_double TRAINER_BUG_CATCHER_CHRIS, BugCatcherChrisIntro, BugCatcherChrisLose, Dummy
# 73 "data/maps/Valni_Forest_West1/scripts.pory"
	msgbox BugCatcherChris_Text_0, MSGBOX_AUTOCLOSE
	return


AldusForestSearchingMan_Text_0:
# 41 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I'm trying to find a Venonat to catch.\n"
	.string "But I haven't seen one all morning.\l"
	.string "Maybe they only live up by lake...$"

BugCatcherJacob_Text_0:
# 49 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "You'll come around. Just wait, one day\n"
	.string "you'll see how cool bug pokémon are!$"

BugCatcherJosh_Text_0:
# 55 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I'll train up my bug pokémon more for\n"
	.string "my next battle.$"

YoungsterMatthew_Text_0:
# 61 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Mom says I should be studying, but I\n"
	.string "wanna get better at battling instead.$"

YoungsterDaniel_Text_0:
# 67 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I can hide really well, but I'm not\n"
	.string "the best at battling.$"

BugCatcherChris_Text_0:
# 73 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I think I'm just gonna catch bug\n"
	.string "pokémon from now on. No more\l"
	.string "battling with them for me.$"

BugCatcherJacobIntro::
# 78 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Bug pokémon are the best! Don't you\n"
	.string "think so?$"

BugCatcherJacobLose::
# 83 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I still think they're cool!$"

BugCatcherJoshIntro::
# 87 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I'm gonna battle with the bug pokémon\n"
	.string "that I caught today!$"

BugCatcherJoshLose::
# 92 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Maybe using newly caught bugs wasn't\n"
	.string "the best idea...$"

YoungsterMatthewIntro::
# 97 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Ha, I see you!$"

YoungsterMatthewLose::
# 101 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "I need to spend less time standing\n"
	.string "in the woods looking for battles.$"

YoungsterDanielIntro::
# 106 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Bet you didn't see me!$"

YoungsterDanielLose::
# 110 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "If only I were as good at battles\n"
	.string "as I am at hiding.$"

BugCatcherChrisIntro::
# 115 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Thought you could sneak past me?$"

BugCatcherChrisLose::
# 119 "data/maps/Valni_Forest_West1/scripts.pory"
	.string "Maybe I should go back catching\n"
	.string "bugs instead of battling.$"
