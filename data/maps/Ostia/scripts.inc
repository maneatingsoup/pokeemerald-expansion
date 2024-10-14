Ostia_MapScripts::
# 2 "data/maps/Ostia/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OstiaOnLoad
# 3 "data/maps/Ostia/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstia
	.byte 0


OstiaOnLoad::
# 7 "data/maps/Ostia/scripts.pory"
	call_if_set FLAG_IS_NIGHT, OstiaTurnLampsOn
# 8 "data/maps/Ostia/scripts.pory"
	goto_if_unset FLAG_IS_NIGHT, OstiaOnLoad_1
	return

OstiaOnLoad_1:
# 9 "data/maps/Ostia/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_lt OstiaOnLoad_3
	return

OstiaOnLoad_3:
# 10 "data/maps/Ostia/scripts.pory"
	call OstiaTurnLampsOn
	return


OstiaTurnLampsOn::
# 16 "data/maps/Ostia/scripts.pory"
	setmetatile 24, 10, 0x200, FALSE
# 17 "data/maps/Ostia/scripts.pory"
	setmetatile 37, 10, 0x200, FALSE
# 18 "data/maps/Ostia/scripts.pory"
	setmetatile 29, 17, 0x200, FALSE
# 19 "data/maps/Ostia/scripts.pory"
	setmetatile 32, 17, 0x200, FALSE
# 20 "data/maps/Ostia/scripts.pory"
	setmetatile 14, 14, 0x200, FALSE
# 21 "data/maps/Ostia/scripts.pory"
	setmetatile 14, 27, 0x200, FALSE
# 22 "data/maps/Ostia/scripts.pory"
	setmetatile 19, 29, 0x200, FALSE
# 23 "data/maps/Ostia/scripts.pory"
	setmetatile 22, 29, 0x200, FALSE
# 24 "data/maps/Ostia/scripts.pory"
	setmetatile 27, 35, 0x200, FALSE
# 25 "data/maps/Ostia/scripts.pory"
	setmetatile 33, 35, 0x200, FALSE
# 26 "data/maps/Ostia/scripts.pory"
	setmetatile 30, 40, 0x200, FALSE
# 27 "data/maps/Ostia/scripts.pory"
	setmetatile 38, 40, 0x200, FALSE
	return


SetUpOstia::
# 31 "data/maps/Ostia/scripts.pory"
	special SetGroupWeather
# 32 "data/maps/Ostia/scripts.pory"
	goto_if_set FLAG_RUDE_DUDE, SetUpOstia_2
SetUpOstia_1:
# 35 "data/maps/Ostia/scripts.pory"
	compare VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 1
	goto_if_le SetUpOstia_5
# 39 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_5
SetUpOstia_4:
# 41 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_3
# 42 "data/maps/Ostia/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_lt SetUpOstia_8
	return

SetUpOstia_2:
# 33 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_2
	goto SetUpOstia_1

SetUpOstia_5:
# 36 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_4
	goto SetUpOstia_4

SetUpOstia_8:
# 43 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_1
# 44 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_2
# 45 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_4
	return


OstiaCityGymSign::
# 50 "data/maps/Ostia/scripts.pory"
	lock
# 51 "data/maps/Ostia/scripts.pory"
	msgbox OstiaCityGymSign_Text_0
# 54 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaCityInnSign::
# 58 "data/maps/Ostia/scripts.pory"
	lock
# 59 "data/maps/Ostia/scripts.pory"
	msgbox OstiaCityInnSign_Text_0
# 61 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaCityStoreSign::
# 65 "data/maps/Ostia/scripts.pory"
	lock
# 66 "data/maps/Ostia/scripts.pory"
	msgbox OstiaCityStoreSign_Text_0
# 69 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaCitySignPost::
# 73 "data/maps/Ostia/scripts.pory"
	lock
# 74 "data/maps/Ostia/scripts.pory"
	msgbox OstiaCitySignPost_Text_0
# 75 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaResearchSign::
# 79 "data/maps/Ostia/scripts.pory"
	lock
# 80 "data/maps/Ostia/scripts.pory"
	msgbox OstiaResearchSign_Text_0
