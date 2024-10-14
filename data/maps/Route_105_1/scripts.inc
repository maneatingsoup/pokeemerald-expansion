Route_105_1_MapScripts::
# 2 "data/maps/Route_105_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_105OnLoad
# 3 "data/maps/Route_105_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpRoute105
	.byte 0


Route_105OnLoad::
# 7 "data/maps/Route_105_1/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Route_105_1/scripts.pory"
	call_if_ge Route_105RemovePuddles
	return


SetUpRoute105::
# 12 "data/maps/Route_105_1/scripts.pory"
	special SetGroupWeather
# 13 "data/maps/Route_105_1/scripts.pory"
	compare VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 4
	goto_if_ge SetUpRoute105_1
# 16 "data/maps/Route_105_1/scripts.pory"
	compare VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 3
	goto_if_eq SetUpRoute105_2
	return

SetUpRoute105_1:
# 14 "data/maps/Route_105_1/scripts.pory"
	setflag FLAG_TEMP_A
	return

SetUpRoute105_2:
# 17 "data/maps/Route_105_1/scripts.pory"
	setobjectxyperm 19, 67, 19
# 18 "data/maps/Route_105_1/scripts.pory"
	setobjectxyperm 20, 67, 18
	return


Route_105RemovePuddles::
# 23 "data/maps/Route_105_1/scripts.pory"
	setmetatile 11, 20, METATILE_General_Grass, FALSE
# 24 "data/maps/Route_105_1/scripts.pory"
	setmetatile 12, 20, METATILE_General_Grass, FALSE
# 25 "data/maps/Route_105_1/scripts.pory"
	setmetatile 11, 21, METATILE_General_Grass, FALSE
# 26 "data/maps/Route_105_1/scripts.pory"
	setmetatile 12, 21, METATILE_General_Grass, FALSE
# 27 "data/maps/Route_105_1/scripts.pory"
	setmetatile 14, 30, METATILE_General_Grass, FALSE
# 28 "data/maps/Route_105_1/scripts.pory"
	setmetatile 15, 30, METATILE_General_Grass, FALSE
# 29 "data/maps/Route_105_1/scripts.pory"
	setmetatile 14, 29, METATILE_General_Grass, FALSE
# 30 "data/maps/Route_105_1/scripts.pory"
	setmetatile 15, 29, METATILE_General_Grass, FALSE
# 31 "data/maps/Route_105_1/scripts.pory"
	setmetatile 17, 13, METATILE_General_Grass, FALSE
# 32 "data/maps/Route_105_1/scripts.pory"
	setmetatile 18, 13, METATILE_General_Grass, FALSE
# 33 "data/maps/Route_105_1/scripts.pory"
	setmetatile 17, 14, METATILE_General_Grass, FALSE
# 34 "data/maps/Route_105_1/scripts.pory"
	setmetatile 18, 14, METATILE_General_Grass, FALSE
# 35 "data/maps/Route_105_1/scripts.pory"
	setmetatile 18, 21, METATILE_General_Grass, FALSE
# 36 "data/maps/Route_105_1/scripts.pory"
	setmetatile 19, 21, METATILE_General_Grass, FALSE
# 37 "data/maps/Route_105_1/scripts.pory"
	setmetatile 20, 21, METATILE_General_Grass, FALSE
# 38 "data/maps/Route_105_1/scripts.pory"
	setmetatile 21, 21, METATILE_General_Grass, FALSE
# 39 "data/maps/Route_105_1/scripts.pory"
	setmetatile 18, 22, METATILE_General_Grass, FALSE
# 40 "data/maps/Route_105_1/scripts.pory"
	setmetatile 19, 22, METATILE_General_Grass, FALSE
# 41 "data/maps/Route_105_1/scripts.pory"
	setmetatile 20, 22, METATILE_General_Grass, FALSE
# 42 "data/maps/Route_105_1/scripts.pory"
	setmetatile 21, 22, METATILE_General_Grass, FALSE
# 43 "data/maps/Route_105_1/scripts.pory"
	setmetatile 10, 42, METATILE_General_Grass, FALSE
# 44 "data/maps/Route_105_1/scripts.pory"
	setmetatile 11, 42, METATILE_General_Grass, FALSE
# 45 "data/maps/Route_105_1/scripts.pory"
	setmetatile 10, 43, METATILE_General_Grass, FALSE
