Aldus_MapScripts::
# 2 "data/maps/Aldus/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldusOnLoad
# 3 "data/maps/Aldus/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpAldus
	.byte 0


AldusOnLoad::
# 7 "data/maps/Aldus/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Aldus/scripts.pory"
	call_if_ge AldusRemovePuddles
	return


AldusRemovePuddles::
# 12 "data/maps/Aldus/scripts.pory"
	setmetatile 15, 8, METATILE_General_Grass, FALSE
# 13 "data/maps/Aldus/scripts.pory"
	setmetatile 16, 8, METATILE_General_Grass, FALSE
# 14 "data/maps/Aldus/scripts.pory"
	setmetatile 15, 9, METATILE_General_Grass, FALSE
# 15 "data/maps/Aldus/scripts.pory"
	setmetatile 16, 9, METATILE_General_Grass, FALSE
	return


AldusInnSign::
# 19 "data/maps/Aldus/scripts.pory"
	lock
# 20 "data/maps/Aldus/scripts.pory"
	msgbox AldusInnSign_Text_0
# 22 "data/maps/Aldus/scripts.pory"
	release
	return


AldusGeezer::
# 25 "data/maps/Aldus/scripts.pory"
	lock
# 26 "data/maps/Aldus/scripts.pory"
	faceplayer
# 27 "data/maps/Aldus/scripts.pory"
	goto_if_set FLAG_TEMP_1, AldusGeezer_2
# 32 "data/maps/Aldus/scripts.pory"
	msgbox AldusGeezer_Text_1
AldusGeezer_1:
# 39 "data/maps/Aldus/scripts.pory"
	release
	return

AldusGeezer_2:
# 28 "data/maps/Aldus/scripts.pory"
	msgbox AldusGeezer_Text_0
	goto AldusGeezer_1


SetUpAldus::
# 43 "data/maps/Aldus/scripts.pory"
	special SetGroupWeather
# 44 "data/maps/Aldus/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_lt SetUpAldus_2
SetUpAldus_1:
# 47 "data/maps/Aldus/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 48 "data/maps/Aldus/scripts.pory"
	switch VAR_SERAFEW_STATE
# 49 "data/maps/Aldus/scripts.pory"
	case 5, SetUpAldus_5
# 51 "data/maps/Aldus/scripts.pory"
	case 6, SetUpAldus_6
	end

SetUpAldus_2:
# 45 "data/maps/Aldus/scripts.pory"
	setflag FLAG_TEMP_1
	goto SetUpAldus_1

SetUpAldus_5:
# 50 "data/maps/Aldus/scripts.pory"
	setobjectxyperm 1, 21, 14
	return

SetUpAldus_6:
# 52 "data/maps/Aldus/scripts.pory"
	setobjectxyperm 1, 21, 14
	return


MeetRivalA::
# 58 "data/maps/Aldus/scripts.pory"
	lock
# 59 "data/maps/Aldus/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 60 "data/maps/Aldus/scripts.pory"
	opendoor 16, 14
# 61 "data/maps/Aldus/scripts.pory"
	playse SE_DOOR
# 62 "data/maps/Aldus/scripts.pory"
	waitdooranim
# 63 "data/maps/Aldus/scripts.pory"
	addobject 1
# 64 "data/maps/Aldus/scripts.pory"
	applymovement 1, WalkDown
# 65 "data/maps/Aldus/scripts.pory"
	delay 30
# 66 "data/maps/Aldus/scripts.pory"
	closedoor 16, 14
# 67 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 68 "data/maps/Aldus/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalNoticeAldus
# 70 "data/maps/Aldus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceLeft
# 71 "data/maps/Aldus/scripts.pory"
	delay 40
# 72 "data/maps/Aldus/scripts.pory"
	checkplayergender
# 73 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeetRivalA_2
# 77 "data/maps/Aldus/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
MeetRivalA_1:
# 79 "data/maps/Aldus/scripts.pory"
	delay 10
# 80 "data/maps/Aldus/scripts.pory"
	switch VAR_TEMP_0
# 81 "data/maps/Aldus/scripts.pory"
	case 20, MeetRivalA_7
# 82 "data/maps/Aldus/scripts.pory"
	case 21, MeetRivalA_8
# 83 "data/maps/Aldus/scripts.pory"
	case 22, MeetRivalA_9