# 82 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaYoungFountainGirl::
# 86 "data/maps/Ostia/scripts.pory"
	lock
# 87 "data/maps/Ostia/scripts.pory"
	faceplayer
# 88 "data/maps/Ostia/scripts.pory"
	goto_if_set FLAG_TEMP_1, OstiaYoungFountainGirl_2
# 97 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungFountainGirl_Text_1
# 98 "data/maps/Ostia/scripts.pory"
	applymovement 8, FaceRight
# 99 "data/maps/Ostia/scripts.pory"
	waitmovement 0
OstiaYoungFountainGirl_1:
# 101 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaYoungFountainGirl_2:
# 89 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungFountainGirl_Text_0
# 93 "data/maps/Ostia/scripts.pory"
	applymovement 3, FaceUp
# 94 "data/maps/Ostia/scripts.pory"
	waitmovement 0
	goto OstiaYoungFountainGirl_1


OstiaGentleman::
# 105 "data/maps/Ostia/scripts.pory"
	lock
# 106 "data/maps/Ostia/scripts.pory"
	faceplayer
# 107 "data/maps/Ostia/scripts.pory"
	msgbox OstiaGentleman_Text_0
# 110 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaScientistGreeter::
# 114 "data/maps/Ostia/scripts.pory"
	lock
# 115 "data/maps/Ostia/scripts.pory"
	faceplayer
# 116 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistGreeter_Text_0
# 122 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaScientistBuffoon::
# 126 "data/maps/Ostia/scripts.pory"
	lock
# 127 "data/maps/Ostia/scripts.pory"
	faceplayer
# 128 "data/maps/Ostia/scripts.pory"
	goto_if_unset FLAG_WISE_GLASSES, OstiaScientistBuffoon_2
# 149 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_3, 6
	goto_if_eq OstiaScientistBuffoon_3
# 154 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistBuffoon_Text_5
OstiaScientistBuffoon_1:
# 157 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaScientistBuffoon_2:
# 129 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistBuffoon_Text_0, MSGBOX_YESNO
# 135 "data/maps/Ostia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OstiaScientistBuffoon_7
# 146 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistBuffoon_Text_3
	goto OstiaScientistBuffoon_1

OstiaScientistBuffoon_3:
# 150 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistBuffoon_Text_4
	goto OstiaScientistBuffoon_1

OstiaScientistBuffoon_7:
# 136 "data/maps/Ostia/scripts.pory"
	setflag FLAG_WISE_GLASSES
# 137 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_3, 6
# 138 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistBuffoon_Text_1
# 140 "data/maps/Ostia/scripts.pory"
	giveitem ITEM_WISE_GLASSES
# 141 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistBuffoon_Text_2
	goto OstiaScientistBuffoon_1


OstiaCountryMan::
# 161 "data/maps/Ostia/scripts.pory"
	lock
# 162 "data/maps/Ostia/scripts.pory"
	faceplayer
# 163 "data/maps/Ostia/scripts.pory"
	goto_if_set FLAG_TEMP_1, OstiaCountryMan_2
# 171 "data/maps/Ostia/scripts.pory"
	msgbox OstiaCountryMan_Text_1
# 175 "data/maps/Ostia/scripts.pory"
	applymovement 11, FaceLeft
# 176 "data/maps/Ostia/scripts.pory"
	waitmovement 0
OstiaCountryMan_1:
# 178 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaCountryMan_2:
# 164 "data/maps/Ostia/scripts.pory"
	msgbox OstiaCountryMan_Text_0
	goto OstiaCountryMan_1


OstiaYoungGirl::
# 182 "data/maps/Ostia/scripts.pory"
	lock
# 183 "data/maps/Ostia/scripts.pory"
	faceplayer
# 184 "data/maps/Ostia/scripts.pory"
	goto_if_set FLAG_TEMP_1, OstiaYoungGirl_2
# 190 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungGirl_Text_1, MSGBOX_YESNO
# 192 "data/maps/Ostia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OstiaYoungGirl_6
# 197 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungGirl_Text_3
OstiaYoungGirl_5:
# 199 "data/maps/Ostia/scripts.pory"
	applymovement 6, FaceRight
# 200 "data/maps/Ostia/scripts.pory"
	waitmovement 0
