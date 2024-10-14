Serafew_MapScripts::
# 2 "data/maps/Serafew/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SerafewOnLoad
# 3 "data/maps/Serafew/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpSerafew
# 4 "data/maps/Serafew/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Serafew_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Serafew_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/Serafew/scripts.pory"
	map_script_2 VAR_TEMP_A, 0, HideProfessor
	.2byte 0


SerafewOnLoad::
# 10 "data/maps/Serafew/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 11 "data/maps/Serafew/scripts.pory"
	call_if_ge SerafewRemovePuddles
	return


SerafewRemovePuddles::
# 15 "data/maps/Serafew/scripts.pory"
	setmetatile 21, 16, METATILE_General_Grass, FALSE
# 16 "data/maps/Serafew/scripts.pory"
	setmetatile 22, 16, METATILE_General_Grass, FALSE
# 17 "data/maps/Serafew/scripts.pory"
	setmetatile 21, 17, METATILE_General_Grass, FALSE
# 18 "data/maps/Serafew/scripts.pory"
	setmetatile 22, 17, METATILE_General_Grass, FALSE
# 19 "data/maps/Serafew/scripts.pory"
	setmetatile 21, 9, METATILE_General_Grass, FALSE
# 20 "data/maps/Serafew/scripts.pory"
	setmetatile 22, 9, METATILE_General_Grass, FALSE
# 21 "data/maps/Serafew/scripts.pory"
	setmetatile 23, 9, METATILE_General_Grass, FALSE
# 22 "data/maps/Serafew/scripts.pory"
	setmetatile 21, 10, METATILE_General_Grass, FALSE
# 23 "data/maps/Serafew/scripts.pory"
	setmetatile 22, 10, METATILE_General_Grass, FALSE
# 24 "data/maps/Serafew/scripts.pory"
	setmetatile 23, 10, METATILE_General_Grass, FALSE
# 25 "data/maps/Serafew/scripts.pory"
	setmetatile 14, 19, METATILE_General_Grass, FALSE
# 26 "data/maps/Serafew/scripts.pory"
	setmetatile 15, 19, METATILE_General_Grass, FALSE
# 27 "data/maps/Serafew/scripts.pory"
	setmetatile 14, 20, METATILE_General_Grass, FALSE
# 28 "data/maps/Serafew/scripts.pory"
	setmetatile 15, 20, METATILE_General_Grass, FALSE
# 29 "data/maps/Serafew/scripts.pory"
	setmetatile 31, 26, METATILE_General_Grass, FALSE
# 30 "data/maps/Serafew/scripts.pory"
	setmetatile 30, 26, METATILE_General_Grass, FALSE
# 31 "data/maps/Serafew/scripts.pory"
	setmetatile 31, 25, METATILE_General_Grass, FALSE
# 32 "data/maps/Serafew/scripts.pory"
	setmetatile 30, 25, METATILE_General_Grass, FALSE
	return


SetUpSerafew::
# 36 "data/maps/Serafew/scripts.pory"
	special SetGroupWeather
# 37 "data/maps/Serafew/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_lt SetUpSerafew_2
# 44 "data/maps/Serafew/scripts.pory"
	goto_if_set FLAG_FAT_MAN, SetUpSerafew_3
SetUpSerafew_1:
# 47 "data/maps/Serafew/scripts.pory"
	compare VAR_SERAFEW_STATE, 3
	goto_if_ge SetUpSerafew_6
	return

SetUpSerafew_2:
# 38 "data/maps/Serafew/scripts.pory"
	setflag FLAG_TEMP_1
# 39 "data/maps/Serafew/scripts.pory"
	setflag FLAG_TEMP_3
# 40 "data/maps/Serafew/scripts.pory"
	compare VAR_SERAFEW_STATE, 3
	goto_if_ge SetUpSerafew_8
	goto SetUpSerafew_1

SetUpSerafew_3:
# 45 "data/maps/Serafew/scripts.pory"
	setflag FLAG_TEMP_3
	goto SetUpSerafew_1