MeetRivalA_5:
# 85 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 86 "data/maps/Aldus/scripts.pory"
	call MeetRival
# 87 "data/maps/Aldus/scripts.pory"
	switch VAR_SERAFEW_STATE
# 88 "data/maps/Aldus/scripts.pory"
	case 5, MeetRivalA_12
# 94 "data/maps/Aldus/scripts.pory"
	case 6, MeetRivalA_13
# 100 "data/maps/Aldus/scripts.pory"
	case 7, MeetRivalA_14
MeetRivalA_10:
# 103 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 104 "data/maps/Aldus/scripts.pory"
	fadedefaultbgm
# 105 "data/maps/Aldus/scripts.pory"
	release
	return

MeetRivalA_2:
# 74 "data/maps/Aldus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto MeetRivalA_1

MeetRivalA_7:
# 81 "data/maps/Aldus/scripts.pory"
	applymovement 1, MeetRivalX20
	goto MeetRivalA_5

MeetRivalA_8:
# 82 "data/maps/Aldus/scripts.pory"
	applymovement 1, MeetRivalX21
	goto MeetRivalA_5

MeetRivalA_9:
# 83 "data/maps/Aldus/scripts.pory"
	applymovement 1, MeetRivalX22
	goto MeetRivalA_5

MeetRivalA_12:
# 89 "data/maps/Aldus/scripts.pory"
	switch VAR_TEMP_0
# 90 "data/maps/Aldus/scripts.pory"
	case 20, MeetRivalA_16
# 91 "data/maps/Aldus/scripts.pory"
	case 21, MeetRivalA_17
# 92 "data/maps/Aldus/scripts.pory"
	case 22, MeetRivalA_18
	goto MeetRivalA_10

MeetRivalA_13:
# 95 "data/maps/Aldus/scripts.pory"
	switch VAR_TEMP_0
# 96 "data/maps/Aldus/scripts.pory"
	case 20, MeetRivalA_20
# 97 "data/maps/Aldus/scripts.pory"
	case 21, MeetRivalA_21
# 98 "data/maps/Aldus/scripts.pory"
	case 22, MeetRivalA_22
	goto MeetRivalA_10

MeetRivalA_14:
# 101 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalLeaveAldus
	goto MeetRivalA_10

MeetRivalA_16:
# 90 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusAX20
	goto MeetRivalA_10

MeetRivalA_17:
# 91 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusAX21
	goto MeetRivalA_10

MeetRivalA_18:
# 92 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusAX22
	goto MeetRivalA_10

MeetRivalA_20:
# 96 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusAX20
	goto MeetRivalA_10

MeetRivalA_21:
# 97 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusAX21
	goto MeetRivalA_10

MeetRivalA_22:
# 98 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusAX22
	goto MeetRivalA_10


MeetRivalB::
# 109 "data/maps/Aldus/scripts.pory"
	lock
# 110 "data/maps/Aldus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceUp
# 111 "data/maps/Aldus/scripts.pory"
	opendoor 16, 14
# 112 "data/maps/Aldus/scripts.pory"
	playse SE_DOOR
# 113 "data/maps/Aldus/scripts.pory"
	waitdooranim
# 114 "data/maps/Aldus/scripts.pory"
	addobject 1
# 115 "data/maps/Aldus/scripts.pory"
	playse SE_WALL_HIT
# 116 "data/maps/Aldus/scripts.pory"
	delay 20
# 117 "data/maps/Aldus/scripts.pory"
	checkplayergender
# 118 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeetRivalB_2
# 122 "data/maps/Aldus/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
MeetRivalB_1:
# 124 "data/maps/Aldus/scripts.pory"
	applymovement 1, WalkDown
# 125 "data/maps/Aldus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushDown
# 126 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 127 "data/maps/Aldus/scripts.pory"
	msgbox MeetRivalB_Text_0
# 128 "data/maps/Aldus/scripts.pory"
	closedoor 16, 14
# 129 "data/maps/Aldus/scripts.pory"
	msgbox MeetRivalB_Text_1
# 131 "data/maps/Aldus/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 132 "data/maps/Aldus/scripts.pory"
	call MeetRival
# 133 "data/maps/Aldus/scripts.pory"
	switch VAR_SERAFEW_STATE
# 134 "data/maps/Aldus/scripts.pory"
	case 5, MeetRivalB_7
# 136 "data/maps/Aldus/scripts.pory"
	case 6, MeetRivalB_8
