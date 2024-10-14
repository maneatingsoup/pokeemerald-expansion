Aldus_FishermanHouse_MapScripts::
	.byte 0


AldusFisherman::
# 4 "data/maps/Aldus_FishermanHouse/scripts.pory"
	lock
# 5 "data/maps/Aldus_FishermanHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Aldus_FishermanHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, AldusFisherman_2
# 17 "data/maps/Aldus_FishermanHouse/scripts.pory"
	msgbox HaveOldRodAlready
AldusFisherman_1:
# 19 "data/maps/Aldus_FishermanHouse/scripts.pory"
	release
	return

AldusFisherman_2:
# 7 "data/maps/Aldus_FishermanHouse/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 8 "data/maps/Aldus_FishermanHouse/scripts.pory"
	msgbox AldusFisherman_Text_0
# 11 "data/maps/Aldus_FishermanHouse/scripts.pory"
	giveitem ITEM_OLD_ROD
# 12 "data/maps/Aldus_FishermanHouse/scripts.pory"
	msgbox AldusFisherman_Text_1
	goto AldusFisherman_1


AldusFisherman_Text_0:
# 8 "data/maps/Aldus_FishermanHouse/scripts.pory"
	.string "You look like someone who could use a\n"
	.string "fishing rod.\p"
	.string "Here, take my old one.$"

AldusFisherman_Text_1:
# 12 "data/maps/Aldus_FishermanHouse/scripts.pory"
	.string "Take good care of that for me.\p"
	.string "That rod has seen a lot, and it got me\n"
	.string "through some rough times.$"

HaveOldRodAlready::
# 22 "data/maps/Aldus_FishermanHouse/scripts.pory"
	.string "It's not the best rod out there, but\n"
	.string "that Old Rod does work.\p"
	.string "You can use it by a lake, a pond, or even\n"
	.string "the ocean.\p"
	.string "Just cast the line out and wait.\p"
	.string "Eventually, a pokémon will bite, then\n"
	.string "you can reel them in for a battle!.$"