# 46 "data/maps/Route_105_1/scripts.pory"
	setmetatile 11, 43, METATILE_General_Grass, FALSE
# 47 "data/maps/Route_105_1/scripts.pory"
	setmetatile 17, 37, METATILE_General_Grass, FALSE
# 48 "data/maps/Route_105_1/scripts.pory"
	setmetatile 18, 37, METATILE_General_Grass, FALSE
# 49 "data/maps/Route_105_1/scripts.pory"
	setmetatile 17, 38, METATILE_General_Grass, FALSE
# 50 "data/maps/Route_105_1/scripts.pory"
	setmetatile 18, 38, METATILE_General_Grass, FALSE
# 51 "data/maps/Route_105_1/scripts.pory"
	setmetatile 46, 35, METATILE_General_Grass, FALSE
# 52 "data/maps/Route_105_1/scripts.pory"
	setmetatile 47, 35, METATILE_General_Grass, FALSE
# 53 "data/maps/Route_105_1/scripts.pory"
	setmetatile 46, 36, METATILE_General_Grass, FALSE
# 54 "data/maps/Route_105_1/scripts.pory"
	setmetatile 47, 36, METATILE_General_Grass, FALSE
# 55 "data/maps/Route_105_1/scripts.pory"
	setmetatile 64, 37, METATILE_General_Grass, FALSE
# 56 "data/maps/Route_105_1/scripts.pory"
	setmetatile 65, 37, METATILE_General_Grass, FALSE
# 57 "data/maps/Route_105_1/scripts.pory"
	setmetatile 64, 38, METATILE_General_Grass, FALSE
# 58 "data/maps/Route_105_1/scripts.pory"
	setmetatile 65, 38, METATILE_General_Grass, FALSE
	return


RunnerJack::
# 62 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_RUNNER_JACK, RunnerJackIntro, RunnerJackLose
# 63 "data/maps/Route_105_1/scripts.pory"
	msgbox RunnerJack_Text_0, MSGBOX_AUTOCLOSE
	return


RunnerKaitlyn::
# 69 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_RUNNER_KAITLYN, RunnerKaitlynIntro, RunnerKaitlynLose
# 70 "data/maps/Route_105_1/scripts.pory"
	msgbox RunnerKaitlyn_Text_0, MSGBOX_AUTOCLOSE
	return


PsychicJoshua::
# 74 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOSHUA, PsychicJoshuaIntro, PsychicJoshuaLose
# 75 "data/maps/Route_105_1/scripts.pory"
	msgbox PsychicJoshua_Text_0, MSGBOX_AUTOCLOSE
	return


BlackBeltLogan::
# 80 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_LOGAN, BlackBeltLoganIntro, BlackBeltLoganLose
# 81 "data/maps/Route_105_1/scripts.pory"
	msgbox BlackBeltLogan_Text_0, MSGBOX_AUTOCLOSE
	return


BattleGirlHailey::
# 85 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_BATTLE_GIRL_HAILEY, BattleGirlHaileyIntro, BattleGirlHaileyLose
# 86 "data/maps/Route_105_1/scripts.pory"
	msgbox BattleGirlHailey_Text_0, MSGBOX_AUTOCLOSE
	return


PicnickerHannah::
# 91 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_PICNICKER_HANNAH, PicnickerHannahIntro, PicnickerHannahLose, Dummy
# 92 "data/maps/Route_105_1/scripts.pory"
	msgbox PicnickerHannah_Text_0, MSGBOX_AUTOCLOSE
	return


OldCoupleSven::
# 98 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_OLD_COUPLE_SVEN_AND_EVA, OldCoupleSvenAndEvaIntro, OldCoupleSvenAndEvaLose, Dummy
# 99 "data/maps/Route_105_1/scripts.pory"
	msgbox OldCoupleSven_Text_0, MSGBOX_AUTOCLOSE
	return


OldCoupleEva::
# 108 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_OLD_COUPLE_SVEN_AND_EVA, OldCoupleSvenAndEvaIntro, OldCoupleSvenAndEvaLose, Dummy
# 109 "data/maps/Route_105_1/scripts.pory"
	msgbox OldCoupleEva_Text_0, MSGBOX_AUTOCLOSE
	return


BattleCamperConnor::
# 115 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_CONNOR, CamperConnorIntro, CamperConnorLose
# 116 "data/maps/Route_105_1/scripts.pory"
	msgbox BattleCamperConnor_Text_0, MSGBOX_AUTOCLOSE
	return


