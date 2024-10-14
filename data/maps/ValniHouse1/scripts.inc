ValniHouse1_MapScripts::
	.byte 0


ValniHouse1Girl::
# 4 "data/maps/ValniHouse1/scripts.pory"
	lock
# 5 "data/maps/ValniHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Girl_Text_0
# 8 "data/maps/ValniHouse1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT
# 9 "data/maps/ValniHouse1/scripts.pory"
	release
	return


ValniHouse1Fisherman::
# 13 "data/maps/ValniHouse1/scripts.pory"
	lock
# 14 "data/maps/ValniHouse1/scripts.pory"
	faceplayer
# 15 "data/maps/ValniHouse1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, ValniHouse1Fisherman_2
# 35 "data/maps/ValniHouse1/scripts.pory"
	goto_if_unset FLAG_TEMP_1, ValniHouse1Fisherman_8
# 41 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Fisherman_Text_5
ValniHouse1Fisherman_1:
# 47 "data/maps/ValniHouse1/scripts.pory"
	release
	return

ValniHouse1Fisherman_2:
# 16 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Fisherman_Text_0, MSGBOX_YESNO
# 18 "data/maps/ValniHouse1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ValniHouse1Fisherman_5
# 23 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Fisherman_Text_2
# 25 "data/maps/ValniHouse1/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 26 "data/maps/ValniHouse1/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/ValniHouse1/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 28 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Fisherman_Text_3
	goto ValniHouse1Fisherman_1

ValniHouse1Fisherman_5:
# 19 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Fisherman_Text_1
	goto ValniHouse1Fisherman_1

ValniHouse1Fisherman_8:
# 36 "data/maps/ValniHouse1/scripts.pory"
	msgbox ValniHouse1Fisherman_Text_4
	goto ValniHouse1Fisherman_1


ValniHouse1Girl_Text_0:
# 6 "data/maps/ValniHouse1/scripts.pory"
	.string "I like the way the wood squeeks when\n"
	.string "I walk on it.$"

ValniHouse1Fisherman_Text_0:
# 16 "data/maps/ValniHouse1/scripts.pory"
	.string "You look like you're on an adventure.\n"
	.string "Are you traveling through Valni?$"

ValniHouse1Fisherman_Text_1:
# 19 "data/maps/ValniHouse1/scripts.pory"
	.string "Ah, I see.\n"
	.string "Sorry, I was mistaken.$"

ValniHouse1Fisherman_Text_2:
# 23 "data/maps/ValniHouse1/scripts.pory"
	.string "I thought so.\n"
	.string "Here, take this.$"

ValniHouse1Fisherman_Text_3:
# 28 "data/maps/ValniHouse1/scripts.pory"
	.string "I was planning on giveing that to my\n"
	.string "daughter, but she isn't interested in\l"
	.string "fishing at all.\p"
	.string "I figure you'll put that to good use.$"

ValniHouse1Fisherman_Text_4:
# 36 "data/maps/ValniHouse1/scripts.pory"
	.string "How's that Good Rod treating you?\p"
	.string "I bet you've been catching a lot of\n"
	.string "rare pokémon with it.$"

ValniHouse1Fisherman_Text_5:
# 41 "data/maps/ValniHouse1/scripts.pory"
	.string "That rod will let you catch rarer\n"
	.string "pokémon than an Old Rod does.\p"
	.string "Take it out to the river and see what\n"
	.string "you reel in.$"
