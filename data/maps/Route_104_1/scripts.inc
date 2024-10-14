Route_104_1_MapScripts::
# 2 "data/maps/Route_104_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_104OnLoad
# 3 "data/maps/Route_104_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpRoute_104
	.byte 0


Route_104OnLoad::
# 7 "data/maps/Route_104_1/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Route_104_1/scripts.pory"
	call_if_ge Route_104RemovePuddles
	return


Route_104RemovePuddles::
# 12 "data/maps/Route_104_1/scripts.pory"
	setmetatile 13, 17, METATILE_General_Grass, FALSE
# 13 "data/maps/Route_104_1/scripts.pory"
	setmetatile 12, 17, METATILE_General_Grass, FALSE
# 14 "data/maps/Route_104_1/scripts.pory"
	setmetatile 13, 18, METATILE_General_Grass, FALSE
# 15 "data/maps/Route_104_1/scripts.pory"
	setmetatile 12, 18, METATILE_General_Grass, FALSE
# 16 "data/maps/Route_104_1/scripts.pory"
	setmetatile 13, 4, METATILE_General_Grass, FALSE
# 17 "data/maps/Route_104_1/scripts.pory"
	setmetatile 12, 4, METATILE_General_Grass, FALSE
# 18 "data/maps/Route_104_1/scripts.pory"
	setmetatile 13, 5, METATILE_General_Grass, FALSE
# 19 "data/maps/Route_104_1/scripts.pory"
	setmetatile 12, 5, METATILE_General_Grass, FALSE
# 20 "data/maps/Route_104_1/scripts.pory"
	setmetatile 25, 16, METATILE_General_Grass, FALSE
# 21 "data/maps/Route_104_1/scripts.pory"
	setmetatile 26, 16, METATILE_General_Grass, FALSE
# 22 "data/maps/Route_104_1/scripts.pory"
	setmetatile 25, 15, METATILE_General_Grass, FALSE
# 23 "data/maps/Route_104_1/scripts.pory"
	setmetatile 26, 15, METATILE_General_Grass, FALSE
	return


SetUpRoute_104::
# 27 "data/maps/Route_104_1/scripts.pory"
	special SetGroupWeather
# 28 "data/maps/Route_104_1/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


RivalRoute_104Encounter::
# 32 "data/maps/Route_104_1/scripts.pory"
	lock
# 33 "data/maps/Route_104_1/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 34 "data/maps/Route_104_1/scripts.pory"
	applymovement 1, RivalNoticeRoute_104
# 35 "data/maps/Route_104_1/scripts.pory"
	checkplayergender
# 36 "data/maps/Route_104_1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalRoute_104Encounter_2
# 40 "data/maps/Route_104_1/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
RivalRoute_104Encounter_1:
# 42 "data/maps/Route_104_1/scripts.pory"
	delay 40
# 43 "data/maps/Route_104_1/scripts.pory"
	switch VAR_TEMP_1
# 44 "data/maps/Route_104_1/scripts.pory"
	case 15, RivalRoute_104Encounter_7
# 45 "data/maps/Route_104_1/scripts.pory"
	case 17, RivalRoute_104Encounter_8
# 46 "data/maps/Route_104_1/scripts.pory"
	applymovement 1, WalkLeftThree
RivalRoute_104Encounter_5:
# 48 "data/maps/Route_104_1/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route_104_1/scripts.pory"
	msgbox RivalRoute_104Encounter_Text_0
# 59 "data/maps/Route_104_1/scripts.pory"
	checkplayergender
# 60 "data/maps/Route_104_1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalRoute_104Encounter_11
# 68 "data/maps/Route_104_1/scripts.pory"
	switch VAR_STARTER_MON
# 69 "data/maps/Route_104_1/scripts.pory"
	case SPECIES_CHESPIN, RivalRoute_104Encounter_19
# 70 "data/maps/Route_104_1/scripts.pory"
	case SPECIES_MAGBY, RivalRoute_104Encounter_20
# 71 "data/maps/Route_104_1/scripts.pory"
	case SPECIES_SPHEAL, RivalRoute_104Encounter_21
RivalRoute_104Encounter_10:
# 74 "data/maps/Route_104_1/scripts.pory"
	goto RivalBattle2Over
	return

RivalRoute_104Encounter_2:
# 37 "data/maps/Route_104_1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto RivalRoute_104Encounter_1

RivalRoute_104Encounter_7:
# 44 "data/maps/Route_104_1/scripts.pory"
	applymovement 1, Route_104RivalMove15
	goto RivalRoute_104Encounter_5