AromaLadyMadeline::
# 143 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_MADELINE, AromaLadyMadelineIntro, AromaLadyMadelineLose
# 144 "data/maps/Route_105_1/scripts.pory"
	msgbox AromaLadyMadeline_Text_0, MSGBOX_AUTOCLOSE
	return


BirdKeeperJackson::
# 151 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_JACKSON, BirdKeeperJacksonIntro, BirdKeeperJacksonLose
# 152 "data/maps/Route_105_1/scripts.pory"
	msgbox BirdKeeperJackson_Text_0, MSGBOX_AUTOCLOSE
	return


HikerCaleb::
# 160 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_HIKER_CALEB, HikerCalebIntro, HikerCalebLose, Dummy
# 161 "data/maps/Route_105_1/scripts.pory"
	msgbox HikerCaleb_Text_0, MSGBOX_AUTOCLOSE
	return


RunnerJayden::
# 166 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_RUNNER_JAYDEN, RunnerJaydenIntro, RunnerJaydenLose, Dummy
# 167 "data/maps/Route_105_1/scripts.pory"
	msgbox RunnerJayden_Text_0, MSGBOX_AUTOCLOSE
	return


BirdKeeperBrayden::
# 173 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_BRAYDEN, BirdKeeperBraydenIntro, BirdKeeperBraydenLose
# 174 "data/maps/Route_105_1/scripts.pory"
	msgbox BirdKeeperBrayden_Text_0, MSGBOX_AUTOCLOSE
	return


CamperBenjamin::
# 183 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_BENJAMIN, CamperBenjaminIntro, CamperBenjaminLose
# 184 "data/maps/Route_105_1/scripts.pory"
	msgbox CamperBenjamin_Text_0, MSGBOX_AUTOCLOSE
	return


AceTrainerGavin::
# 193 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_ACE_TRAINER_GAVIN, AceTrainerGavinIntro, AceTrainerGavinLose, Dummy
# 194 "data/maps/Route_105_1/scripts.pory"
	msgbox AceTrainerGavin_Text_0, MSGBOX_AUTOCLOSE
	return


FishermanEvan::
# 199 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_EVAN, FishermanEvanIntro, FishermanEvanLose
# 200 "data/maps/Route_105_1/scripts.pory"
	msgbox FishermanEvan_Text_0, MSGBOX_AUTOCLOSE
	return


FishermanLuke::
# 205 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_double TRAINER_FISHERMAN_LUKE, FishermanLukeIntro, FishermanLukeLose, Dummy
# 206 "data/maps/Route_105_1/scripts.pory"
	msgbox FishermanLuke_Text_0, MSGBOX_AUTOCLOSE
	return


Route105TeamHelixEncounter::
# 212 "data/maps/Route_105_1/scripts.pory"
	lock
# 213 "data/maps/Route_105_1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 214 "data/maps/Route_105_1/scripts.pory"
	setvar VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 3
# 215 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105TeamHelixEncounter_Text_0
# 217 "data/maps/Route_105_1/scripts.pory"
	applymovement 20, WalkLeft
# 218 "data/maps/Route_105_1/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105TeamHelixEncounter_Text_1
# 221 "data/maps/Route_105_1/scripts.pory"
	applymovement 19, WalkLeft
# 222 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105TeamHelixEncounter_Text_2, MSGBOX_AUTOCLOSE
# 226 "data/maps/Route_105_1/scripts.pory"
	turnobject 21, DIR_SOUTH
# 227 "data/maps/Route_105_1/scripts.pory"
	delay 45
# 228 "data/maps/Route_105_1/scripts.pory"
	turnobject 21, DIR_EAST
# 229 "data/maps/Route_105_1/scripts.pory"
	delay 30
# 230 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105TeamHelixEncounter_Text_3, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route_105_1/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 233 "data/maps/Route_105_1/scripts.pory"
	compare VAR_TEMP_1, 18
	goto_if_le Route105TeamHelixEncounter_2
# 237 "data/maps/Route_105_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachScientistSouth
Route105TeamHelixEncounter_1:
# 239 "data/maps/Route_105_1/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route_105_1/scripts.pory"
	turnobject 21, DIR_SOUTH
# 241 "data/maps/Route_105_1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 242 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105TeamHelixEncounter_Text_4
# 250 "data/maps/Route_105_1/scripts.pory"
	applymovement 20, WalkInPlaceLeft
