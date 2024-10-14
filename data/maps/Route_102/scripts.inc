Route_102_MapScripts::
# 2 "data/maps/Route_102/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_102OnLoad
# 3 "data/maps/Route_102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpRoute102
	.byte 0


Route_102OnLoad::
# 7 "data/maps/Route_102/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Route_102/scripts.pory"
	call_if_ge Route_102RemovePuddles
	return


Route_102RemovePuddles::
# 12 "data/maps/Route_102/scripts.pory"
	setmetatile 11, 12, METATILE_General_Grass, FALSE
# 13 "data/maps/Route_102/scripts.pory"
	setmetatile 12, 12, METATILE_General_Grass, FALSE
# 14 "data/maps/Route_102/scripts.pory"
	setmetatile 11, 13, METATILE_General_Grass, FALSE
# 15 "data/maps/Route_102/scripts.pory"
	setmetatile 12, 13, METATILE_General_Grass, FALSE
	return


SetUpRoute102::
# 19 "data/maps/Route_102/scripts.pory"
	special SetGroupWeather
# 20 "data/maps/Route_102/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


NotifyOverlevel::
# 24 "data/maps/Route_102/scripts.pory"
	lock
# 25 "data/maps/Route_102/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER, 1
# 26 "data/maps/Route_102/scripts.pory"
	clearflag FLAG_DISOBEY_NOTIF
# 27 "data/maps/Route_102/scripts.pory"
	addobject 4
# 28 "data/maps/Route_102/scripts.pory"
	call SetRivalEncounterMusic
# 29 "data/maps/Route_102/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 30 "data/maps/Route_102/scripts.pory"
	compare VAR_TEMP_0, 4
# 31 "data/maps/Route_102/scripts.pory"
	call_if TRUE, RepositionRivalRoute102
# 32 "data/maps/Route_102/scripts.pory"
	applymovement 4, WalkUpThree
# 33 "data/maps/Route_102/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route_102/scripts.pory"
	msgbox NotifyOverlevel_Text_0, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route_102/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 36 "data/maps/Route_102/scripts.pory"
	applymovement 4, WalkUpFour
# 37 "data/maps/Route_102/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route_102/scripts.pory"
	msgbox NotifyOverlevel_Text_1, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route_102/scripts.pory"
	delay 15
# 49 "data/maps/Route_102/scripts.pory"
	turnobject 4, DIR_SOUTH
# 50 "data/maps/Route_102/scripts.pory"
	delay 75
# 51 "data/maps/Route_102/scripts.pory"
	turnobject 4, DIR_NORTH
# 52 "data/maps/Route_102/scripts.pory"
	delay 15
# 53 "data/maps/Route_102/scripts.pory"
	msgbox NotifyOverlevel_Text_2
# 59 "data/maps/Route_102/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 15
# 60 "data/maps/Route_102/scripts.pory"
	msgbox NotifyOverlevel_Text_3, MSGBOX_AUTOCLOSE
# 72 "data/maps/Route_102/scripts.pory"
	applymovement 4, RivalLeaveAldus
# 73 "data/maps/Route_102/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route_102/scripts.pory"
	setflag FLAG_DISOBEY_NOTIF
# 75 "data/maps/Route_102/scripts.pory"
	removeobject 4
# 76 "data/maps/Route_102/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/Route_102/scripts.pory"
	release
	return


RepositionRivalRoute102::
# 81 "data/maps/Route_102/scripts.pory"
	setobjectxy 4, 4, 11
	return


SetRivalEncounterMusic::
# 85 "data/maps/Route_102/scripts.pory"
	checkplayergender
# 86 "data/maps/Route_102/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SetRivalEncounterMusic_2
# 90 "data/maps/Route_102/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
SetRivalEncounterMusic_1:
	return

SetRivalEncounterMusic_2:
# 87 "data/maps/Route_102/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto SetRivalEncounterMusic_1


AldusForestSign::
# 96 "data/maps/Route_102/scripts.pory"
	lock
# 97 "data/maps/Route_102/scripts.pory"
	msgbox AldusForestSign_Text_0
# 99 "data/maps/Route_102/scripts.pory"
	release
	return


LassEmily::
# 103 "data/maps/Route_102/scripts.pory"
	trainerbattle_single TRAINER_LASS_EMILY, LassEmilyIntro, LassEmilyLose
# 104 "data/maps/Route_102/scripts.pory"
	lock
# 105 "data/maps/Route_102/scripts.pory"
	faceplayer
# 106 "data/maps/Route_102/scripts.pory"
	msgbox LassEmily_Text_0
# 108 "data/maps/Route_102/scripts.pory"
	release
	return


YoungsterCameron::
# 120 "data/maps/Route_102/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_CAMERON, YoungsterCameronIntro, YoungsterCameronLose
# 121 "data/maps/Route_102/scripts.pory"
	lock