# 138 "data/maps/Aldus/scripts.pory"
	case 7, MeetRivalB_9
MeetRivalB_5:
# 141 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 142 "data/maps/Aldus/scripts.pory"
	fadedefaultbgm
# 143 "data/maps/Aldus/scripts.pory"
	release
	return

MeetRivalB_2:
# 119 "data/maps/Aldus/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto MeetRivalB_1

MeetRivalB_7:
# 135 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusB
	goto MeetRivalB_5

MeetRivalB_8:
# 137 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalWaitAldusB
	goto MeetRivalB_5

MeetRivalB_9:
# 139 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalLeaveAldus
	goto MeetRivalB_5


MeetRival::
# 147 "data/maps/Aldus/scripts.pory"
	setflag FLAG_DISOBEY_NOTIF
# 148 "data/maps/Aldus/scripts.pory"
	setvar VAR_TEMP_2, 40
# 149 "data/maps/Aldus/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE_1
# 150 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_0
# 160 "data/maps/Aldus/scripts.pory"
	getpartysize
# 161 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne MeetRival_1
# 200 "data/maps/Aldus/scripts.pory"
	setvar VAR_SERAFEW_STATE, 5
# 201 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_6
# 207 "data/maps/Aldus/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 208 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_7, MSGBOX_AUTOCLOSE
	return

MeetRival_1:
# 162 "data/maps/Aldus/scripts.pory"
	setvar VAR_SERAFEW_STATE, 6
# 163 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_1
# 170 "data/maps/Aldus/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 171 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_2
# 175 "data/maps/Aldus/scripts.pory"
	getpartysize
# 176 "data/maps/Aldus/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 177 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MeetRival_5
# 182 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_4, MSGBOX_YESNO
MeetRival_4:
# 185 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MeetRival_8
# 189 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_5, MSGBOX_AUTOCLOSE
	return

MeetRival_5:
# 178 "data/maps/Aldus/scripts.pory"
	msgbox MeetRival_Text_3, MSGBOX_YESNO
	goto MeetRival_4

MeetRival_8:
# 186 "data/maps/Aldus/scripts.pory"
	goto TimeToBattleAldus
	return


RivalAldus::
# 229 "data/maps/Aldus/scripts.pory"
	lock
# 230 "data/maps/Aldus/scripts.pory"
	faceplayer
# 231 "data/maps/Aldus/scripts.pory"
	switch VAR_SERAFEW_STATE
# 232 "data/maps/Aldus/scripts.pory"
	case 5, RivalAldus_2
# 330 "data/maps/Aldus/scripts.pory"
	case 6, RivalAldus_3
	return

RivalAldus_2:
# 233 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_2, 40
	goto_if_eq RivalAldus_5
# 239 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_2, 50
	goto_if_eq RivalAldus_11
# 244 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_2, 60
	goto_if_eq RivalAldus_14
# 250 "data/maps/Aldus/scripts.pory"
	checkitem ITEM_POKE_BALL, 5
# 251 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RivalAldus_17
# 309 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_9, MSGBOX_YESNO
# 310 "data/maps/Aldus/scripts.pory"
	setvar VAR_TEMP_2, 50
# 311 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalAldus_23
# 325 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_12
RivalAldus_16:
# 329 "data/maps/Aldus/scripts.pory"
	release
	return

RivalAldus_3:
# 331 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_13, MSGBOX_YESNO
# 332 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalAldus_7
# 336 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_6
# 340 "data/maps/Aldus/scripts.pory"
	release
	end

RivalAldus_5:
# 234 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_0
# 236 "data/maps/Aldus/scripts.pory"
	release
	end

RivalAldus_7:
# 333 "data/maps/Aldus/scripts.pory"
	goto TimeToBattleAldus
	return

RivalAldus_11:
# 240 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_1
# 241 "data/maps/Aldus/scripts.pory"
	release
	end

RivalAldus_14:
# 245 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_2
# 247 "data/maps/Aldus/scripts.pory"
	release
	end

RivalAldus_17:
# 252 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_3, MSGBOX_YESNO
# 253 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalAldus_20
# 302 "data/maps/Aldus/scripts.pory"
	setvar VAR_TEMP_2, 50
# 303 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_8
	goto RivalAldus_16

RivalAldus_20:
# 254 "data/maps/Aldus/scripts.pory"
	getpartysize