OstiaYoungGirl_1:
# 202 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaYoungGirl_2:
# 185 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungGirl_Text_0
	goto OstiaYoungGirl_1

OstiaYoungGirl_6:
# 193 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungGirl_Text_2
	goto OstiaYoungGirl_5


OstiaYoungBoy::
# 206 "data/maps/Ostia/scripts.pory"
	lock
# 207 "data/maps/Ostia/scripts.pory"
	faceplayer
# 208 "data/maps/Ostia/scripts.pory"
	goto_if_set FLAG_TEMP_1, OstiaYoungBoy_2
# 214 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungBoy_Text_1
# 217 "data/maps/Ostia/scripts.pory"
	applymovement 7, FaceLeft
# 218 "data/maps/Ostia/scripts.pory"
	waitmovement 0
OstiaYoungBoy_1:
# 220 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaYoungBoy_2:
# 209 "data/maps/Ostia/scripts.pory"
	msgbox OstiaYoungBoy_Text_0
# 211 "data/maps/Ostia/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_DOWN_AND_UP
	goto OstiaYoungBoy_1


OstiaFountainBoy::
# 224 "data/maps/Ostia/scripts.pory"
	lock
# 225 "data/maps/Ostia/scripts.pory"
	faceplayer
# 226 "data/maps/Ostia/scripts.pory"
	goto_if_set FLAG_TEMP_1, OstiaFountainBoy_2
# 233 "data/maps/Ostia/scripts.pory"
	msgbox OstiaFountainBoy_Text_1
# 236 "data/maps/Ostia/scripts.pory"
	applymovement 1, FaceDown
# 237 "data/maps/Ostia/scripts.pory"
	waitmovement 0
OstiaFountainBoy_1:
# 239 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaFountainBoy_2:
# 227 "data/maps/Ostia/scripts.pory"
	msgbox OstiaFountainBoy_Text_0
	goto OstiaFountainBoy_1


OstiaBerryLady::
# 243 "data/maps/Ostia/scripts.pory"
	lock
# 244 "data/maps/Ostia/scripts.pory"
	faceplayer
# 245 "data/maps/Ostia/scripts.pory"
	goto_if_unset FLAG_OSTIA_BERRY, OstiaBerryLady_2
OstiaBerryLady_1:
# 251 "data/maps/Ostia/scripts.pory"
	msgbox OstiaBerryLady_Text_1
# 253 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaBerryLady_2:
# 246 "data/maps/Ostia/scripts.pory"
	setflag FLAG_OSTIA_BERRY
# 247 "data/maps/Ostia/scripts.pory"
	msgbox OstiaBerryLady_Text_0
# 249 "data/maps/Ostia/scripts.pory"
	giveitem ITEM_LUM_BERRY, 10
	goto OstiaBerryLady_1


OstiaWherePokeballs::
# 257 "data/maps/Ostia/scripts.pory"
	lock
# 258 "data/maps/Ostia/scripts.pory"
	faceplayer
# 259 "data/maps/Ostia/scripts.pory"
	msgbox OstiaWherePokeballs_Text_0
# 263 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaRudeDude::
# 267 "data/maps/Ostia/scripts.pory"
	lock
# 268 "data/maps/Ostia/scripts.pory"
	faceplayer
# 269 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 0
	goto_if_eq OstiaRudeDude_2
# 280 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq OstiaRudeDude_3
# 287 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 2
	goto_if_eq OstiaRudeDude_4
# 299 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 3
	goto_if_eq OstiaRudeDude_5
# 304 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 4
	goto_if_eq OstiaRudeDude_6
# 309 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 5
	goto_if_eq OstiaRudeDude_7
# 313 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_5, 6
	goto_if_eq OstiaRudeDude_8
OstiaRudeDude_1:
# 318 "data/maps/Ostia/scripts.pory"
	release
	return

OstiaRudeDude_2:
# 270 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_0, MSGBOX_YESNO
# 271 "data/maps/Ostia/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OstiaRudeDude_16
# 277 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_2
	goto OstiaRudeDude_1

OstiaRudeDude_3:
# 281 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_5, 2
# 282 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_3
	goto OstiaRudeDude_1