# 251 "data/maps/Route_105_1/scripts.pory"
	turnobject 21, DIR_EAST
# 252 "data/maps/Route_105_1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 253 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105TeamHelixEncounter_Text_5
# 256 "data/maps/Route_105_1/scripts.pory"
	applymovement 19, WalkInPlaceLeft
# 257 "data/maps/Route_105_1/scripts.pory"
	setflag FLAG_TEMP_9
# 258 "data/maps/Route_105_1/scripts.pory"
	goto Route105GruntBattles
	return

Route105TeamHelixEncounter_2:
# 234 "data/maps/Route_105_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerApproachScientistNorth
	goto Route105TeamHelixEncounter_1


Route105GruntBattles::
# 262 "data/maps/Route_105_1/scripts.pory"
	goto_if_unset FLAG_TEMP_9, Route105GruntBattles_2
Route105GruntBattles_1:
# 265 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_0, MSGBOX_YESNO
# 267 "data/maps/Route_105_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route105GruntBattles_5
# 316 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_8, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route_105_1/scripts.pory"
	fadedefaultbgm
# 319 "data/maps/Route_105_1/scripts.pory"
	clearflag FLAG_TEMP_9
Route105GruntBattles_4:
# 321 "data/maps/Route_105_1/scripts.pory"
	release
	return

Route105GruntBattles_2:
# 263 "data/maps/Route_105_1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	goto Route105GruntBattles_1

Route105GruntBattles_5:
# 268 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_1, MSGBOX_AUTOCLOSE
# 270 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_HELIX_ROUTE105_A, HelixRoute105ALose
# 271 "data/maps/Route_105_1/scripts.pory"
	applymovement 19, Route105GruntADefeated
# 272 "data/maps/Route_105_1/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/Route_105_1/scripts.pory"
	applymovement 20, Route105GruntBChallenge
# 275 "data/maps/Route_105_1/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_3
# 278 "data/maps/Route_105_1/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_HELIX_ROUTE105_B, HelisRoute105BLose
# 279 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_4
# 282 "data/maps/Route_105_1/scripts.pory"
	turnobject 20, DIR_EAST
# 283 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_5, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route_105_1/scripts.pory"
	applymovement 19, Route105GruntALeave
# 285 "data/maps/Route_105_1/scripts.pory"
	applymovement 20, Route105GruntBLeave
# 286 "data/maps/Route_105_1/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route_105_1/scripts.pory"
	removeobject 19
# 288 "data/maps/Route_105_1/scripts.pory"
	removeobject 20
# 289 "data/maps/Route_105_1/scripts.pory"
	fadedefaultbgm
# 290 "data/maps/Route_105_1/scripts.pory"
	turnobject 21, DIR_SOUTH
# 291 "data/maps/Route_105_1/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 292 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_6
# 302 "data/maps/Route_105_1/scripts.pory"
	giveitem ITEM_HM05, 1
# 303 "data/maps/Route_105_1/scripts.pory"
	setflag FLAG_RECEIVED_HM05
# 304 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105GruntBattles_Text_7, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route_105_1/scripts.pory"
	setvar VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 4
# 312 "data/maps/Route_105_1/scripts.pory"
	applymovement 21, LeaveLeft
# 313 "data/maps/Route_105_1/scripts.pory"
	waitmovement 0
	goto Route105GruntBattles_4


Route105Scientist::
# 325 "data/maps/Route_105_1/scripts.pory"
	lock
# 326 "data/maps/Route_105_1/scripts.pory"
	faceplayer
# 327 "data/maps/Route_105_1/scripts.pory"
	msgbox Route105Scientist_Text_0
# 328 "data/maps/Route_105_1/scripts.pory"
	turnobject 21, DIR_EAST
# 329 "data/maps/Route_105_1/scripts.pory"
	release
	return


MoveRoute105Grunts::
# 333 "data/maps/Route_105_1/scripts.pory"
	compare VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 3
	goto_if_eq MoveRoute105Grunts_1
	return

MoveRoute105Grunts_1:
# 334 "data/maps/Route_105_1/scripts.pory"
	setobjectxyperm 19, 67, 19
# 335 "data/maps/Route_105_1/scripts.pory"
	setobjectxyperm 20, 67, 18
	return


