Serafew_PlayerHouse_1F_MapScripts::
# 2 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpPlayerHouse_1F
# 3 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Serafew_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Serafew_PlayerHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	map_script_2 VAR_SERAFEW_STATE, 0, MomGreet
	.2byte 0


SetUpPlayerHouse_1F::
# 9 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	special SetGroupWeather
	return


MomGreet::
# 13 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	lock
# 14 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SERAFEW_PLAYER_HOUSE_2F
# 15 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	setvar VAR_SERAFEW_STATE, 1
# 16 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	playse SE_PIN
# 17 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement 1, MomNotice
# 18 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitse
# 19 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	delay 30
# 20 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement 1, MomApproach
# 21 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomGreet_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement 1, MomReturn
# 27 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToTable
# 28 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitmovement 1
# 29 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	checkplayergender
# 30 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MomGreet_2
# 45 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomGreet_Text_2, MSGBOX_AUTOCLOSE
MomGreet_1:
# 58 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement 1, MomGive
# 59 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceUp
# 61 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomGreet_Text_3
# 64 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomGreet_Text_4
# 66 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 67 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	setvar VAR_TEMP_A, 1
# 68 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitfanfare
# 69 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomGreet_Text_5, MSGBOX_AUTOCLOSE
# 79 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	applymovement 1, MomReturnAgain
# 80 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	waitmovement 0
	return

MomGreet_2:
# 31 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomGreet_Text_1, MSGBOX_AUTOCLOSE
	goto MomGreet_1


MomMasterScript::
# 84 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	switch VAR_SERAFEW_STATE
# 85 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	case 1, MomMasterScript_2
# 86 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	case 2, MomMasterScript_3
# 87 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	case 3, MomMasterScript_4
# 88 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	case 4, MomMasterScript_5
# 89 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	goto MomState5
	return

MomMasterScript_2:
# 85 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	goto MomState1
	return

MomMasterScript_3:
# 86 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	goto MomState2
	return

MomMasterScript_4:
# 87 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	goto MomState3
	return

MomMasterScript_5:
# 88 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	goto MomState4
	return


MomState1::
# 94 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	lock
# 95 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	faceplayer
# 96 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq MomState1_2
# 101 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState1_Text_1
MomState1_1:
# 107 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	release
	return

MomState1_2:
# 97 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState1_Text_0
	goto MomState1_1


MomState2::
# 111 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	lock
# 112 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	faceplayer
# 113 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState2_Text_0
# 117 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	release
	return


MomState3::
# 121 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	lock
# 122 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	faceplayer
# 123 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 124 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState3_Text_0
# 128 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	release
	return


MomState4::
# 132 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	lock
# 133 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	faceplayer
# 134 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState4_Text_0
# 140 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	release
	return


MomState5::
# 144 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	lock
# 145 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	faceplayer
# 146 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState5_Text_0, MSGBOX_YESNO
# 148 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MomState5_2
# 160 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState5_Text_3
MomState5_1:
# 163 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	release
	return

MomState5_2:
# 149 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SERAFEW
# 150 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState5_Text_1
# 152 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 153 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	msgbox MomState5_Text_2
	goto MomState5_1


# 166 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
MomNotice:
# 167 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 170 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
MomApproach:
# 171 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_up
# 172 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 173 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
MomReturn:
# 177 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_down
# 178 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 178 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 178 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 178 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 178 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 178 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 179 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_down
# 180 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	face_right
	step_end

# 183 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
PlayerToTable:
# 184 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_down
# 185 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_down
# 186 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 186 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 186 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 187 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_down
# 188 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	face_left
	step_end

# 191 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
MomGive:
# 192 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_up
# 193 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 193 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 193 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_right
# 194 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	face_down
	step_end

# 197 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
MomReturnAgain:
# 198 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 198 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 198 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_left
# 199 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	walk_down
# 200 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	face_right
	step_end

# 203 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
FaceUp:
# 204 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	face_up
	step_end

MomGreet_Text_0:
# 22 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Oh, {PLAYER}, you're up early.\p"
	.string "You must have been so excited for\n"
	.string "today that you couldn't sleep.\p"
	.string "Come, sit at the table with me.$"

MomGreet_Text_1:
# 31 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "I just wanted to chat with you one\n"
	.string "last time before you head out on the\l"
	.string "big adventure.\p"
	.string "...\p"
	.string "I remember when you were just a boy.\n"
	.string "I'd carry you down to the beach and\l"
	.string "you'd laugh as the waves slid across\l"
	.string "your little feet.\p"
	.string "But look at you now, all grown up!\p"
	.string "...\p"
	.string "I won't hold you up too much longer,\n"
	.string "but I have something to give you.$"

MomGreet_Text_2:
# 45 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "I just wanted to chat with you one\n"
	.string "last time before you head out on the\l"
	.string "big adventure.\p"
	.string "...\p"
	.string "I remember when you were just a girl.\n"
	.string "I'd carry you down to the beach and\l"
	.string "you'd laugh as the waves slid across\l"
	.string "your little feet.\p"
	.string "But look at you now. All grown up!\p"
	.string "...\p"
	.string "I won't hold you up too much longer,\n"
	.string "but I have something to give you.$"

MomGreet_Text_3:
# 62 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Here, I bought you a nice pair of\n"
	.string "hiking shoes.$"

MomGreet_Text_4:
# 65 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "{PLAYER} received the Running Shoes!$"

MomGreet_Text_5:
# 69 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "You'll have to break those in, but while\n"
	.string "you wear them, they should keep your\l"
	.string "feet well protected.\p"
	.string "...\p"
	.string "Alright, {PLAYER}, you have a wonderful\n"
	.string "time out there, okay?\p"
	.string "But be sure to stop home and say hello\n"
	.string "every now and again.\p"
	.string "I wanna hear all about the friends and\n"
	.string "discoveries you make on your journey.$"

MomState1_Text_0:
# 97 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "The professor is expecting you today\n"
	.string "{PLAYER}, you should go see him.$"

MomState1_Text_1:
# 101 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Don't you want to start your adventure?\p"
	.string "Well, if you aren't quite ready, that's\n"
	.string "okay.\p"
	.string "You can stay here as long as you'd\n"
	.string "like.$"

MomState2_Text_0:
# 113 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "So the professor is going to give you\n"
	.string "a pokémon?\p"
	.string "That's great! I can't wait to see which\n"
	.string "one you choose.$"

MomState3_Text_0:
# 124 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Oh, so {STR_VAR_1} is your partner?\n"
	.string "It's so cute!\p"
	.string "I bet you're happy to set out with such\n"
	.string "a special pokémon.$"

MomState4_Text_0:
# 134 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Wow, the professor really gave you a\n"
	.string "pokédex?!\p"
	.string "That's an invaluable tool for a pokémon\n"
	.string "trainer.\p"
	.string "You'll have to think of a way to thank\n"
	.string "him.$"

MomState5_Text_0:
# 146 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Hey honey, do you want to rest at home\n"
	.string "for a little while?$"

MomState5_Text_1:
# 150 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Sit tight and I'll make you something\n"
	.string "for lunch.$"

MomState5_Text_2:
# 153 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Alright, it's probably time for you to\n"
	.string "get back out there.\p"
	.string "It was nice to see you, {PLAYER}.\n"
	.string "You're always welcome at home.\l"
	.string "So drop by any time.$"

MomState5_Text_3:
# 160 "data/maps/Serafew_PlayerHouse_1F/scripts.pory"
	.string "Stop home any time you need a break\n"
	.string "from your adventure.$"