SetUpSerafew_6:
# 48 "data/maps/Serafew/scripts.pory"
	setobjectxyperm 3, 18, 20
# 49 "data/maps/Serafew/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WANDER_AROUND
	return

SetUpSerafew_8:
# 41 "data/maps/Serafew/scripts.pory"
	setflag FLAG_TEMP_2
	goto SetUpSerafew_1


HideProfessor::
# 54 "data/maps/Serafew/scripts.pory"
	removeobject 4
	return


PlayerHouseSign::
# 58 "data/maps/Serafew/scripts.pory"
	lock
# 59 "data/maps/Serafew/scripts.pory"
	msgbox PlayerHouseSign_Text_0
# 60 "data/maps/Serafew/scripts.pory"
	release
	return


LabSign::
# 64 "data/maps/Serafew/scripts.pory"
	lock
# 65 "data/maps/Serafew/scripts.pory"
	msgbox LabSign_Text_0
# 66 "data/maps/Serafew/scripts.pory"
	release
	return


HomelessFatMan::
# 70 "data/maps/Serafew/scripts.pory"
	lock
# 71 "data/maps/Serafew/scripts.pory"
	faceplayer
# 72 "data/maps/Serafew/scripts.pory"
	goto_if_set FLAG_TEMP_1, HomelessFatMan_2
# 134 "data/maps/Serafew/scripts.pory"
	msgbox HomelessFatMan_Text_4
HomelessFatMan_1:
# 142 "data/maps/Serafew/scripts.pory"
	release
	return

HomelessFatMan_2:
# 73 "data/maps/Serafew/scripts.pory"
	goto_if_set FLAG_FAT_MAN, HomelessFatMan_5
# 77 "data/maps/Serafew/scripts.pory"
	msgbox HomelessFatMan_Text_1
# 99 "data/maps/Serafew/scripts.pory"
	msgbox HomelessFatMan_Text_2
# 118 "data/maps/Serafew/scripts.pory"
	msgbox HomelessFatMan_Text_3, MSGBOX_AUTOCLOSE
# 130 "data/maps/Serafew/scripts.pory"
	setflag FLAG_FAT_MAN
	goto HomelessFatMan_1

HomelessFatMan_5:
# 74 "data/maps/Serafew/scripts.pory"
	msgbox HomelessFatMan_Text_0
	goto HomelessFatMan_1


CoastGirl::
# 146 "data/maps/Serafew/scripts.pory"
	lock
# 147 "data/maps/Serafew/scripts.pory"
	faceplayer
# 148 "data/maps/Serafew/scripts.pory"
	goto_if_set FLAG_TEMP_1, CoastGirl_2
# 154 "data/maps/Serafew/scripts.pory"
	msgbox CoastGirl_Text_1
CoastGirl_1:
# 157 "data/maps/Serafew/scripts.pory"
	release
	return

CoastGirl_2:
# 149 "data/maps/Serafew/scripts.pory"
	msgbox CoastGirl_Text_0
	goto CoastGirl_1


SadBoy::
# 161 "data/maps/Serafew/scripts.pory"
	lock
# 162 "data/maps/Serafew/scripts.pory"
	faceplayer
# 163 "data/maps/Serafew/scripts.pory"
	compare VAR_SERAFEW_STATE, 3
	goto_if_eq SadBoy_2
# 171 "data/maps/Serafew/scripts.pory"
	msgbox SadBoy_Text_1
SadBoy_1:
# 175 "data/maps/Serafew/scripts.pory"
	release
	return

SadBoy_2:
# 164 "data/maps/Serafew/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 165 "data/maps/Serafew/scripts.pory"
	msgbox SadBoy_Text_0
	goto SadBoy_1


CannotLeaveYetLeft::
# 179 "data/maps/Serafew/scripts.pory"
	lockall
# 180 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetLeftMovement
# 181 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 182 "data/maps/Serafew/scripts.pory"
	msgbox TooDangerous, MSGBOX_AUTOCLOSE
# 183 "data/maps/Serafew/scripts.pory"
	applymovement 3, PushPlayer