# 255 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RivalAldus_27
RivalAldus_26:
# 267 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RivalAldus_30
RivalAldus_29:
# 282 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge RivalAldus_32
	goto RivalAldus_16

RivalAldus_23:
# 312 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_10
# 320 "data/maps/Aldus/scripts.pory"
	giveitem ITEM_POKE_BALL, 15
# 321 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_11
	goto RivalAldus_16

RivalAldus_27:
# 256 "data/maps/Aldus/scripts.pory"
	setvar VAR_TEMP_2, 60
# 257 "data/maps/Aldus/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 258 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_4
	goto RivalAldus_26

RivalAldus_30:
# 268 "data/maps/Aldus/scripts.pory"
	setvar VAR_SERAFEW_STATE, 6
# 269 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_5, MSGBOX_YESNO
# 272 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalAldus_34
# 276 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_6
	goto RivalAldus_29

RivalAldus_32:
# 283 "data/maps/Aldus/scripts.pory"
	setvar VAR_SERAFEW_STATE, 6
# 284 "data/maps/Aldus/scripts.pory"
	getpartysize
# 285 "data/maps/Aldus/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 286 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_7, MSGBOX_YESNO
# 288 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RivalAldus_37
# 292 "data/maps/Aldus/scripts.pory"
	msgbox RivalAldus_Text_6
# 296 "data/maps/Aldus/scripts.pory"
	release
	end

RivalAldus_34:
# 273 "data/maps/Aldus/scripts.pory"
	goto TimeToBattleAldus
	goto RivalAldus_29

RivalAldus_37:
# 289 "data/maps/Aldus/scripts.pory"
	goto TimeToBattleAldus
	goto RivalAldus_16


TimeToBattleAldus::
# 347 "data/maps/Aldus/scripts.pory"
	msgbox TimeToBattleAldus_Text_0, MSGBOX_AUTOCLOSE
# 349 "data/maps/Aldus/scripts.pory"
	checkplayergender
# 350 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq TimeToBattleAldus_2
# 358 "data/maps/Aldus/scripts.pory"
	switch VAR_STARTER_MON
# 359 "data/maps/Aldus/scripts.pory"
	case SPECIES_CHESPIN, TimeToBattleAldus_10
# 360 "data/maps/Aldus/scripts.pory"
	case SPECIES_MAGBY, TimeToBattleAldus_11
# 361 "data/maps/Aldus/scripts.pory"
	case SPECIES_SPHEAL, TimeToBattleAldus_12
TimeToBattleAldus_1:
# 364 "data/maps/Aldus/scripts.pory"
	goto AldusBattleOver
	return

TimeToBattleAldus_2:
# 351 "data/maps/Aldus/scripts.pory"
	switch VAR_STARTER_MON
# 352 "data/maps/Aldus/scripts.pory"
	case SPECIES_CHESPIN, TimeToBattleAldus_6
# 353 "data/maps/Aldus/scripts.pory"
	case SPECIES_MAGBY, TimeToBattleAldus_7
# 354 "data/maps/Aldus/scripts.pory"
	case SPECIES_SPHEAL, TimeToBattleAldus_8
	goto TimeToBattleAldus_1

TimeToBattleAldus_6:
# 352 "data/maps/Aldus/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ALDUS_CHESPIN, RivalAldusOutro
	goto TimeToBattleAldus_1

TimeToBattleAldus_7:
# 353 "data/maps/Aldus/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ALDUS_MAGBY, RivalAldusOutro
	goto TimeToBattleAldus_1

TimeToBattleAldus_8:
# 354 "data/maps/Aldus/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ALDUS_SPHEAL, RivalAldusOutro
	goto TimeToBattleAldus_1

TimeToBattleAldus_10:
# 359 "data/maps/Aldus/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ALDUS_CHESPIN, RivalAldusOutro
	goto TimeToBattleAldus_1

TimeToBattleAldus_11:
# 360 "data/maps/Aldus/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ALDUS_MAGBY, RivalAldusOutro
	goto TimeToBattleAldus_1

TimeToBattleAldus_12:
# 361 "data/maps/Aldus/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ALDUS_SPHEAL, RivalAldusOutro
	goto TimeToBattleAldus_1


AldusBattleOver::
# 368 "data/maps/Aldus/scripts.pory"
	lock
