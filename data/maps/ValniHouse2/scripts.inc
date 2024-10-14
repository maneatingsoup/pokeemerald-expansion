ValniHouse2_MapScripts::
# 2 "data/maps/ValniHouse2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpValniHouses
	.byte 0


MintSalesman::
# 6 "data/maps/ValniHouse2/scripts.pory"
	lock
# 7 "data/maps/ValniHouse2/scripts.pory"
	faceplayer
# 8 "data/maps/ValniHouse2/scripts.pory"
	goto_if_unset FLAG_TEMP_A, MintSalesman_2
# 16 "data/maps/ValniHouse2/scripts.pory"
	message MintSalesman_Text_1
MintSalesman_1:
# 18 "data/maps/ValniHouse2/scripts.pory"
	waitmessage
# 19 "data/maps/ValniHouse2/scripts.pory"
	pokemartdecoration2 ValniMintMart
# 20 "data/maps/ValniHouse2/scripts.pory"
	msgbox MintSalesman_Text_2
# 21 "data/maps/ValniHouse2/scripts.pory"
	release
	return

MintSalesman_2:
# 9 "data/maps/ValniHouse2/scripts.pory"
	setflag FLAG_TEMP_A
# 10 "data/maps/ValniHouse2/scripts.pory"
	message MintSalesman_Text_0
	goto MintSalesman_1


	.align 2
# 24 "data/maps/ValniHouse2/scripts.pory"
ValniMintMart:
# 25 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 26 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 27 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 28 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 29 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 30 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 31 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 32 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 33 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_LAX_MINT
# 34 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 35 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 36 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 37 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 38 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 39 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_MILD_MINT
# 40 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 41 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_RASH_MINT
# 42 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_CALM_MINT
# 43 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 44 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 45 "data/maps/ValniHouse2/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_NONE

MintSalesman_Text_0:
# 10 "data/maps/ValniHouse2/scripts.pory"
	.string "Oh, hey there.\p"
	.string "I sell mints that can change the stats\n"
	.string "of your pokémon.\p"
	.string "Do you wanna buy some?$"

MintSalesman_Text_1:
# 16 "data/maps/ValniHouse2/scripts.pory"
	.string "Do you wanna buy some mints?$"

MintSalesman_Text_2:
# 20 "data/maps/ValniHouse2/scripts.pory"
	.string "Come again!$"