# 184 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayer
# 185 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 186 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetReturnA
# 187 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 188 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpFaceRight
# 189 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetLeftReturnB
# 190 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 191 "data/maps/Serafew/scripts.pory"
	msgbox MaybeGetPokemon
# 192 "data/maps/Serafew/scripts.pory"
	release
	return


CannotLeaveYetMiddle::
# 196 "data/maps/Serafew/scripts.pory"
	lockall
# 197 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetMiddleMovement
# 198 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 199 "data/maps/Serafew/scripts.pory"
	msgbox TooDangerous, MSGBOX_AUTOCLOSE
# 200 "data/maps/Serafew/scripts.pory"
	applymovement 3, PushPlayer
# 201 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayer
# 202 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 203 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetReturnA
# 204 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 205 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpFaceRight
# 206 "data/maps/Serafew/scripts.pory"
	applymovement 3, WalkRightFaceLeft
# 207 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 208 "data/maps/Serafew/scripts.pory"
	msgbox MaybeGetPokemon
# 209 "data/maps/Serafew/scripts.pory"
	release
	return


CannotLeaveYetRight::
# 213 "data/maps/Serafew/scripts.pory"
	lockall
# 214 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetRightMovement
# 215 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 216 "data/maps/Serafew/scripts.pory"
	msgbox TooDangerous, MSGBOX_AUTOCLOSE
# 217 "data/maps/Serafew/scripts.pory"
	applymovement 3, PushPlayer
# 218 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayer
# 219 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 220 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetReturnA
# 221 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 222 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUpFaceRight
# 223 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 224 "data/maps/Serafew/scripts.pory"
	applymovement 3, CannotLeaveYetRightReturnB
# 225 "data/maps/Serafew/scripts.pory"
	msgbox MaybeGetPokemon
# 226 "data/maps/Serafew/scripts.pory"
	release
	return


WaitYouNeedTheDexLeft::
# 230 "data/maps/Serafew/scripts.pory"
	lock
# 231 "data/maps/Serafew/scripts.pory"
	addobject 4
# 232 "data/maps/Serafew/scripts.pory"
	applymovement 4, WalkLeft
# 233 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 234 "data/maps/Serafew/scripts.pory"
	goto WaitYouNeedTheDex
	return


WaitYouNeedTheDexMiddle::
# 238 "data/maps/Serafew/scripts.pory"
	lock
# 239 "data/maps/Serafew/scripts.pory"
	addobject 4
# 240 "data/maps/Serafew/scripts.pory"
	goto WaitYouNeedTheDex
	return


WaitYouNeedTheDexRight::
# 244 "data/maps/Serafew/scripts.pory"
	lock
# 245 "data/maps/Serafew/scripts.pory"
	addobject 4
# 246 "data/maps/Serafew/scripts.pory"
	applymovement 4, WalkRight
# 247 "data/maps/Serafew/scripts.pory"
	waitmovement 0
# 248 "data/maps/Serafew/scripts.pory"
	goto WaitYouNeedTheDex
	return


WaitYouNeedTheDex::
# 252 "data/maps/Serafew/scripts.pory"
	applymovement 4, WalkUp
# 253 "data/maps/Serafew/scripts.pory"
	waitmovement 4
# 254 "data/maps/Serafew/scripts.pory"
	msgbox WaitYouNeedTheDex_Text_0, MSGBOX_AUTOCLOSE
# 255 "data/maps/Serafew/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceDown
# 256 "data/maps/Serafew/scripts.pory"
	applymovement 4, WalkUpFour
# 257 "data/maps/Serafew/scripts.pory"
	waitmovement 4
# 258 "data/maps/Serafew/scripts.pory"
	msgbox WaitYouNeedTheDex_Text_1
# 263 "data/maps/Serafew/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 264 "data/maps/Serafew/scripts.pory"
	msgbox WaitYouNeedTheDex_Text_2
# 265 "data/maps/Serafew/scripts.pory"
	waitfanfare
# 266 "data/maps/Serafew/scripts.pory"
	checkplayergender