# 369 "data/maps/Aldus/scripts.pory"
	setvar VAR_SERAFEW_STATE, 7
# 370 "data/maps/Aldus/scripts.pory"
	setflag FLAG_RIVAL_BATTLE_1
# 371 "data/maps/Aldus/scripts.pory"
	msgbox AldusBattleOver_Text_0, MSGBOX_AUTOCLOSE
# 381 "data/maps/Aldus/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 382 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_0, 16
	goto_if_eq AldusBattleOver_2
# 387 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq AldusBattleOver_3
# 399 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalLeaveAldus
AldusBattleOver_1:
# 401 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 402 "data/maps/Aldus/scripts.pory"
	removeobject 1
# 403 "data/maps/Aldus/scripts.pory"
	fadedefaultbgm
# 404 "data/maps/Aldus/scripts.pory"
	release
	end

AldusBattleOver_2:
# 383 "data/maps/Aldus/scripts.pory"
	applymovement 1, WalkRight
# 384 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 385 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalLeaveAldus
	goto AldusBattleOver_1

AldusBattleOver_3:
# 388 "data/maps/Aldus/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 389 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq AldusBattleOver_7
# 395 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalLeaveAldus
	goto AldusBattleOver_1

AldusBattleOver_7:
# 390 "data/maps/Aldus/scripts.pory"
	applymovement 1, WalkLeft
# 391 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 392 "data/maps/Aldus/scripts.pory"
	applymovement 1, RivalLeaveAldus
	goto AldusBattleOver_1


YouNeedTwoPokemon::
# 409 "data/maps/Aldus/scripts.pory"
	lock
# 410 "data/maps/Aldus/scripts.pory"
	getpartysize
# 411 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne YouNeedTwoPokemon_2
# 416 "data/maps/Aldus/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 417 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq YouNeedTwoPokemon_5
# 422 "data/maps/Aldus/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 423 "data/maps/Aldus/scripts.pory"
	turnobject 1, DIR_EAST
YouNeedTwoPokemon_4:
# 425 "data/maps/Aldus/scripts.pory"
	msgbox YouNeedTwoPokemon_Text_0, MSGBOX_AUTOCLOSE
# 428 "data/maps/Aldus/scripts.pory"
	turnobject 1, DIR_SOUTH
# 429 "data/maps/Aldus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown
# 430 "data/maps/Aldus/scripts.pory"
	waitmovement 0
# 431 "data/maps/Aldus/scripts.pory"
	release
	return

YouNeedTwoPokemon_2:
# 412 "data/maps/Aldus/scripts.pory"
	setvar VAR_SERAFEW_STATE, 6
# 413 "data/maps/Aldus/scripts.pory"
	goto YouNeedToBattleMe
	end

YouNeedTwoPokemon_5:
# 418 "data/maps/Aldus/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 419 "data/maps/Aldus/scripts.pory"
	turnobject 1, DIR_WEST
	goto YouNeedTwoPokemon_4


YouNeedToBattleMe::
# 435 "data/maps/Aldus/scripts.pory"
	lock
# 436 "data/maps/Aldus/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 437 "data/maps/Aldus/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq YouNeedToBattleMe_2
# 442 "data/maps/Aldus/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 443 "data/maps/Aldus/scripts.pory"
	turnobject 1, DIR_EAST
YouNeedToBattleMe_1:
# 445 "data/maps/Aldus/scripts.pory"
	msgbox YouNeedToBattleMe_Text_0, MSGBOX_YESNO
# 449 "data/maps/Aldus/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq YouNeedToBattleMe_6
# 453 "data/maps/Aldus/scripts.pory"
	msgbox YouNeedToBattleMe_Text_1, MSGBOX_AUTOCLOSE
# 455 "data/maps/Aldus/scripts.pory"
	turnobject 1, DIR_SOUTH
# 456 "data/maps/Aldus/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown
# 457 "data/maps/Aldus/scripts.pory"
	waitmovement 0
YouNeedToBattleMe_5:
# 459 "data/maps/Aldus/scripts.pory"
	release
	return

YouNeedToBattleMe_2:
# 438 "data/maps/Aldus/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 439 "data/maps/Aldus/scripts.pory"
	turnobject 1, DIR_WEST
	goto YouNeedToBattleMe_1

YouNeedToBattleMe_6:
# 450 "data/maps/Aldus/scripts.pory"
	goto TimeToBattleAldus
	goto YouNeedToBattleMe_5