OstiaRudeDude_4:
# 288 "data/maps/Ostia/scripts.pory"
	setflag FLAG_RUDE_DUDE
# 289 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_5, 3
# 290 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_4
# 293 "data/maps/Ostia/scripts.pory"
	giveitem ITEM_TM12_TAUNT
# 294 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_5
	goto OstiaRudeDude_1

OstiaRudeDude_5:
# 300 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_5, 4
# 301 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_6
	goto OstiaRudeDude_1

OstiaRudeDude_6:
# 305 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_5, 5
# 306 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_7
	goto OstiaRudeDude_1

OstiaRudeDude_7:
# 310 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_5, 6
# 311 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_8
	goto OstiaRudeDude_1

OstiaRudeDude_8:
# 314 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_9
	goto OstiaRudeDude_1

OstiaRudeDude_16:
# 272 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_5, 1
# 273 "data/maps/Ostia/scripts.pory"
	msgbox OstiaRudeDude_Text_1
	goto OstiaRudeDude_1


ResetOstiaGymTrainers::
# 322 "data/maps/Ostia/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, ResetOstiaGymTrainers_2
ResetOstiaGymTrainers_1:
# 328 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

ResetOstiaGymTrainers_2:
# 323 "data/maps/Ostia/scripts.pory"
	cleartrainerflag TRAINER_YOUNGSTER_ALEXANDER
# 324 "data/maps/Ostia/scripts.pory"
	cleartrainerflag TRAINER_LASS_ISABELLA
# 325 "data/maps/Ostia/scripts.pory"
	cleartrainerflag TRAINER_LASS_ABIGAIL
# 326 "data/maps/Ostia/scripts.pory"
	cleartrainerflag TRAINER_YOUNGSTER_NICHOLAS
	goto ResetOstiaGymTrainers_1


OstiaScientistHelp::
# 332 "data/maps/Ostia/scripts.pory"
	lock
# 333 "data/maps/Ostia/scripts.pory"
	setvar VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 2
# 334 "data/maps/Ostia/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 335 "data/maps/Ostia/scripts.pory"
	opendoor 26, 43
# 336 "data/maps/Ostia/scripts.pory"
	playse SE_SLIDING_DOOR
# 337 "data/maps/Ostia/scripts.pory"
	waitdooranim
# 338 "data/maps/Ostia/scripts.pory"
	addobject 12
# 339 "data/maps/Ostia/scripts.pory"
	applymovement 12, WalkDown
# 340 "data/maps/Ostia/scripts.pory"
	waitmovement 0
# 341 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_le OstiaScientistHelp_2
# 344 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_ge OstiaScientistHelp_3
# 348 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceUp
OstiaScientistHelp_1:
# 350 "data/maps/Ostia/scripts.pory"
	delay 30
# 351 "data/maps/Ostia/scripts.pory"
	closedoor 26, 43
# 352 "data/maps/Ostia/scripts.pory"
	waitmovement 0
# 353 "data/maps/Ostia/scripts.pory"
	playse SE_PIN
# 354 "data/maps/Ostia/scripts.pory"
	applymovement 12, Exclamation
# 355 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_le OstiaScientistHelp_8
# 358 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_ge OstiaScientistHelp_9
OstiaScientistHelp_7:
# 361 "data/maps/Ostia/scripts.pory"
	delay 60
# 362 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistHelp_Text_0
# 379 "data/maps/Ostia/scripts.pory"
	removeitem ITEM_DEVON_PARTS, 1
# 380 "data/maps/Ostia/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 381 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistHelp_Text_1
# 382 "data/maps/Ostia/scripts.pory"
	waitfanfare
# 383 "data/maps/Ostia/scripts.pory"
	msgbox OstiaScientistHelp_Text_2, MSGBOX_AUTOCLOSE
# 391 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_0, 25
	goto_if_le OstiaScientistHelp_13
OstiaScientistHelp_12:
# 394 "data/maps/Ostia/scripts.pory"
	waitmovement 0
# 395 "data/maps/Ostia/scripts.pory"
	setflag FLAG_TEMP_5
# 396 "data/maps/Ostia/scripts.pory"
	removeobject 13