# 267 "data/maps/Serafew/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WaitYouNeedTheDex_2
# 285 "data/maps/Serafew/scripts.pory"
	msgbox WaitYouNeedTheDex_Text_4, MSGBOX_AUTOCLOSE
WaitYouNeedTheDex_1:
# 302 "data/maps/Serafew/scripts.pory"
	applymovement 4, WalkDownFive
# 303 "data/maps/Serafew/scripts.pory"
	waitmovement 4
# 304 "data/maps/Serafew/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 305 "data/maps/Serafew/scripts.pory"
	special SetUnlockedPokedexFlags
# 306 "data/maps/Serafew/scripts.pory"
	setvar VAR_SERAFEW_STATE, 4
# 307 "data/maps/Serafew/scripts.pory"
	setflag FLAG_RIVAL_BATTLE_1
# 308 "data/maps/Serafew/scripts.pory"
	setflag FLAG_RIVAL_BATTLE_2
# 309 "data/maps/Serafew/scripts.pory"
	removeobject 4
# 310 "data/maps/Serafew/scripts.pory"
	release
	return

WaitYouNeedTheDex_2:
# 268 "data/maps/Serafew/scripts.pory"
	msgbox WaitYouNeedTheDex_Text_3, MSGBOX_AUTOCLOSE
	goto WaitYouNeedTheDex_1


# 313 "data/maps/Serafew/scripts.pory"
CannotLeaveYetLeftMovement:
# 314 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 315 "data/maps/Serafew/scripts.pory"
	walk_fast_up
# 316 "data/maps/Serafew/scripts.pory"
	walk_fast_up
# 317 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 318 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 319 "data/maps/Serafew/scripts.pory"
	face_down
	step_end

# 322 "data/maps/Serafew/scripts.pory"
CannotLeaveYetMiddleMovement:
# 323 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 324 "data/maps/Serafew/scripts.pory"
	walk_fast_up
# 325 "data/maps/Serafew/scripts.pory"
	walk_fast_up
# 326 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 327 "data/maps/Serafew/scripts.pory"
	face_down
	step_end

# 330 "data/maps/Serafew/scripts.pory"
CannotLeaveYetRightMovement:
# 331 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 332 "data/maps/Serafew/scripts.pory"
	walk_fast_left
# 333 "data/maps/Serafew/scripts.pory"
	walk_fast_up
# 334 "data/maps/Serafew/scripts.pory"
	walk_fast_up
# 335 "data/maps/Serafew/scripts.pory"
	walk_fast_right
# 336 "data/maps/Serafew/scripts.pory"
	face_down
	step_end

# 339 "data/maps/Serafew/scripts.pory"
CannotLeaveYetReturnA:
# 340 "data/maps/Serafew/scripts.pory"
	walk_right
	step_end

# 343 "data/maps/Serafew/scripts.pory"
CannotLeaveYetLeftReturnB:
# 344 "data/maps/Serafew/scripts.pory"
	walk_right
# 345 "data/maps/Serafew/scripts.pory"
	walk_right
# 346 "data/maps/Serafew/scripts.pory"
	face_left
	step_end

# 349 "data/maps/Serafew/scripts.pory"
CannotLeaveYetRightReturnB:
# 350 "data/maps/Serafew/scripts.pory"
	face_left
	step_end

# 353 "data/maps/Serafew/scripts.pory"
PushPlayer:
# 354 "data/maps/Serafew/scripts.pory"
	lock_facing_direction
# 355 "data/maps/Serafew/scripts.pory"
	walk_down
# 356 "data/maps/Serafew/scripts.pory"
	walk_down
# 357 "data/maps/Serafew/scripts.pory"
	unlock_facing_direction
	step_end

# 360 "data/maps/Serafew/scripts.pory"
WalkUpFaceRight:
# 361 "data/maps/Serafew/scripts.pory"
	walk_up
# 362 "data/maps/Serafew/scripts.pory"
	face_right
	step_end

# 365 "data/maps/Serafew/scripts.pory"
WalkUp:
# 366 "data/maps/Serafew/scripts.pory"
	walk_up
	step_end