# 471 "data/maps/Aldus/scripts.pory"
WalkDown:
# 472 "data/maps/Aldus/scripts.pory"
	walk_down
	step_end

# 475 "data/maps/Aldus/scripts.pory"
PushDown:
# 476 "data/maps/Aldus/scripts.pory"
	lock_facing_direction
# 477 "data/maps/Aldus/scripts.pory"
	walk_down
# 478 "data/maps/Aldus/scripts.pory"
	unlock_facing_direction
	step_end

# 481 "data/maps/Aldus/scripts.pory"
RivalNoticeAldus:
# 482 "data/maps/Aldus/scripts.pory"
	emote_exclamation_mark
# 483 "data/maps/Aldus/scripts.pory"
	face_right
	step_end

# 486 "data/maps/Aldus/scripts.pory"
MeetRivalX20:
# 487 "data/maps/Aldus/scripts.pory"
	walk_right
# 487 "data/maps/Aldus/scripts.pory"
	walk_right
# 487 "data/maps/Aldus/scripts.pory"
	walk_right
	step_end

# 490 "data/maps/Aldus/scripts.pory"
MeetRivalX21:
# 491 "data/maps/Aldus/scripts.pory"
	walk_right
# 491 "data/maps/Aldus/scripts.pory"
	walk_right
# 491 "data/maps/Aldus/scripts.pory"
	walk_right
# 491 "data/maps/Aldus/scripts.pory"
	walk_right
	step_end

# 494 "data/maps/Aldus/scripts.pory"
MeetRivalX22:
# 495 "data/maps/Aldus/scripts.pory"
	walk_right
# 495 "data/maps/Aldus/scripts.pory"
	walk_right
# 495 "data/maps/Aldus/scripts.pory"
	walk_right
# 495 "data/maps/Aldus/scripts.pory"
	walk_right
# 495 "data/maps/Aldus/scripts.pory"
	walk_right
	step_end

# 498 "data/maps/Aldus/scripts.pory"
RivalWaitAldusB:
# 499 "data/maps/Aldus/scripts.pory"
	walk_right
# 499 "data/maps/Aldus/scripts.pory"
	walk_right
# 499 "data/maps/Aldus/scripts.pory"
	walk_right
# 499 "data/maps/Aldus/scripts.pory"
	walk_right
# 499 "data/maps/Aldus/scripts.pory"
	walk_right
# 500 "data/maps/Aldus/scripts.pory"
	walk_up
# 501 "data/maps/Aldus/scripts.pory"
	face_down
	step_end

# 504 "data/maps/Aldus/scripts.pory"
RivalWaitAldusAX20:
# 505 "data/maps/Aldus/scripts.pory"
	walk_down
# 506 "data/maps/Aldus/scripts.pory"
	walk_right
# 506 "data/maps/Aldus/scripts.pory"
	walk_right
# 507 "data/maps/Aldus/scripts.pory"
	walk_up
# 507 "data/maps/Aldus/scripts.pory"
	walk_up
# 508 "data/maps/Aldus/scripts.pory"
	face_down
	step_end

# 511 "data/maps/Aldus/scripts.pory"
RivalWaitAldusAX21:
# 512 "data/maps/Aldus/scripts.pory"
	walk_up
# 513 "data/maps/Aldus/scripts.pory"
	walk_right
# 514 "data/maps/Aldus/scripts.pory"
	face_down
	step_end

# 517 "data/maps/Aldus/scripts.pory"
RivalWaitAldusAX22:
# 518 "data/maps/Aldus/scripts.pory"
	walk_up
# 519 "data/maps/Aldus/scripts.pory"
	face_down
	step_end

# 522 "data/maps/Aldus/scripts.pory"
RivalLeaveAldus:
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
# 523 "data/maps/Aldus/scripts.pory"
	walk_down
	step_end

# 526 "data/maps/Aldus/scripts.pory"
Denied:
# 527 "data/maps/Aldus/scripts.pory"
	walk_down
	step_end

# 530 "data/maps/Aldus/scripts.pory"
FaceLeft:
# 531 "data/maps/Aldus/scripts.pory"
	face_left
	step_end

AldusInnSign_Text_0:
# 20 "data/maps/Aldus/scripts.pory"
	.string "Aldus Inn\n"
	.string "Travelers Welcome$"