RivalRoute_104Encounter_8:
# 45 "data/maps/Route_104_1/scripts.pory"
	applymovement 1, Route_104RivalMove17
	goto RivalRoute_104Encounter_5

RivalRoute_104Encounter_11:
# 61 "data/maps/Route_104_1/scripts.pory"
	switch VAR_STARTER_MON
# 62 "data/maps/Route_104_1/scripts.pory"
	case SPECIES_CHESPIN, RivalRoute_104Encounter_15
# 63 "data/maps/Route_104_1/scripts.pory"
	case SPECIES_MAGBY, RivalRoute_104Encounter_16
# 64 "data/maps/Route_104_1/scripts.pory"
	case SPECIES_SPHEAL, RivalRoute_104Encounter_17
	goto RivalRoute_104Encounter_10

RivalRoute_104Encounter_15:
# 62 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_104_CHESPIN, RivalRoute_104Outro
	goto RivalRoute_104Encounter_10

RivalRoute_104Encounter_16:
# 63 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_104_MAGBY, RivalRoute_104Outro
	goto RivalRoute_104Encounter_10

RivalRoute_104Encounter_17:
# 64 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_104_SPHEAL, RivalRoute_104Outro
	goto RivalRoute_104Encounter_10

RivalRoute_104Encounter_19:
# 69 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_104_CHESPIN, RivalRoute_104Outro
	goto RivalRoute_104Encounter_10

RivalRoute_104Encounter_20:
# 70 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_104_MAGBY, RivalRoute_104Outro
	goto RivalRoute_104Encounter_10

RivalRoute_104Encounter_21:
# 71 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_104_SPHEAL, RivalRoute_104Outro
	goto RivalRoute_104Encounter_10


RivalBattle2Over::
# 78 "data/maps/Route_104_1/scripts.pory"
	lock
# 79 "data/maps/Route_104_1/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER, 3
# 80 "data/maps/Route_104_1/scripts.pory"
	msgbox RivalBattle2Over_Text_0
# 84 "data/maps/Route_104_1/scripts.pory"
	giveitem ITEM_HM01
# 85 "data/maps/Route_104_1/scripts.pory"
	setflag FLAG_RECEIVED_HM01
# 86 "data/maps/Route_104_1/scripts.pory"
	msgbox RivalBattle2Over_Text_1, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route_104_1/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq RivalBattle2Over_2
# 101 "data/maps/Route_104_1/scripts.pory"
	applymovement 1, Route_104RivalLeave
RivalBattle2Over_1:
# 103 "data/maps/Route_104_1/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route_104_1/scripts.pory"
	setflag FLAG_RIVAL_BATTLE_2
# 105 "data/maps/Route_104_1/scripts.pory"
	removeobject 1
# 106 "data/maps/Route_104_1/scripts.pory"
	delay 10
# 107 "data/maps/Route_104_1/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/Route_104_1/scripts.pory"
	savebgm MUS_ROUTE104
# 109 "data/maps/Route_104_1/scripts.pory"
	release
	return

RivalBattle2Over_2:
# 98 "data/maps/Route_104_1/scripts.pory"
	applymovement 1, Route_104RivalLeave15
	goto RivalBattle2Over_1


LassSophia::
# 113 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_double TRAINER_LASS_SOPHIA, LassSophiaIntro, LassSophiaLose, Dummy
# 114 "data/maps/Route_104_1/scripts.pory"
	msgbox LassSophia_Text_0, MSGBOX_AUTOCLOSE
	return


YoungsterJohnny::
# 119 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_double TRAINER_YOUNGSTER_JOHNNY, YoungsterJohnnyIntro, YoungsterJohnnyLose, Dummy
# 120 "data/maps/Route_104_1/scripts.pory"
	msgbox YoungsterJohnny_Text_0, MSGBOX_AUTOCLOSE
	return


BugCatcherNoah::
# 125 "data/maps/Route_104_1/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_NOAH, BugCatcherNoahIntro, BugCatcherNoahLose, Dummy
# 126 "data/maps/Route_104_1/scripts.pory"
	msgbox BugCatcherNoah_Text_0, MSGBOX_AUTOCLOSE
	return


# 165 "data/maps/Route_104_1/scripts.pory"
RivalNoticeRoute_104:
# 166 "data/maps/Route_104_1/scripts.pory"
	emote_exclamation_mark
# 167 "data/maps/Route_104_1/scripts.pory"
	face_left
	step_end

