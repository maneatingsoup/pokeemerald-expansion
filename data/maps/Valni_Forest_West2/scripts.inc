Valni_Forest_West2_MapScripts::
# 2 "data/maps/Valni_Forest_West2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldusForestWest2OnLoad
# 3 "data/maps/Valni_Forest_West2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpAldusForestWest2
	.byte 0


AldusForestWest2OnLoad::
# 7 "data/maps/Valni_Forest_West2/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Valni_Forest_West2/scripts.pory"
	call_if_ge AldusForestWest2RemovePuddles
	return


AldusForestWest2RemovePuddles::
# 12 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 34, 27, METATILE_General_Grass, FALSE
# 13 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 35, 27, METATILE_General_Grass, FALSE
# 14 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 34, 28, METATILE_General_Grass, FALSE
# 15 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 35, 28, METATILE_General_Grass, FALSE
# 16 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 8, 33, METATILE_General_Grass, FALSE
# 17 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 9, 33, METATILE_General_Grass, FALSE
# 18 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 8, 34, METATILE_General_Grass, FALSE
# 19 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 9, 34, METATILE_General_Grass, FALSE
# 20 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 17, 25, METATILE_General_Grass, FALSE
# 21 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 18, 25, METATILE_General_Grass, FALSE
# 22 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 17, 24, METATILE_General_Grass, FALSE
# 23 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 18, 24, METATILE_General_Grass, FALSE
# 24 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 9, 23, METATILE_General_Grass, FALSE
# 25 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 10, 23, METATILE_General_Grass, FALSE
# 26 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 9, 24, METATILE_General_Grass, FALSE
# 27 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 10, 24, METATILE_General_Grass, FALSE
# 28 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 6, 18, METATILE_General_Grass, FALSE
# 29 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 7, 18, METATILE_General_Grass, FALSE
# 30 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 6, 19, METATILE_General_Grass, FALSE
# 31 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 7, 19, METATILE_General_Grass, FALSE
# 32 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 2, 4, METATILE_General_Grass, FALSE
# 33 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 3, 4, METATILE_General_Grass, FALSE
# 34 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 2, 5, METATILE_General_Grass, FALSE
# 35 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 3, 5, METATILE_General_Grass, FALSE
# 36 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 24, 4, METATILE_General_Grass, FALSE
# 37 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 25, 4, METATILE_General_Grass, FALSE
# 38 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 24, 5, METATILE_General_Grass, FALSE
# 39 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 25, 5, METATILE_General_Grass, FALSE
# 40 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 34, 9, METATILE_General_Grass, FALSE
# 41 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 35, 9, METATILE_General_Grass, FALSE
# 42 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 34, 10, METATILE_General_Grass, FALSE
# 43 "data/maps/Valni_Forest_West2/scripts.pory"
	setmetatile 35, 10, METATILE_General_Grass, FALSE
	return


SetUpAldusForestWest2::
# 47 "data/maps/Valni_Forest_West2/scripts.pory"
	special SetGroupWeather
# 48 "data/maps/Valni_Forest_West2/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 49 "data/maps/Valni_Forest_West2/scripts.pory"
	setflag FLAG_TEMP_A
# 50 "data/maps/Valni_Forest_West2/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq SetUpAldusForestWest2_1
	return

SetUpAldusForestWest2_1:
# 51 "data/maps/Valni_Forest_West2/scripts.pory"
	setflag FLAG_TEMP_B
	return


AldusForestLostMan::
# 56 "data/maps/Valni_Forest_West2/scripts.pory"
	lock
# 57 "data/maps/Valni_Forest_West2/scripts.pory"
	faceplayer
# 58 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox AldusForestLostMan_Text_0
# 65 "data/maps/Valni_Forest_West2/scripts.pory"
	giveitem ITEM_TM06_WORK_UP, 1
# 66 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox AldusForestLostMan_Text_1, MSGBOX_AUTOCLOSE
# 67 "data/maps/Valni_Forest_West2/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 68 "data/maps/Valni_Forest_West2/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
# 69 "data/maps/Valni_Forest_West2/scripts.pory"
	call_if TRUE, LostManSideLeaveScript
# 70 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 4, LostManLeave
# 71 "data/maps/Valni_Forest_West2/scripts.pory"
	waitmovement 0
# 72 "data/maps/Valni_Forest_West2/scripts.pory"
	removeobject 4
# 73 "data/maps/Valni_Forest_West2/scripts.pory"
	setflag FLAG_LOST_MAN
# 74 "data/maps/Valni_Forest_West2/scripts.pory"
	release
	return