AldusGeezer_Text_0:
# 28 "data/maps/Aldus/scripts.pory"
	.string "The weather is pretty bad outside.\p"
	.string "Feel free to stay until it clears up.$"

AldusGeezer_Text_1:
# 32 "data/maps/Aldus/scripts.pory"
	.string "You came all the way from Serafew?\p"
	.string "My goodness, you should rest at the inn\n"
	.string "here in Aldus.\p"
	.string "It's the building just to the South.\p"
	.string "If you go inside and speak with my\n"
	.string "wife, she'll set you up with a room.$"

MeetRivalB_Text_0:
# 127 "data/maps/Aldus/scripts.pory"
	.string "THUD!!!$"

MeetRivalB_Text_1:
# 129 "data/maps/Aldus/scripts.pory"
	.string "Woah! Sorry, I didn't see you there.\n"
	.string "Are you alright?$"

MeetRival_Text_0:
# 150 "data/maps/Aldus/scripts.pory"
	.string "Wait a minute, you're {PLAYER}, right?\p"
	.string "My dad told me you're starting your\n"
	.string "journey today.\p"
	.string "I bet you're really excited!\p"
	.string "Oh! If you're going to be training\n"
	.string "pokémon, you should have more than\l"
	.string "one with you as you travel.\p"
	.string "The Pokémon League requires trainers\n"
	.string "to carry at least two pokémon at once,\l"
	.string "so they can have double battles.$"

MeetRival_Text_1:
# 163 "data/maps/Aldus/scripts.pory"
	.string "...\p"
	.string "Oh, I see. It looks like you've already\n"
	.string "had some luck catching wild pokémon.\p"
	.string "That's great!\p"
	.string "Here, take a few of my Pokéballs.\p"
	.string "I bet you're almost out of the ones\n"
	.string "my dad gave you.$"

MeetRival_Text_2:
# 171 "data/maps/Aldus/scripts.pory"
	.string "There, those should last until you\n"
	.string "reach Ostia.\p"
	.string "You can buy more at the shop there.\p"
	.string "...$"

MeetRival_Text_3:
# 178 "data/maps/Aldus/scripts.pory"
	.string "Since you already have a couple\n"
	.string "pokémon, why don't we have a battle?$"

MeetRival_Text_4:
# 182 "data/maps/Aldus/scripts.pory"
	.string "Since you already have {STR_VAR_1} pokémon,\n"
	.string "why don't we have a battle?$"

MeetRival_Text_5:
# 189 "data/maps/Aldus/scripts.pory"
	.string "Oh, you wanna heal up first.\n"
	.string "That's fair.\p"
	.string "It's good manners for a trainer to heal\n"
	.string "your pokémon if they're defeated.\p"
	.string "But that won't help you with the wild\n"
	.string "pokémon you run into.\p"
	.string "Why don't you take a rest at the inn.\n"
	.string "I'll wait over there for you.$"

MeetRival_Text_6:
# 201 "data/maps/Aldus/scripts.pory"
	.string "By the way, did my dad give you any\n"
	.string "Pokéballs?\p"
	.string "...\p"
	.string "Really, just five?\p"
	.string "Huh. Why don't I give you some of mine?\n"
	.string "Here you go.$"

MeetRival_Text_7:
# 208 "data/maps/Aldus/scripts.pory"
	.string "That should be enough for you to catch\n"
	.string "a full team.\p"
	.string "Speaking of catching, you should go\n"
	.string "capture another pokémon before you\l"
	.string "leave Aldus.\p"
	.string "You can find pokémon in tall grass, in\n"
	.string "caves, and even in the ocean!\p"
	.string "When you see one, you'll want to throw\n"
	.string "a pokéball at it to capture it.\p"
	.string "Be sure to weaken it first though. If\n"
	.string "you don't, it'll probably break out of\l"
	.string "the ball.\p"
	.string "That's all you really need to know.\p"
	.string "Go catch a pokémon on Route 101 and\n"
	.string "show it to me before you leave town.\l"
	.string "I wanna see what you catch!$"

RivalAldus_Text_0:
# 234 "data/maps/Aldus/scripts.pory"
	.string "What are you waiting for?\n"
	.string "Get out there and catch a pokémon!$"

RivalAldus_Text_1:
# 240 "data/maps/Aldus/scripts.pory"
	.string "Well, get back out there!$"