# 339 "data/maps/Route_105_1/scripts.pory"
PlayerApproachScientistNorth:
# 340 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 341 "data/maps/Route_105_1/scripts.pory"
	walk_right
# 341 "data/maps/Route_105_1/scripts.pory"
	walk_right
	step_end

# 344 "data/maps/Route_105_1/scripts.pory"
PlayerApproachScientistSouth:
# 345 "data/maps/Route_105_1/scripts.pory"
	walk_right
# 345 "data/maps/Route_105_1/scripts.pory"
	walk_right
	step_end

# 348 "data/maps/Route_105_1/scripts.pory"
WalkInPlaceLeft:
# 349 "data/maps/Route_105_1/scripts.pory"
	walk_in_place_left
	step_end

# 352 "data/maps/Route_105_1/scripts.pory"
Route105GruntADefeated:
# 353 "data/maps/Route_105_1/scripts.pory"
	lock_facing_direction
# 354 "data/maps/Route_105_1/scripts.pory"
	walk_right
# 355 "data/maps/Route_105_1/scripts.pory"
	unlock_facing_direction
	step_end

# 358 "data/maps/Route_105_1/scripts.pory"
Route105GruntBChallenge:
# 359 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 360 "data/maps/Route_105_1/scripts.pory"
	face_left
	step_end

# 363 "data/maps/Route_105_1/scripts.pory"
Route105GruntALeave:
# 364 "data/maps/Route_105_1/scripts.pory"
	walk_right
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 365 "data/maps/Route_105_1/scripts.pory"
	walk_down
	step_end

# 367 "data/maps/Route_105_1/scripts.pory"
Route105GruntBLeave:
# 368 "data/maps/Route_105_1/scripts.pory"
	walk_right
# 368 "data/maps/Route_105_1/scripts.pory"
	walk_right
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
# 369 "data/maps/Route_105_1/scripts.pory"
	walk_down
	step_end

# 372 "data/maps/Route_105_1/scripts.pory"
LeaveLeft:
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
# 373 "data/maps/Route_105_1/scripts.pory"
	walk_left
	step_end

RunnerJack_Text_0:
# 63 "data/maps/Route_105_1/scripts.pory"
	.string "I think I started to work on battling\n"
	.string "as often as I work on my legs, I'd\l"
	.string "have been able to beat you.$"

RunnerKaitlyn_Text_0:
# 70 "data/maps/Route_105_1/scripts.pory"
	.string "It's never a bad day to go for a run!$"

PsychicJoshua_Text_0:
# 75 "data/maps/Route_105_1/scripts.pory"
	.string "Psionic powers are rare in people,\n"
	.string "but there are many psychic pokémon.$"

BlackBeltLogan_Text_0:
# 81 "data/maps/Route_105_1/scripts.pory"
	.string "Next time, I win.$"

BattleGirlHailey_Text_0:
# 86 "data/maps/Route_105_1/scripts.pory"
	.string "My pokémon and I spar every morning\n"
	.string "to keep ourselves in good shape.$"

PicnickerHannah_Text_0:
# 92 "data/maps/Route_105_1/scripts.pory"
	.string "I like to hang out in the clearing\n"
	.string "here.\p"
	.string "It's like my own secret hideout!$"

OldCoupleSven_Text_0:
# 99 "data/maps/Route_105_1/scripts.pory"
	.string "Thank you for indulging this old\n"
	.string "man.\p"
	.string "It's been a long time since I've\n"
	.string "enjoyed a battle as much as that.\p"
	.string "You remind me of myself a bit when\n"
	.string "I was a young pokémon trainer.$"

OldCoupleEva_Text_0:
# 109 "data/maps/Route_105_1/scripts.pory"
	.string "My husband really enjoyed our battle.\p"
	.string "He was quite the trainer way back\n"
	.string "when he was young.$"

BattleCamperConnor_Text_0:
# 116 "data/maps/Route_105_1/scripts.pory"
	.string "The FitnessGram Pacer Test is a\n"
	.string "multistage aerobic capacity test \l"
	.string "that progressively gets more\l"
	.string "difficult as it continues.\p"
	.string "The 20 meter pacer test will begin\n"
	.string "in 30 seconds.\p"
	.string "Line up at the start.\p"
	.string "The running speed starts slowly but\n"
	.string "gets faster each minute after you\l"
	.string "hear this signal.\p"
	.string "BEEP!.\p"
	.string "A single lap should be completed\n"
	.string "every time you hear this sound\p"
	.string "DING!.\p"
	.string "Remember to run in a straight line\n"
	.string "and run as long as possible.\p"
	.string "The second time you fail to complete\n"
	.string "a lap before the sound, your test is\l"
	.string "over.\p"
	.string "The test will begin on the word\n"
	.string "start.\p"
	.string "On your mark.\p"
	.string "Get ready…\p"
	.string "Start!$"