# 369 "data/maps/Serafew/scripts.pory"
WalkUpFour:
# 370 "data/maps/Serafew/scripts.pory"
	walk_up
# 370 "data/maps/Serafew/scripts.pory"
	walk_up
# 370 "data/maps/Serafew/scripts.pory"
	walk_up
# 370 "data/maps/Serafew/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/Serafew/scripts.pory"
WalkDownFive:
# 374 "data/maps/Serafew/scripts.pory"
	walk_down
# 374 "data/maps/Serafew/scripts.pory"
	walk_down
# 374 "data/maps/Serafew/scripts.pory"
	walk_down
# 374 "data/maps/Serafew/scripts.pory"
	walk_down
# 374 "data/maps/Serafew/scripts.pory"
	walk_down
	step_end

# 377 "data/maps/Serafew/scripts.pory"
WalkLeft:
# 378 "data/maps/Serafew/scripts.pory"
	walk_left
	step_end

# 381 "data/maps/Serafew/scripts.pory"
WalkRight:
# 382 "data/maps/Serafew/scripts.pory"
	walk_right
	step_end

# 385 "data/maps/Serafew/scripts.pory"
WalkRightFaceLeft:
# 386 "data/maps/Serafew/scripts.pory"
	walk_right
# 387 "data/maps/Serafew/scripts.pory"
	face_left
	step_end

# 390 "data/maps/Serafew/scripts.pory"
FaceDown:
# 391 "data/maps/Serafew/scripts.pory"
	face_down
	step_end

PlayerHouseSign_Text_0:
# 59 "data/maps/Serafew/scripts.pory"
	.string "{PLAYER}'s House$"

LabSign_Text_0:
# 65 "data/maps/Serafew/scripts.pory"
	.string "Professor Birch's Laboratory$"

HomelessFatMan_Text_0:
# 74 "data/maps/Serafew/scripts.pory"
	.string "Just let me be fat.$"

HomelessFatMan_Text_1:
# 77 "data/maps/Serafew/scripts.pory"
	.string "Don't bother a man when he's busy being\n"
	.string "being fat.\p"
	.string "Didn't your mother teach you manners?\p"
	.string "This is what's wrong with the youth\n"
	.string "today.\p"
	.string "People like you.\p"
	.string "I don't even have a home.\p"
	.string "Do you know how hard it is to own a home\n"
	.string "in this economy?\p"
	.string "There's only one house in the whole\n"
	.string "town!\p"
	.string "And even if there weren't, how am I\n"
	.string "supposed to buy one when I don't even\l"
	.string "have a job?\p"
	.string "How did I even get fat?\p"
	.string "I don't have any money!\p"
	.string "I can't eat food that I can't buy.\p"
	.string "There isn't even a grocery store here.\p"
	.string "I'd apply for a job if there was one.\p"
	.string "But there's not.\p"
	.string "I can't even go to Ostia to work, because\n"
	.string "I don't have a pokémon!$"

HomelessFatMan_Text_2:
# 99 "data/maps/Serafew/scripts.pory"
	.string "That little brat over by the bookshelf\n"
	.string "won't let anybody leave without one.\p"
	.string "And look at this place, the whole town is\n"
	.string "just your house and this lab.\p"
	.string "I mean, look, we all have to cram in here\n"
	.string "while it's raining, because you and your\l"
	.string "mom are the only property owners in the\l"
	.string "whole damn town!\p"
	.string "I can't even bitch about rent payments,\n"
	.string "because there's no parasitic, waste of\l"
	.string "DNA, piece of shit landlord to rent from\l"
	.string "in the first place!\p"
	.string "What kind of cruel person would engineer\n"
	.string "this situation?\p"
	.string "What did I do to get put in such an awful\n"
	.string "place like this?\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