# 122 "data/maps/Route_102/scripts.pory"
	faceplayer
# 123 "data/maps/Route_102/scripts.pory"
	msgbox YoungsterCameron_Text_0
# 124 "data/maps/Route_102/scripts.pory"
	release
	return


AceTrainerMichael::
# 136 "data/maps/Route_102/scripts.pory"
	trainerbattle_double TRAINER_ACE_TRAINER_MICHAEL, AceTrainerMichaelIntro, AceTrainerMichaelLose, Dummy
# 137 "data/maps/Route_102/scripts.pory"
	lock
# 138 "data/maps/Route_102/scripts.pory"
	faceplayer
# 139 "data/maps/Route_102/scripts.pory"
	msgbox AceTrainerMichael_Text_0
# 142 "data/maps/Route_102/scripts.pory"
	release
	return


# 146 "data/maps/Route_102/scripts.pory"
WalkUpThree:
# 147 "data/maps/Route_102/scripts.pory"
	walk_up
# 147 "data/maps/Route_102/scripts.pory"
	walk_up
# 147 "data/maps/Route_102/scripts.pory"
	walk_up
	step_end

NotifyOverlevel_Text_0:
# 34 "data/maps/Route_102/scripts.pory"
	.string "Wait, {PLAYER}!$"

NotifyOverlevel_Text_1:
# 38 "data/maps/Route_102/scripts.pory"
	.string "I forgot to tell you something important\n"
	.string "about training your pokémon!\p"
	.string "They can only get so strong with an\n"
	.string "inexperienced trainer\p"
	.string "A trainer that hasn't defeated thier\n"
	.string "first gym can only train a pokémon\l"
	.string "to level 16.\p"
	.string "If you want to raise your pokémon to\n"
	.string "be strong, you'll have to challenge\l"
	.string "Joe at the gym in Ostia.$"

NotifyOverlevel_Text_2:
# 53 "data/maps/Route_102/scripts.pory"
	.string "Looks like you've beaten all those\n"
	.string "trainers, huh.\p"
	.string "You must be ready to head into the\n"
	.string "Valni Forest then.\p"
	.string "Well, you're a step ahead of me!\p"
	.string "Oh, you should take these before you go.$"

NotifyOverlevel_Text_3:
# 60 "data/maps/Route_102/scripts.pory"
	.string "Those will help you make it through\n"
	.string "the forest.\p"
	.string "You can use them to heal your pokémon\n"
	.string "a little bit.\p"
	.string "You can even give one of them to a\n"
	.string "pokémon to hold.\p"
	.string "Then, if it starts to tire out in the\n"
	.string "middle of a battle, it can eat it on\l"
	.string "its own!\p"
	.string "Anyway, that's it from me.\n"
	.string "I'll catch up with you again later.\p"
	.string "See ya!$"

AldusForestSign_Text_0:
# 97 "data/maps/Route_102/scripts.pory"
	.string "Valni Forest\n"
	.string "South Entrance$"

LassEmily_Text_0:
# 106 "data/maps/Route_102/scripts.pory"
	.string "I'm not gonna show you my pokémon\n"
	.string "ever again. You're mean.$"

YoungsterCameron_Text_0:
# 123 "data/maps/Route_102/scripts.pory"
	.string "Wow, you're really tough!$"

AceTrainerMichael_Text_0:
# 139 "data/maps/Route_102/scripts.pory"
	.string "Your battling prowess is something\n"
	.string "to be remembered. I'll have to step\l"
	.string "up my game for a rematch someday.$"

LassEmilyIntro::
# 111 "data/maps/Route_102/scripts.pory"
	.string "Wanna see my cute pokémon?$"

LassEmilyLose::
# 115 "data/maps/Route_102/scripts.pory"
	.string "You're so mean!$"

YoungsterCameronIntro::
# 127 "data/maps/Route_102/scripts.pory"
	.string "I see you! Now you have to battle me!$"

YoungsterCameronLose::
# 131 "data/maps/Route_102/scripts.pory"
	.string "Drat, I thought I could take you.$"

AceTrainerMichaelIntro::
# 150 "data/maps/Route_102/scripts.pory"
	.string "Are you ready to battle a real trainer?\p"
	.string "I promise, I'm no pushover!$"

AceTrainerMichaelLose::
# 155 "data/maps/Route_102/scripts.pory"
	.string "You're really something. I bet you'd\n"
	.string "be able to take on the gym in Ostia.$"

Dummy::
# 160 "data/maps/Route_102/scripts.pory"
	.string "You see this if you only have one\n"
	.string "pokémon. You aren't supposed to see it.\p"
	.string "Please tell Mitch if you do.$"