AromaLadyMadeline_Text_0:
# 144 "data/maps/Route_105_1/scripts.pory"
	.string "It rains all the time here in the\n"
	.string "Southern part of the region.\p"
	.string "Because of that, you'll find plants\n"
	.string "that can't grow anywhere else.$"

BirdKeeperJackson_Text_0:
# 152 "data/maps/Route_105_1/scripts.pory"
	.string "We use flying-type pokémon to help\n"
	.string "transport supplies from Port Neleras\l"
	.string "all across the region.\p"
	.string "Without them, we wouldn't be able to\n"
	.string "stock shelves in the general stores.$"

HikerCaleb_Text_0:
# 161 "data/maps/Route_105_1/scripts.pory"
	.string "Golly, Hiking is my favorite of\n"
	.string "all activities!$"

RunnerJayden_Text_0:
# 167 "data/maps/Route_105_1/scripts.pory"
	.string "Running on the bridge or down by\n"
	.string "the river is a great way to keep\l"
	.string "cool.$"

BirdKeeperBrayden_Text_0:
# 174 "data/maps/Route_105_1/scripts.pory"
	.string "I work over in Port Neleras, but\n"
	.string "I like to go to Valni on my days\l"
	.string "off.\p"
	.string "The air is just so clean and I\n"
	.string "feel close to nature when I'm\l"
	.string "there.$"

CamperBenjamin_Text_0:
# 184 "data/maps/Route_105_1/scripts.pory"
	.string "I wonder why some pokémon are\n"
	.string "different colors than normal.\p"
	.string "The other kids at school say\n"
	.string "it's because they're shiny.\p"
	.string "But my Teddiursa is green, not\n"
	.string "shiny.$"

AceTrainerGavin_Text_0:
# 194 "data/maps/Route_105_1/scripts.pory"
	.string "You're certainly a tough trainer.\p"
	.string "I bet you're gonna go far.$"

FishermanEvan_Text_0:
# 200 "data/maps/Route_105_1/scripts.pory"
	.string "I like gummy worms. I bet fish like\n"
	.string "them too.$"

FishermanLuke_Text_0:
# 206 "data/maps/Route_105_1/scripts.pory"
	.string "I prefer fishing to battling.\p"
	.string "But, not just because I'm better\n"
	.string "at it!$"

Route105TeamHelixEncounter_Text_0:
# 215 "data/maps/Route_105_1/scripts.pory"
	.string "Scientist: I told you already, I won't\n"
	.string "help you Team Helix crooks.$"

Route105TeamHelixEncounter_Text_1:
# 219 "data/maps/Route_105_1/scripts.pory"
	.string "Male Grunt: Oh yeah? I don't remember\n"
	.string "asking for your opinion on it.$"

Route105TeamHelixEncounter_Text_2:
# 222 "data/maps/Route_105_1/scripts.pory"
	.string "Femal Grunt: Yeah, we're not asking.\n"
	.string "You're coming with us.\p"
	.string "We can do this the easy way, or the hard\n"
	.string "way.$"

Route105TeamHelixEncounter_Text_3:
# 230 "data/maps/Route_105_1/scripts.pory"
	.string "Scientist: Urk...I told you no.\n"
	.string "I won't!$"

Route105TeamHelixEncounter_Text_4:
# 242 "data/maps/Route_105_1/scripts.pory"
	.string "Scientist: You're a pokémon trainer!\n"
	.string "Please, you've gotta help me.\p"
	.string "These Team Helix goons want to kidnap\n"
	.string "me and force me to work on their crazy\l"
	.string "pokémon gene editing scheme.\p"
	.string "And their employment benefits are\n"
	.string "horrendous!\p"
	.string "Please, you've gotta help me out.$"

Route105TeamHelixEncounter_Text_5:
# 253 "data/maps/Route_105_1/scripts.pory"
	.string "Male Grunt: Hey kid, you stay out of\n"
	.string "This!\p"
	.string "Let the adults talk.$"