# 170 "data/maps/Route_104_1/scripts.pory"
WalkLeftThree:
# 171 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 171 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 171 "data/maps/Route_104_1/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/Route_104_1/scripts.pory"
Route_104RivalMove15:
# 175 "data/maps/Route_104_1/scripts.pory"
	walk_up
# 176 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 176 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 176 "data/maps/Route_104_1/scripts.pory"
	walk_left
	step_end

# 179 "data/maps/Route_104_1/scripts.pory"
Route_104RivalMove17:
# 180 "data/maps/Route_104_1/scripts.pory"
	walk_down
# 181 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 181 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 181 "data/maps/Route_104_1/scripts.pory"
	walk_left
	step_end

# 184 "data/maps/Route_104_1/scripts.pory"
Route_104RivalLeave15:
# 185 "data/maps/Route_104_1/scripts.pory"
	walk_down
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 186 "data/maps/Route_104_1/scripts.pory"
	walk_left
	step_end

# 189 "data/maps/Route_104_1/scripts.pory"
Route_104RivalLeave:
# 190 "data/maps/Route_104_1/scripts.pory"
	walk_up
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
# 191 "data/maps/Route_104_1/scripts.pory"
	walk_left
	step_end

RivalRoute_104Encounter_Text_0:
# 49 "data/maps/Route_104_1/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Have you seen any new pokémon lately?\p"
	.string "I heard you can find Ralts out here,\n"
	.string "but I haven't seen one yet.\p"
	.string "Woah, wait a minute, you have a gym\n"
	.string "badge from Ostia?\p"
	.string "That means you beat Joe, doesn't it.\p"
	.string "You must have gotten pretty tough!\p"
	.string "Let's have a battle, I want you to show\n"
	.string "me just how strong you've become.$"

RivalBattle2Over_Text_0:
# 80 "data/maps/Route_104_1/scripts.pory"
	.string "Wow, I'm going to have to work really\n"
	.string "hard if I wanna beat you, {PLAYER}.\p"
	.string "Since you already have a gym badge,\n"
	.string "you should take this.$"

RivalBattle2Over_Text_1:
# 86 "data/maps/Route_104_1/scripts.pory"
	.string "That Hidden Machine contains Cut!\p"
	.string "With it, you should be able to cut down\n"
	.string "the tree up ahead.\p"
	.string "You don't need to teach the move to\n"
	.string "your pokemon if you don't want to.\p"
	.string "Just having the HM is enough, so long\n"
	.string "as you're traveling with a pokémon\l"
	.string "that can learn the move.\p"
	.string "I should probably be heading back to\n"
	.string "my dad now.\p"
	.string "I'll see you later!$"

LassSophia_Text_0:
# 114 "data/maps/Route_104_1/scripts.pory"
	.string "I guess Ralts is kinda weak.\n"
	.string "It is really cute though!$"

YoungsterJohnny_Text_0:
# 120 "data/maps/Route_104_1/scripts.pory"
	.string "I need to be a better trainer so my\n"
	.string "pokémon can win battles.$"

BugCatcherNoah_Text_0:
# 126 "data/maps/Route_104_1/scripts.pory"
	.string "The only bug pokémon I've been able\n"
	.string "to find out here is Pineco.\p"
	.string "It's a cool pokémon, but I've already\n"
	.string "caught two of them.$"

RivalRoute_104Outro::
# 132 "data/maps/Route_104_1/scripts.pory"
	.string "I see how you got that badge...$"

LassSophiaIntro::
# 136 "data/maps/Route_104_1/scripts.pory"
	.string "I just caught a rare pokémon!\n"
	.string "Wanna see?$"

LassSophiaLose::
# 141 "data/maps/Route_104_1/scripts.pory"
	.string "Awww, I thought it would be strong.$"

YoungsterJohnnyIntro::
# 145 "data/maps/Route_104_1/scripts.pory"
	.string "I see you!\n"
	.string "Now we have to battle!$"

YoungsterJohnnyLose::
# 150 "data/maps/Route_104_1/scripts.pory"
	.string "Ugh, I let my pokémon down.$"

BugCatcherNoahIntro::
# 154 "data/maps/Route_104_1/scripts.pory"
	.string "I don't think that I'll see many bug\n"
	.string "pokémon out here.\p"
	.string "So let's battle!$"

BugCatcherNoahLose::
# 160 "data/maps/Route_104_1/scripts.pory"
	.string "Maybe I should have just gone to look\n"
	.string "somewhere else instead.$"