# 397 "data/maps/Ostia/scripts.pory"
	removeobject 14
# 398 "data/maps/Ostia/scripts.pory"
	removeobject 15
# 399 "data/maps/Ostia/scripts.pory"
	removeobject 16
# 400 "data/maps/Ostia/scripts.pory"
	removeobject 17
# 401 "data/maps/Ostia/scripts.pory"
	clearflag FLAG_TEMP_4
# 402 "data/maps/Ostia/scripts.pory"
	addobject 4
# 403 "data/maps/Ostia/scripts.pory"
	addobject 8
# 404 "data/maps/Ostia/scripts.pory"
	applymovement 12, OstiaScientistHelpLeave
# 405 "data/maps/Ostia/scripts.pory"
	waitmovement 0
# 406 "data/maps/Ostia/scripts.pory"
	removeobject 12
	return

OstiaScientistHelp_2:
# 342 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
	goto OstiaScientistHelp_1

OstiaScientistHelp_3:
# 345 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
	goto OstiaScientistHelp_1

OstiaScientistHelp_8:
# 356 "data/maps/Ostia/scripts.pory"
	turnobject 12, DIR_WEST
	goto OstiaScientistHelp_7

OstiaScientistHelp_9:
# 359 "data/maps/Ostia/scripts.pory"
	turnobject 12, DIR_EAST
	goto OstiaScientistHelp_7

OstiaScientistHelp_13:
# 392 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDownFaceUp
	goto OstiaScientistHelp_12


OstiaResearchInstituteClosed::
# 410 "data/maps/Ostia/scripts.pory"
	lock
# 411 "data/maps/Ostia/scripts.pory"
	faceplayer
# 412 "data/maps/Ostia/scripts.pory"
	msgbox OstiaResearchInstituteClosed_Text_0, MSGBOX_AUTOCLOSE
# 415 "data/maps/Ostia/scripts.pory"
	release
	return


OstiaResearchInstituteClosed2::
# 419 "data/maps/Ostia/scripts.pory"
	lock
# 420 "data/maps/Ostia/scripts.pory"
	faceplayer
# 421 "data/maps/Ostia/scripts.pory"
	msgbox OstiaResearchInstituteClosed2_Text_0, MSGBOX_AUTOCLOSE
# 424 "data/maps/Ostia/scripts.pory"
	release
	return


GetOutOfTheShot::
# 428 "data/maps/Ostia/scripts.pory"
	lock
# 429 "data/maps/Ostia/scripts.pory"
	msgbox GetOutOfTheShot_Text_0, MSGBOX_AUTOCLOSE
# 431 "data/maps/Ostia/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 432 "data/maps/Ostia/scripts.pory"
	compare VAR_TEMP_1, 21
	goto_if_ge GetOutOfTheShot_2
# 443 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp
GetOutOfTheShot_1:
# 445 "data/maps/Ostia/scripts.pory"
	waitmovement 0
# 446 "data/maps/Ostia/scripts.pory"
	release
	return

GetOutOfTheShot_2:
# 433 "data/maps/Ostia/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 434 "data/maps/Ostia/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq GetOutOfTheShot_5
# 438 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown
	goto GetOutOfTheShot_1

GetOutOfTheShot_5:
# 435 "data/maps/Ostia/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp
	goto GetOutOfTheShot_1


WeAreFilming::
# 450 "data/maps/Ostia/scripts.pory"
	lock
# 451 "data/maps/Ostia/scripts.pory"
	msgbox WeAreFilming_Text_0, MSGBOX_AUTOCLOSE
# 453 "data/maps/Ostia/scripts.pory"
	release
	return


ReporterOstia::
# 457 "data/maps/Ostia/scripts.pory"
	lock
# 458 "data/maps/Ostia/scripts.pory"
	msgbox ReporterOstia_Text_0, MSGBOX_AUTOCLOSE
# 466 "data/maps/Ostia/scripts.pory"
	release
	return


NervousScientist::
# 470 "data/maps/Ostia/scripts.pory"
	lock
# 471 "data/maps/Ostia/scripts.pory"
	faceplayer
# 472 "data/maps/Ostia/scripts.pory"
	msgbox NervousScientist_Text_0, MSGBOX_AUTOCLOSE