Route105GruntBattles_Text_0:
# 265 "data/maps/Route_105_1/scripts.pory"
	.string "Female Grunt: Yeah, you don't want\n"
	.string "any trouble with us, do you?$"

Route105GruntBattles_Text_1:
# 268 "data/maps/Route_105_1/scripts.pory"
	.string "Female Grunt: Looks like we found\n"
	.string "ourselves a feisty one!$"

Route105GruntBattles_Text_2:
# 273 "data/maps/Route_105_1/scripts.pory"
	.string "Female Grunt: Ugh, you little twerp!$"

Route105GruntBattles_Text_3:
# 276 "data/maps/Route_105_1/scripts.pory"
	.string "Male Grunt: I'm gonna make you regret\n"
	.string "crossing Team Helix!$"

Route105GruntBattles_Text_4:
# 279 "data/maps/Route_105_1/scripts.pory"
	.string "Male Grunt: Hmph, fine.\n"
	.string "You win this round.\p"
	.string "But we'll be back!$"

Route105GruntBattles_Text_5:
# 283 "data/maps/Route_105_1/scripts.pory"
	.string "Let's ge outta here.\n$"

Route105GruntBattles_Text_6:
# 292 "data/maps/Route_105_1/scripts.pory"
	.string "Thank you very much!\n"
	.string "You really saved me there.\p"
	.string "These Team Helix folks, they really\n"
	.string "seem like they're up to no good.\p"
	.string "They want to create the ultimate\n"
	.string "pokémon by manipulating pokémon\l"
	.string "DNA.\p"
	.string "What a reckless plan...\p"
	.string "Oh, but I really owe you big time!\n"
	.string "So take this.$"

Route105GruntBattles_Text_7:
# 304 "data/maps/Route_105_1/scripts.pory"
	.string "With that Hidden Machine, you can\n"
	.string "produce your own light on your way\l"
	.string "through the Rugged Pass.\p"
	.string "I'm sure you'll find other places\n"
	.string "where it's useful too.\p"
	.string "Now then, I best be off.\n"
	.string "Thanks again, and safe travels!$"

Route105GruntBattles_Text_8:
# 316 "data/maps/Route_105_1/scripts.pory"
	.string "Smart choice.\n"
	.string "Now scram!$"

Route105Scientist_Text_0:
# 327 "data/maps/Route_105_1/scripts.pory"
	.string "Please, you've gotta help me!$"

HelixRoute105ALose::
# 376 "data/maps/Route_105_1/scripts.pory"
	.string "You're tougher than you look...$"

HelisRoute105BLose::
# 380 "data/maps/Route_105_1/scripts.pory"
	.string "But you're just a kid!$"

RunnerJackIntro::
# 384 "data/maps/Route_105_1/scripts.pory"
	.string "Hey, I could use a break from my run.\n"
	.string "Let's have a battle!$"

RunnerJackLose::
# 389 "data/maps/Route_105_1/scripts.pory"
	.string "I'd have been better off without the\n"
	.string "break.$"

RunnerKaitlynIntro::
# 394 "data/maps/Route_105_1/scripts.pory"
	.string "My pokémon like to run just as much as\n"
	.string "I do!$"

RunnerKaitlynLose::
# 399 "data/maps/Route_105_1/scripts.pory"
	.string "Maybe I should do more training than\n"
	.string "running if I want to keep battling.$"

PsychicJoshuaIntro::
# 404 "data/maps/Route_105_1/scripts.pory"
	.string "Behold, the psionic power of my psychic\n"
	.string "pokémon!$"

PsychicJoshuaLose::
# 409 "data/maps/Route_105_1/scripts.pory"
	.string "How could we lose?!$"

BlackBeltLoganIntro::
# 413 "data/maps/Route_105_1/scripts.pory"
	.string "We will battle.\p"
	.string "Now!$"

BlackBeltLoganLose::
# 418 "data/maps/Route_105_1/scripts.pory"
	.string "I lose.$"

BattleGirlHaileyIntro::
# 422 "data/maps/Route_105_1/scripts.pory"
	.string "I spar with my pokémon every monring.\p"
	.string "You won't defeat us easily!$"

BattleGirlHaileyLose::
# 427 "data/maps/Route_105_1/scripts.pory"
	.string "So, you train with your pokémon often\n"
	.string "too.$"