HomelessFatMan_Text_3:
# 118 "data/maps/Serafew/scripts.pory"
	.string "Anyway...\p"
	.string "The system is rigged.\p"
	.string "Nobody can afford housing.\p"
	.string "There's nowhere to work.\p"
	.string "I can't leave town.\p"
	.string "And I'm fat!\p"
	.string "How can a world without landlords and\n"
	.string "CEOs be this fucked up?\p"
	.string "There, are you happy?\p"
	.string "This is what happens when you bother the\n"
	.string "fat man, who's minding his own business.\p"
	.string "Next time, just let me be fat!$"

HomelessFatMan_Text_4:
# 134 "data/maps/Serafew/scripts.pory"
	.string "I've spent my whole life in this town.\p"
	.string "Since I don't have a pokémon,\n"
	.string "I'll spend the rest of it here, too.\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "I don't even have a house...$"

CoastGirl_Text_0:
# 149 "data/maps/Serafew/scripts.pory"
	.string "I bet this place would be really good\n"
	.string "for playing hide and seek.\p"
	.string "There are so many places to hide!$"

CoastGirl_Text_1:
# 154 "data/maps/Serafew/scripts.pory"
	.string "I wanna see what's across the ocean\n"
	.string "when I grow up!$"

SadBoy_Text_0:
# 165 "data/maps/Serafew/scripts.pory"
	.string "Wow, the professor really gave you\n"
	.string "a {STR_VAR_1}?\p"
	.string "That's so cool!\p"
	.string "I can't wait until I have my own pokémon.$"

SadBoy_Text_1:
# 171 "data/maps/Serafew/scripts.pory"
	.string "I'm too young to have a pokémon.\n"
	.string "When I'm older, I'm gonna go on\l"
	.string "an awesome adventure!$"

WaitYouNeedTheDex_Text_0:
# 254 "data/maps/Serafew/scripts.pory"
	.string "Wait, {PLAYER}!$"

WaitYouNeedTheDex_Text_1:
# 258 "data/maps/Serafew/scripts.pory"
	.string "I'm glad I caught you before you left\n"
	.string "town.\p"
	.string "I almost forgot to give you your\n"
	.string "pokédex!\p"
	.string "Well, here you go. This one is yours.$"

WaitYouNeedTheDex_Text_2:
# 264 "data/maps/Serafew/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

WaitYouNeedTheDex_Text_3:
# 268 "data/maps/Serafew/scripts.pory"
	.string "That little device is an encyclopedia of\n"
	.string "information about pokémon.\p"
	.string "It will automatically create entries for\n"
	.string "pokémon you've seen or caught.\p"
	.string "It'll also show you the locations that\n"
	.string "pokémon you've seen can be found at in\l"
	.string "the wild.\p"
	.string "Isn't that neat?\p"
	.string "{RIVAL} takes hers everywhere.\p"
	.string "I bet you'll find it just as useful as\n"
	.string "she does.\p"
	.string "Well, that's all from me.\p"
	.string "...\p"
	.string "Really, it is this time!\p"
	.string "Take care out there, {PLAYER}!$"

WaitYouNeedTheDex_Text_4:
# 285 "data/maps/Serafew/scripts.pory"
	.string "That little device is an encycopedia of\n"
	.string "information about pokémon.\p"
	.string "It will automatically create entries for\n"
	.string "pokémon you've seen or caught.\p"
	.string "It'll also show you the locations that\n"
	.string "pokémon you've seen can be found at in\l"
	.string "the wild.\p"
	.string "Isn't that neat?\p"
	.string "{RIVAL} takes his everywhere.\p"
	.string "I bet you'll find it just as useful as\n"
	.string "he does.\p"
	.string "...\p"
	.string "Well, that's all from me.\p"
	.string "...\p"
	.string "Really, it is this time!\p"
	.string "Take care out there, {PLAYER}!$"

TooDangerous::
# 394 "data/maps/Serafew/scripts.pory"
	.string "You can't go out there without\n"
	.string "a pokémon.\p"
	.string "It's too dangerous!$"

MaybeGetPokemon::
# 400 "data/maps/Serafew/scripts.pory"
	.string "If you really want to go out,\n"
	.string "I bet the professor would give\l"
	.string "you a pokémon.$"