# 474 "data/maps/Ostia/scripts.pory"
	turnobject 17, DIR_WEST
# 475 "data/maps/Ostia/scripts.pory"
	release
	return


# 478 "data/maps/Ostia/scripts.pory"
TurnAway:
# 479 "data/maps/Ostia/scripts.pory"
	face_away_player
	step_end

# 482 "data/maps/Ostia/scripts.pory"
Exclamation:
# 483 "data/maps/Ostia/scripts.pory"
	emote_exclamation_mark
	step_end

# 486 "data/maps/Ostia/scripts.pory"
WalkDownFaceUp:
# 487 "data/maps/Ostia/scripts.pory"
	walk_down
# 488 "data/maps/Ostia/scripts.pory"
	face_up
	step_end

# 491 "data/maps/Ostia/scripts.pory"
OstiaScientistHelpLeave:
# 492 "data/maps/Ostia/scripts.pory"
	walk_left
# 492 "data/maps/Ostia/scripts.pory"
	walk_left
# 492 "data/maps/Ostia/scripts.pory"
	walk_left
# 492 "data/maps/Ostia/scripts.pory"
	walk_left
# 492 "data/maps/Ostia/scripts.pory"
	walk_left
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
# 493 "data/maps/Ostia/scripts.pory"
	walk_up
	step_end

OstiaCityGymSign_Text_0:
# 51 "data/maps/Ostia/scripts.pory"
	.string "Ostia City Gym\n"
	.string "Leader: Joe\p"
	.string "Totally Average and Nothing but Normal$"

OstiaCityInnSign_Text_0:
# 59 "data/maps/Ostia/scripts.pory"
	.string "Ostia City Inn\n"
	.string "Make Yourself at Home$"

OstiaCityStoreSign_Text_0:
# 66 "data/maps/Ostia/scripts.pory"
	.string "Ostia General Store\p"
	.string "Stop by for the Solution to Any and All\n"
	.string "of Your Adventuring Needs$"

OstiaCitySignPost_Text_0:
# 74 "data/maps/Ostia/scripts.pory"
	.string "Welcome to the City of Ostia.\n$"

OstiaResearchSign_Text_0:
# 80 "data/maps/Ostia/scripts.pory"
	.string "Ostia Research Institute\n"
	.string "The Future is Built Upon the Past$"

OstiaYoungFountainGirl_Text_0:
# 89 "data/maps/Ostia/scripts.pory"
	.string "Watching the rain fall outside makes\n"
	.string "me wanna go run around out there.\p"
	.string "Grandma won't let me though.\p"
	.string "She says I'll catch a cold.$"

OstiaYoungFountainGirl_Text_1:
# 97 "data/maps/Ostia/scripts.pory"
	.string "I like watching the water!$"

OstiaGentleman_Text_0:
# 107 "data/maps/Ostia/scripts.pory"
	.string "I've been thinking about taking on\n"
	.string "the gym here, but I'm not sure if I\l"
	.string "can beat someone as average as Joe.$"

OstiaScientistGreeter_Text_0:
# 116 "data/maps/Ostia/scripts.pory"
	.string "Welcome to the Ostia Research\n"
	.string "Institute.\p"
	.string "We do research into the history of this\n"
	.string "world and the relics that the past has\l"
	.string "left for us to discover.\p"
	.string "Please take a look around the gallery.$"

OstiaScientistBuffoon_Text_0:
# 129 "data/maps/Ostia/scripts.pory"
	.string "I don't need to wear this lab coat to do\n"
	.string "my research.\p"
	.string "I only wear it because people think I'm\n"
	.string "smart when I do.\p"
	.string "You think it makes me look smart, don't\n"
	.string "you?$"

OstiaScientistBuffoon_Text_1:
# 138 "data/maps/Ostia/scripts.pory"
	.string "I knew it works! Here, take this so you\n"
	.string "can look smart, too.$"

OstiaScientistBuffoon_Text_2:
# 141 "data/maps/Ostia/scripts.pory"
	.string "They won't work as well as my lab coat,\n"
	.string "but you'll definitely look smart with\l"
	.string "those on.$"

