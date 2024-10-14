Rugged_Pass_F1_MapScripts::
	.byte 0


HikerAdam::
# 4 "data/maps/Rugged_Pass_F1/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ADAM, HikerAdamIntro, HikerAdamLose
# 5 "data/maps/Rugged_Pass_F1/scripts.pory"
	msgbox HikerAdam_Text_0, MSGBOX_AUTOCLOSE
	return


HexManiacAmanda::
# 9 "data/maps/Rugged_Pass_F1/scripts.pory"
	trainerbattle_double TRAINER_HEX_MANIAC_AMANDA, HexManiacAmandaIntro, HexManiacAmandaLose, Dummy
# 10 "data/maps/Rugged_Pass_F1/scripts.pory"
	msgbox HexManiacAmanda_Text_0, MSGBOX_AUTOCLOSE
	return


PkmnRangerKevin::
# 15 "data/maps/Rugged_Pass_F1/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_KEVIN, PkmnRangerKevinIntro, PkmnRangerKevinLose
# 16 "data/maps/Rugged_Pass_F1/scripts.pory"
	msgbox PkmnRangerKevin_Text_0, MSGBOX_AUTOCLOSE
	return


HikerAdam_Text_0:
# 5 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "Boy, do I love spelunking!$"

HexManiacAmanda_Text_0:
# 10 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "It's awfully dark in here.\n"
	.string "I can't see a thing.$"

PkmnRangerKevin_Text_0:
# 16 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "I've heard you can find Clamperl if you\n"
	.string "fish in the pools here.\p"
	.string "Isn't that neat?$"

HikerAdamIntro::
# 21 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "Oh, it looks like I've found a trainer on\n"
	.string "this expedition.$"

HikerAdamLose::
# 26 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "Ope.$"

HexManiacAmandaIntro::
# 30 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "I can't see.\p"
	.string "I can't see!$"

HexManiacAmandaLose::
# 35 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "I still can't see.$"

PkmnRangerKevinIntro::
# 39 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "This cave is important for the river\n"
	.string "ecosystem.\p"
	.string "The totodile use it for shelter,\n"
	.string "so we need to protect it.$"

PkmnRangerKevinLose::
# 46 "data/maps/Rugged_Pass_F1/scripts.pory"
	.string "Thanks for the battle.$"
