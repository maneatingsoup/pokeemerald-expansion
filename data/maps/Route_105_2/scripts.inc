Route_105_2_MapScripts::
# 2 "data/maps/Route_105_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_105_2OnLoad
# 3 "data/maps/Route_105_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


Route_105_2OnLoad::
# 7 "data/maps/Route_105_2/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 15
# 8 "data/maps/Route_105_2/scripts.pory"
	call_if_ge Route_105_2RemovePuddles
	return


Route_105_2RemovePuddles::
# 12 "data/maps/Route_105_2/scripts.pory"
	setmetatile 13, 15, METATILE_General_Grass, FALSE
# 13 "data/maps/Route_105_2/scripts.pory"
	setmetatile 14, 15, METATILE_General_Grass, FALSE
# 14 "data/maps/Route_105_2/scripts.pory"
	setmetatile 13, 16, METATILE_General_Grass, FALSE
# 15 "data/maps/Route_105_2/scripts.pory"
	setmetatile 14, 16, METATILE_General_Grass, FALSE
# 16 "data/maps/Route_105_2/scripts.pory"
	setmetatile 31, 17, METATILE_General_Grass, FALSE
# 17 "data/maps/Route_105_2/scripts.pory"
	setmetatile 32, 17, METATILE_General_Grass, FALSE
# 18 "data/maps/Route_105_2/scripts.pory"
	setmetatile 31, 18, METATILE_General_Grass, FALSE
# 19 "data/maps/Route_105_2/scripts.pory"
	setmetatile 32, 18, METATILE_General_Grass, FALSE
	return


AromaLadyLauren::
# 23 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_LAUREN, AromaLadyLaurenIntro, AromaLadyLaurenLose
# 24 "data/maps/Route_105_2/scripts.pory"
	msgbox AromaLadyLauren_Text_0, MSGBOX_AUTOCLOSE
	return


RunnerRachel::
# 33 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_single TRAINER_RUNNER_RACHEL, RunnerRachelIntro, RunnerRachelLose
# 34 "data/maps/Route_105_2/scripts.pory"
	msgbox RunnerRachel_Text_0, MSGBOX_AUTOCLOSE
	return


BirdKeeperRichard::
# 40 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_RICHARD, BirdKeeperRichardIntro, BirdKeeperRichardLose
# 41 "data/maps/Route_105_2/scripts.pory"
	msgbox BirdKeeperRichard_Text_0, MSGBOX_AUTOCLOSE
	return


LadyNicole::
# 47 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_single TRAINER_LADY_NICOLE, LadyNicoleIntro, LadyNicoleLose
# 48 "data/maps/Route_105_2/scripts.pory"
	msgbox LadyNicole_Text_0, MSGBOX_AUTOCLOSE
	return


RichBoyPatrick::
# 53 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_double TRAINER_RICH_BOY_PATRICK, RichBoyPatrickIntro, RichBoyPatrickLose, Dummy
# 54 "data/maps/Route_105_2/scripts.pory"
	msgbox RichBoyPatrick_Text_0, MSGBOX_AUTOCLOSE
	return


GentlemanCharles::
# 61 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_CHARLES, GentlemanCharlesIntro, GentlemanCharlesLose
# 62 "data/maps/Route_105_2/scripts.pory"
	msgbox GentlemanCharles_Text_0, MSGBOX_AUTOCLOSE
	return


PkmnBreederAlexis::
# 68 "data/maps/Route_105_2/scripts.pory"
	trainerbattle_single TRAINER_PKMN_BREEDER_ALEXIS, PkmnBreederAlexisIntro, PkmnBreederAlexisLose
# 69 "data/maps/Route_105_2/scripts.pory"
	msgbox PkmnBreederAlexis_Text_0, MSGBOX_AUTOCLOSE
	return


AromaLadyLauren_Text_0:
# 24 "data/maps/Route_105_2/scripts.pory"
	.string "I caught my pokémon over in the Valni\n"
	.string "Forest.\p"
	.string "There are a lot more Grass-type pokémon\n"
	.string "on the other side of the river.\p"
	.string "So I've been thinking about moving back\n"
	.string "to Valni.$"