LostManSideLeaveScript::
# 78 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 4, LostManSideStep
# 79 "data/maps/Valni_Forest_West2/scripts.pory"
	waitmovement 0
	return


LassMadison::
# 83 "data/maps/Valni_Forest_West2/scripts.pory"
	trainerbattle_single TRAINER_LASS_MADISON, LassMadisonIntro, LassMadisonLose
# 84 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox LassMadison_Text_0, MSGBOX_AUTOCLOSE
	return


FishermanAndrew::
# 88 "data/maps/Valni_Forest_West2/scripts.pory"
	trainerbattle_double TRAINER_FISHERMAN_ANDREW, FishermanAndrewIntro, FishermanAndrewLose, Dummy
# 89 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox FishermanAndrew_Text_0, MSGBOX_AUTOCLOSE
	return


YoungsterEthan::
# 94 "data/maps/Valni_Forest_West2/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_ETHAN, YoungsterEthanIntro, YoungsterEthanLose
# 95 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox YoungsterEthan_Text_0, MSGBOX_AUTOCLOSE
	return


BugCatcherJoseph::
# 100 "data/maps/Valni_Forest_West2/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JOSEPH, BugCatcherJosephIntro, BugCatcherJosephLose
# 101 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox BugCatcherJoseph_Text_0, MSGBOX_AUTOCLOSE
	return


FishermanWilliam::
# 106 "data/maps/Valni_Forest_West2/scripts.pory"
	trainerbattle_double TRAINER_FISHERMAN_WILLIAM, FishermanWilliamIntro, FishermanWilliamLose, Dummy
# 107 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox FishermanWilliam_Text_0, MSGBOX_AUTOCLOSE
	return


HelixFirstEncounter::
# 112 "data/maps/Valni_Forest_West2/scripts.pory"
	lock
# 113 "data/maps/Valni_Forest_West2/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 114 "data/maps/Valni_Forest_West2/scripts.pory"
	playse SE_EXIT
# 115 "data/maps/Valni_Forest_West2/scripts.pory"
	addobject 9
# 116 "data/maps/Valni_Forest_West2/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 117 "data/maps/Valni_Forest_West2/scripts.pory"
	delay 30
# 118 "data/maps/Valni_Forest_West2/scripts.pory"
	turnobject 9, DIR_NORTH
# 119 "data/maps/Valni_Forest_West2/scripts.pory"
	delay 60
# 120 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox HelixFirstEncounter_Text_0, MSGBOX_AUTOCLOSE
# 121 "data/maps/Valni_Forest_West2/scripts.pory"
	turnobject 9, DIR_SOUTH
# 122 "data/maps/Valni_Forest_West2/scripts.pory"
	playse SE_PIN
# 123 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 9, Exclamation
# 124 "data/maps/Valni_Forest_West2/scripts.pory"
	delay 60
# 125 "data/maps/Valni_Forest_West2/scripts.pory"
	compare VAR_TEMP_0, 31
	goto_if_ge HelixFirstEncounter_2
# 129 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 9, WalkDownTwo
HelixFirstEncounter_1:
# 131 "data/maps/Valni_Forest_West2/scripts.pory"
	waitmovement 0
# 132 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceUp
# 133 "data/maps/Valni_Forest_West2/scripts.pory"
	delay 30
# 134 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox HelixFirstEncounter_Text_1, MSGBOX_AUTOCLOSE
# 145 "data/maps/Valni_Forest_West2/scripts.pory"
	trainerbattle_no_intro TRAINER_FIRST_HELIX_GRUNT, FirstHelixEncounterBattleDefeat
# 146 "data/maps/Valni_Forest_West2/scripts.pory"
	goto HelixFirstEncounterDefeated
	return

HelixFirstEncounter_2:
# 126 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 9, WalkRightWalkDownTwo
	goto HelixFirstEncounter_1


HelixFirstEncounterDefeated::
# 150 "data/maps/Valni_Forest_West2/scripts.pory"
	setvar VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 1
# 151 "data/maps/Valni_Forest_West2/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 152 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox HelixFirstEncounterDefeated_Text_0
# 154 "data/maps/Valni_Forest_West2/scripts.pory"
	giveitem ITEM_DEVON_PARTS, 1
# 155 "data/maps/Valni_Forest_West2/scripts.pory"
	msgbox HelixFirstEncounterDefeated_Text_1, MSGBOX_AUTOCLOSE
# 157 "data/maps/Valni_Forest_West2/scripts.pory"
	compare VAR_TEMP_0, 31
	goto_if_ge HelixFirstEncounterDefeated_2
# 161 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 9, FirstHelixEncounterLeaveLeft
HelixFirstEncounterDefeated_1:
# 163 "data/maps/Valni_Forest_West2/scripts.pory"
	waitmovement 0