OstiaScientistBuffoon_Text_3:
# 146 "data/maps/Ostia/scripts.pory"
	.string "Oh, well at least my wife says it does.$"

OstiaScientistBuffoon_Text_4:
# 150 "data/maps/Ostia/scripts.pory"
	.string "Put those on and you'll be looking smart\n"
	.string "in no time.$"

OstiaScientistBuffoon_Text_5:
# 154 "data/maps/Ostia/scripts.pory"
	.string "I hope those glasses have been\n"
	.string "working well for you.$"

OstiaCountryMan_Text_0:
# 164 "data/maps/Ostia/scripts.pory"
	.string "I moved to Ostia from Valni to look\n"
	.string "after my grandfather.\p"
	.string "I don't know if the city is good for him\n"
	.string "in his old age, but he wouldn't be able\l"
	.string "to make it to Valni to live with me.$"

OstiaCountryMan_Text_1:
# 171 "data/maps/Ostia/scripts.pory"
	.string "Living in the city is convenient, but I\n"
	.string "can't shake the feeling that the world\l"
	.string "would be a lot prettier without all\l"
	.string "these buildings.$"

OstiaYoungGirl_Text_0:
# 185 "data/maps/Ostia/scripts.pory"
	.string "I wanna play outside, but mom won't let\n"
	.string "me since it's raining.\p"
	.string "There's nothing to do inside though.$"

OstiaYoungGirl_Text_1:
# 190 "data/maps/Ostia/scripts.pory"
	.string "We're gonna play hide and seek.\p"
	.string "Are you good at hiding?$"

OstiaYoungGirl_Text_2:
# 193 "data/maps/Ostia/scripts.pory"
	.string "Are you sure? You look pretty big to be\n"
	.string "good at hiding.$"

OstiaYoungGirl_Text_3:
# 197 "data/maps/Ostia/scripts.pory"
	.string "I didn't think so.$"

OstiaYoungBoy_Text_0:
# 209 "data/maps/Ostia/scripts.pory"
	.string "If I keep running up and down on the\n"
	.string "rug, I can build up a lot of static!$"

OstiaYoungBoy_Text_1:
# 214 "data/maps/Ostia/scripts.pory"
	.string "My sister is really good at hiding!\p"
	.string "I spent all of yesterday looking for her,\n"
	.string "but I couldn't find her.$"

OstiaFountainBoy_Text_0:
# 227 "data/maps/Ostia/scripts.pory"
	.string "I hate the rain.\p"
	.string "When I grow up, I'm gonna live on the\n"
	.string "other side of the Rugged Pass.\p"
	.string "It doesn't rain very often over there.$"

OstiaFountainBoy_Text_1:
# 233 "data/maps/Ostia/scripts.pory"
	.string "I'm supposed to make a wish before\n"
	.string "throwing this coin in.\p"
	.string "But I don't know what to wish for.$"

OstiaBerryLady_Text_0:
# 247 "data/maps/Ostia/scripts.pory"
	.string "I grow berries out on my balcony.\p"
	.string "Here, you can have these.$"

OstiaBerryLady_Text_1:
# 251 "data/maps/Ostia/scripts.pory"
	.string "I think berries are just wonderful,\n"
	.string "don't you?$"

OstiaWherePokeballs_Text_0:
# 259 "data/maps/Ostia/scripts.pory"
	.string "You look like an up and coming pokémon \n"
	.string "trainer.\p"
	.string "If you're looking for pokéballs, you can\n"
	.string "buy them at the store here in Ostia.$"

OstiaRudeDude_Text_0:
# 270 "data/maps/Ostia/scripts.pory"
	.string "Wanna hear a secret?$"

OstiaRudeDude_Text_1:
# 273 "data/maps/Ostia/scripts.pory"
	.string "I bet you would, loser.\p"
	.string "Heh, gottem.$"

OstiaRudeDude_Text_2:
# 277 "data/maps/Ostia/scripts.pory"
	.string "Bet you couldn't handle it anyway.$"

OstiaRudeDude_Text_3:
# 282 "data/maps/Ostia/scripts.pory"
	.string "Okay, that was pretty mean.\p"
	.string "I should probably apologize, huh?\p"
	.string "Well, I'm not gonna!\p"
	.string "Take that, nerd!$"