RivalAldus_Text_2:
# 245 "data/maps/Aldus/scripts.pory"
	.string "Well, get back out there!\p"
	.string "And next time, don't lie to me.$"

RivalAldus_Text_3:
# 252 "data/maps/Aldus/scripts.pory"
	.string "Have you caught a new pokémon yet?\n$"

RivalAldus_Text_4:
# 258 "data/maps/Aldus/scripts.pory"
	.string "Cool, I wanna see it!\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "Umm, that's the {STR_VAR_1} my dad gave\n"
	.string "you.\p"
	.string "...\p"
	.string "You might be hopeless.$"

RivalAldus_Text_5:
# 269 "data/maps/Aldus/scripts.pory"
	.string "Cool, I think you should show it to me\n"
	.string "in a pokémon battle!\p"
	.string "What do you say?$"

RivalAldus_Text_6:
# 276 "data/maps/Aldus/scripts.pory"
	.string "Well, I'm not letting you leave until\n"
	.string "you battle me.\p"
	.string "If you wanna rest first, you should\n"
	.string "talk to the old lady in the inn.$"

RivalAldus_Text_7:
# 286 "data/maps/Aldus/scripts.pory"
	.string "Wow, you already caught {STR_VAR_1} pokémon?\n"
	.string "Sounds like you're ready for a battle!$"

RivalAldus_Text_8:
# 303 "data/maps/Aldus/scripts.pory"
	.string "Oh, have you been having trouble?\p"
	.string "Remember, you're more likely to catch a\n"
	.string "pokémon if you weaken it first.$"

RivalAldus_Text_9:
# 309 "data/maps/Aldus/scripts.pory"
	.string "Oh, do you need more Pokéballs?$"

RivalAldus_Text_10:
# 312 "data/maps/Aldus/scripts.pory"
	.string "Wow, you must have been having a really\n"
	.string "rough time out there.\p"
	.string "Try to weaken the next one before\n"
	.string "throwing a Pokéball. Okay?\p"
	.string "The weaker the pokémon is when you\n"
	.string "throw the ball, the more likely you\l"
	.string "are to capture it.\p"
	.string "Here, take these.$"

RivalAldus_Text_11:
# 321 "data/maps/Aldus/scripts.pory"
	.string "Why don't you head back out and give\n"
	.string "it another shot?$"

RivalAldus_Text_12:
# 325 "data/maps/Aldus/scripts.pory"
	.string "Don't be afraid to ask for more if you\n"
	.string "need them. I have more than enough.$"

RivalAldus_Text_13:
# 331 "data/maps/Aldus/scripts.pory"
	.string "Are you ready to battle now?$"

TimeToBattleAldus_Text_0:
# 347 "data/maps/Aldus/scripts.pory"
	.string "Alright! But I'm not gonna go easy on\n"
	.string "you just because it's your first time!$"

AldusBattleOver_Text_0:
# 371 "data/maps/Aldus/scripts.pory"
	.string "That was a great battle!\p"
	.string "You were way better than I expected.\p"
	.string "...\p"
	.string "Hey! You should challenge the gym in\n"
	.string "Ostia.\p"
	.string "I bet you could take it on no problem\n"
	.string "at all.\p"
	.string "Well, it was cool to meet you {PLAYER}.\p"
	.string "I'll be doing a lot of traveling soon\n"
	.string "too, so I'm sure I'll see you around!$"

YouNeedTwoPokemon_Text_0:
# 425 "data/maps/Aldus/scripts.pory"
	.string "Route 101 is between Aldus and Serafew.\n"
	.string "You've gotta head back to find a\l"
	.string "pokémon to catch.$"

YouNeedToBattleMe_Text_0:
# 445 "data/maps/Aldus/scripts.pory"
	.string "Where do you think you're going?\p"
	.string "I'm not letting you leave without\n"
	.string "showing me a pokémon battle!\p"
	.string "Are you ready?$"

YouNeedToBattleMe_Text_1:
# 453 "data/maps/Aldus/scripts.pory"
	.string "Just come talk to me when you're ready.\n"
	.string "I can wait.$"

RivalAldusIntro::
# 462 "data/maps/Aldus/scripts.pory"
	.string "Alright! But I'm not gonna go easy on\n"
	.string "you just because it's your first time!$"

RivalAldusOutro::
# 467 "data/maps/Aldus/scripts.pory"
	.string "You're pretty good for a beginner.$"