# 164 "data/maps/Valni_Forest_West2/scripts.pory"
	removeobject 9
# 165 "data/maps/Valni_Forest_West2/scripts.pory"
	fadedefaultbgm
	return

HelixFirstEncounterDefeated_2:
# 158 "data/maps/Valni_Forest_West2/scripts.pory"
	applymovement 9, FirstHelixEncounterLeaveRight
	goto HelixFirstEncounterDefeated_1


# 216 "data/maps/Valni_Forest_West2/scripts.pory"
LostManSideStep:
# 217 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
	step_end

# 220 "data/maps/Valni_Forest_West2/scripts.pory"
LostManLeave:
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 221 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
	step_end

# 224 "data/maps/Valni_Forest_West2/scripts.pory"
WalkRightWalkDownTwo:
# 225 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 226 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 226 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/Valni_Forest_West2/scripts.pory"
WalkDownTwo:
# 230 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 230 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
	step_end

# 233 "data/maps/Valni_Forest_West2/scripts.pory"
FirstHelixEncounterLeaveLeft:
# 234 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 235 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 235 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 235 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 236 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 236 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 237 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 237 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 237 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 237 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 237 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
	step_end

# 240 "data/maps/Valni_Forest_West2/scripts.pory"
FirstHelixEncounterLeaveRight:
# 241 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_left
# 242 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 242 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 242 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 243 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 243 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 243 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_right
# 244 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 244 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 244 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 244 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
# 244 "data/maps/Valni_Forest_West2/scripts.pory"
	walk_down
	step_end

AldusForestLostMan_Text_0:
# 58 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "I'm lost in these thick woods and\n"
	.string "I've gotten myself all worked up.\p"
	.string "Do you know which way leads out of\n"
	.string "here?\p"
	.string "...\p"
	.string "Thanks! Why don't you take this as\n"
	.string "a token of my appreciation.$"

AldusForestLostMan_Text_1:
# 66 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Time to head back home.$"

LassMadison_Text_0:
# 84 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Maybe you don't need directions...\n$"

FishermanAndrew_Text_0:
# 89 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Oh well, not like I was getting\n"
	.string "anywhere anyway...$"

YoungsterEthan_Text_0:
# 95 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "I wanna go swimming in the pond,\n"
	.string "but it looks kinda gross.$"

BugCatcherJoseph_Text_0:
# 101 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "I'll just have to wait until they\n"
	.string "evolve again.$"

FishermanWilliam_Text_0:
# 107 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "I shouldn't get so distracted\n"
	.string "while I'm fishing.$"

HelixFirstEncounter_Text_0:
# 120 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Heh, I think I lost them.$"

HelixFirstEncounter_Text_1:
# 134 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "You're a pokémon trainer?\p"
	.string "Oh, I get it.\p"
	.string "You must be here to take the parts and\n"
	.string "the blueprints I stole.\p"
	.string "I'm not giving you a thing!\p"
	.string "The boss will make my life real hard if\n"
	.string "I show up empty handed.\p"
	.string "...\p"
	.string "Look at that, I just let it slip.\p"
	.string "Time for plan B.\n"
	.string "I'll knock you out and run!$"

HelixFirstEncounterDefeated_Text_0:
# 152 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Fine.\p"
	.string "Take these, I'm still keeping the parts.$"

HelixFirstEncounterDefeated_Text_1:
# 155 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Now, I'm gonna scram.\p"
	.string "Don't follow me!$"

LassMadisonIntro::
# 168 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "You know, the exit is the otherway.$"

LassMadisonLose::
# 172 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Aww, I thought for sure I'd win.$"

FishermanAndrewIntro::
# 176 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Hey, don't bother a man while he's\n"
	.string "got his rod in his hands!$"

FishermanAndrewLose::
# 181 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Great, now I'm not in the mood.$"

YoungsterEthanIntro::
# 185 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "If I can't go swimming, you're\n"
	.string "gonna have to battle me!$"

YoungsterEthanLose::
# 190 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Maybe I should have gone swimming\n"
	.string "instead.$"

BugCatcherJosephIntro::
# 195 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "My wurmples evolved! Take a look!$"

BugCatcherJosephLose::
# 199 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "I think they were stronger before.$"

FishermanWilliamIntro::
# 203 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Nothing much seems to be biting,\n"
	.string "so I have time for a battle.$"

FishermanWilliamLose::
# 208 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "I think I missed a bite...$"

FirstHelixEncounterBattleDefeat::
# 212 "data/maps/Valni_Forest_West2/scripts.pory"
	.string "Grrr, things were going so well.$"