OstiaRudeDude_Text_4:
# 290 "data/maps/Ostia/scripts.pory"
	.string "Alright, I'm kinda rude.\p"
	.string "Why don't you take this for putting up\n"
	.string "with me.$"

OstiaRudeDude_Text_5:
# 294 "data/maps/Ostia/scripts.pory"
	.string "I probably shouldn't stick around after\n"
	.string "behaving like that.\p"
	.string "Be more responsible than me with that\n"
	.string "thing.$"

OstiaRudeDude_Text_6:
# 301 "data/maps/Ostia/scripts.pory"
	.string "I'm still not gonna give you that\n"
	.string "apology.$"

OstiaRudeDude_Text_7:
# 306 "data/maps/Ostia/scripts.pory"
	.string "Alright, now I think you're being the\n"
	.string "annoying one here.$"

OstiaRudeDude_Text_8:
# 311 "data/maps/Ostia/scripts.pory"
	.string "Can't you go be stupid somewhere else?$"

OstiaRudeDude_Text_9:
# 314 "data/maps/Ostia/scripts.pory"
	.string "Look, I'm sorry you think you deserve\n"
	.string "an apology.\p"
	.string "Just leave me alone.$"

OstiaScientistHelp_Text_0:
# 362 "data/maps/Ostia/scripts.pory"
	.string "Oh, you look like a strong pokémon\n"
	.string "trainer.\p"
	.string "Would you be able to help me out?\p"
	.string "Some thug broke into the Ostia Research\n"
	.string "Institute and stole an important part\l"
	.string "of a machine we were working on.\p"
	.string "Without the temporal translocator, we\n"
	.string "can't make progress on our research.\p"
	.string "The culprit is a suspicious looking guy \n"
	.string "wearing a black outfit.\p"
	.string "...\p"
	.string "You've already seen him?\p"
	.string "Hm, so you recovered the blueprints but\n"
	.string "he ran off with the translocator.\p"
	.string "Well, I suppose with those, we can make\n"
	.string "a new one.\p"
	.string "I'll take them, thank you.$"

OstiaScientistHelp_Text_1:
# 381 "data/maps/Ostia/scripts.pory"
	.string "{PLAYER} handed over the Blueprints.$"

OstiaScientistHelp_Text_2:
# 383 "data/maps/Ostia/scripts.pory"
	.string "You've done me and the other scientists\n"
	.string "a huge favor.\p"
	.string "Please, stop by the Ostia Research\n"
	.string "Institute when you have a chance.\p"
	.string "I'll have a reward for your effort.\p"
	.string "...\p"
	.string "Now, if you'll excuse me, I need to\n"
	.string "return these documents.$"

OstiaResearchInstituteClosed_Text_0:
# 412 "data/maps/Ostia/scripts.pory"
	.string "I'm very sorry, but the Ostia Research\n"
	.string "Institute is closed right now.\p"
	.string "Please come back another time.$"

OstiaResearchInstituteClosed2_Text_0:
# 421 "data/maps/Ostia/scripts.pory"
	.string "The Ostia Research Institute is closed\n"
	.string "for the time being.\p"
	.string "We apologize for any inconvenience.$"

GetOutOfTheShot_Text_0:
# 429 "data/maps/Ostia/scripts.pory"
	.string "Cameraman: Hey, we're filming.\n"
	.string "Get out of the shot!$"

WeAreFilming_Text_0:
# 451 "data/maps/Ostia/scripts.pory"
	.string "Can't you see we're busy?\n"
	.string "Get outta here, kid.$"

ReporterOstia_Text_0:
# 458 "data/maps/Ostia/scripts.pory"
	.string "The culprit has yet to be identified\n"
	.string "at this time.\p"
	.string "The visual description is an adult\n"
	.string "male wearing a dark outfit.\p"
	.string "Our network has confirmed that no\n"
	.string "injuries resulted from the break-in\l"
	.string "and that the loss was limited to a\l"
	.string "single artifact and documents.$"

NervousScientist_Text_0:
# 472 "data/maps/Ostia/scripts.pory"
	.string "I've never been on the news before.\n"
	.string "I'm really nervous.$"