RunnerRachel_Text_0:
# 34 "data/maps/Route_105_2/scripts.pory"
	.string "You look like you get a lot of\n"
	.string "exercise.\p"
	.string "You must travel a lot.$"

BirdKeeperRichard_Text_0:
# 41 "data/maps/Route_105_2/scripts.pory"
	.string "Aviana is a lot tougher than I am.\p"
	.string "If you plan on challenging the gym in\n"
	.string "Port Neleras, you'll find out.$"

LadyNicole_Text_0:
# 48 "data/maps/Route_105_2/scripts.pory"
	.string "That was supposed to be my battle.\n"
	.string "Why did you have to win?$"

RichBoyPatrick_Text_0:
# 54 "data/maps/Route_105_2/scripts.pory"
	.string "Having money is more important than\n"
	.string "having friends.\p"
	.string "...\p"
	.string "You can buy good friends, right?$"

GentlemanCharles_Text_0:
# 62 "data/maps/Route_105_2/scripts.pory"
	.string "Thank you for indulging me.\p"
	.string "I haven't had a good battle in some\n"
	.string "time.$"

PkmnBreederAlexis_Text_0:
# 69 "data/maps/Route_105_2/scripts.pory"
	.string "Well, I may not be great at battling\n"
	.string "but that's okay.\p"
	.string "I love my pokémon, and I'm going to show\n"
	.string "that to them while I raise them.$"

AromaLadyLaurenIntro::
# 75 "data/maps/Route_105_2/scripts.pory"
	.string "Congratulations on making it through\n"
	.string "the Rugged Pass.\p"
	.string "Let's celebrate with a battle!$"

AromaLadyLaurenLose::
# 81 "data/maps/Route_105_2/scripts.pory"
	.string "I'm sure you're celebrating now...$"

RunnerRachelIntro::
# 85 "data/maps/Route_105_2/scripts.pory"
	.string "Exercising on the mountainside is a\n"
	.string "great workout!$"

RunnerRachelLose::
# 90 "data/maps/Route_105_2/scripts.pory"
	.string "Ack, okay.$"

BirdKeeperRichardIntro::
# 94 "data/maps/Route_105_2/scripts.pory"
	.string "My birds will fly circles around you!$"

BirdKeeperRichardLose::
# 98 "data/maps/Route_105_2/scripts.pory"
	.string "Urk, you beat me.$"

LadyNicoleIntro::
# 102 "data/maps/Route_105_2/scripts.pory"
	.string "Oh my, a youth to play the foe in my\n"
	.string "battle.$"

LadyNicoleLose::
# 107 "data/maps/Route_105_2/scripts.pory"
	.string "You weren't supposed to win.\n"
	.string "How rude!$"

RichBoyPatrickIntro::
# 112 "data/maps/Route_105_2/scripts.pory"
	.string "What am I supposed to do with all of\n"
	.string "this money?$"

RichBoyPatrickLose::
# 117 "data/maps/Route_105_2/scripts.pory"
	.string "Oh well, at least I'm still rich.$"

GentlemanCharlesIntro::
# 121 "data/maps/Route_105_2/scripts.pory"
	.string "Hello there, young one.\p"
	.string "Can I interest you in a pokémon battle?$"

GentlemanCharlesLose::
# 126 "data/maps/Route_105_2/scripts.pory"
	.string "Haha, oh my.\n"
	.string "Wasn't that exciting!$"

PkmnBreederAlexisIntro::
# 131 "data/maps/Route_105_2/scripts.pory"
	.string "I've been breeding a whole bunch of\n"
	.string "different pokémon.\p"
	.string "Take a look!$"

PkmnBreederAlexisLose::
# 137 "data/maps/Route_105_2/scripts.pory"
	.string "Aw, I thought having six pokémon would\n"
	.string "help me win battles.$"