PicnickerHannahIntro::
# 432 "data/maps/Route_105_1/scripts.pory"
	.string "Do you like the secret hideaway I\n"
	.string "made in the trees here?$"

PicnickerHannahLose::
# 437 "data/maps/Route_105_1/scripts.pory"
	.string "Okay, I didn't make the hideaway.\n"
	.string "I found it.$"

OldCoupleSvenAndEvaIntro::
# 442 "data/maps/Route_105_1/scripts.pory"
	.string "Oh, a youngster!\p"
	.string "Let's see if you have what it takes\n"
	.string "to beat an old man and his wife.$"

OldCoupleSvenAndEvaLose::
# 448 "data/maps/Route_105_1/scripts.pory"
	.string "I see.\p"
	.string "You are more experienced than you\n"
	.string "look.$"

CamperConnorIntro::
# 454 "data/maps/Route_105_1/scripts.pory"
	.string "My gym teacher made us do the pacer\n"
	.string "test today.$"

CamperConnorLose::
# 459 "data/maps/Route_105_1/scripts.pory"
	.string "I hate running.\n"
	.string "But I hate losing more!$"

AromaLadyMadelineIntro::
# 464 "data/maps/Route_105_1/scripts.pory"
	.string "The flowering plants in this region\n"
	.string "are just so lovely.\p"
	.string "Don't you think?$"

AromaLadyMadelineLose::
# 470 "data/maps/Route_105_1/scripts.pory"
	.string "You could have just said no.$"

BirdKeeperJacksonIntro::
# 474 "data/maps/Route_105_1/scripts.pory"
	.string "Flying-type pokémon are vital for\n"
	.string "the function of our towns and\l"
	.string "cities.\p"
	.string "I also like to battle with them!$"

BirdKeeperJacksonLose::
# 481 "data/maps/Route_105_1/scripts.pory"
	.string "I like to battle with my bird\n"
	.string "pokémon.\p"
	.string "But I don't think I like battling\n"
	.string "against you.$"

HikerCalebIntro::
# 488 "data/maps/Route_105_1/scripts.pory"
	.string "I sure do love hiking!$"

HikerCalebLose::
# 492 "data/maps/Route_105_1/scripts.pory"
	.string "Hiking is the best!$"

RunnerJaydenIntro::
# 496 "data/maps/Route_105_1/scripts.pory"
	.string "The breeze on the bridge keeps my\n"
	.string "body cool.$"

RunnerJaydenLose::
# 501 "data/maps/Route_105_1/scripts.pory"
	.string "Losing really cools my mood too.$"

BirdKeeperBraydenIntro::
# 505 "data/maps/Route_105_1/scripts.pory"
	.string "Port Neleras is just over the\n"
	.string "Rugged Pass.\p"
	.string "You'll have to beat me if you're\n"
	.string "looking to get there.$"

BirdKeeperBraydenLose::
# 512 "data/maps/Route_105_1/scripts.pory"
	.string "Alright, you beat me.\n"
	.string "Go on ahead.$"

CamperBenjaminIntro::
# 517 "data/maps/Route_105_1/scripts.pory"
	.string "I found a green Teddiursa!\p"
	.string "Take a look!$"

CamperBenjaminLose::
# 522 "data/maps/Route_105_1/scripts.pory"
	.string "I guess it's not any tougher than\n"
	.string "a normal Teddiursa.$"

AceTrainerGavinIntro::
# 527 "data/maps/Route_105_1/scripts.pory"
	.string "I already have a gym badge from\n"
	.string "Valni's gym leader.\p"
	.string "Think you have a shot at beating\n"
	.string "me?$"

AceTrainerGavinLose::
# 534 "data/maps/Route_105_1/scripts.pory"
	.string "It looks like you have a pretty\n"
	.string "good chance.$"

FishermanEvanIntro::
# 539 "data/maps/Route_105_1/scripts.pory"
	.string "I'm baiting my line with gummy\n"
	.string "worms.$"

FishermanEvanLose::
# 544 "data/maps/Route_105_1/scripts.pory"
	.string "Welp, I lost.$"

FishermanLukeIntro::
# 548 "data/maps/Route_105_1/scripts.pory"
	.string "I caught a trainer!$"

FishermanLukeLose::
# 552 "data/maps/Route_105_1/scripts.pory"
	.string "Maybe I should have let this one\n"
	.string "go.$"
