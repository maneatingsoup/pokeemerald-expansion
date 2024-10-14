Rugged_Pass_F3_MapScripts::
	.byte 0


ExpertSamuel::
# 4 "data/maps/Rugged_Pass_F3/scripts.pory"
	trainerbattle_double TRAINER_EXPERT_SAMUEL, ExpertSamuelIntro, ExpertSamuelLose, Dummy
# 5 "data/maps/Rugged_Pass_F3/scripts.pory"
	msgbox ExpertSamuel_Text_0, MSGBOX_AUTOCLOSE
	return


PokemaniacSteven::
# 10 "data/maps/Rugged_Pass_F3/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_STEVEN, PokemaniacStevenIntro, PokemaniacStevenLose
# 11 "data/maps/Rugged_Pass_F3/scripts.pory"
	msgbox PokemaniacSteven_Text_0, MSGBOX_AUTOCLOSE
	return


HikerBrian::
# 16 "data/maps/Rugged_Pass_F3/scripts.pory"
	trainerbattle_single TRAINER_HIKER_BRIAN, HikerBrianIntro, HikerBrianLose
# 17 "data/maps/Rugged_Pass_F3/scripts.pory"
	msgbox HikerBrian_Text_0, MSGBOX_AUTOCLOSE
	return


ExpertSamuel_Text_0:
# 5 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "Life experience is important,\n"
	.string "but it isn't everything.$"

PokemaniacSteven_Text_0:
# 11 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "Where did you catch your pokémon?\p"
	.string "You've gotta tell me!$"

HikerBrian_Text_0:
# 17 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "I sure love singing in the cave.$"

ExpertSamuelIntro::
# 20 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "A young one.\p"
	.string "Let me show you the power of wisdom!$"

ExpertSamuelLose::
# 25 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "Oh, it seems wisdom isn't everything.$"

PokemaniacStevenIntro::
# 29 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "I've collected some really rare\n"
	.string "pokémon!$"

PokemaniacStevenLose::
# 34 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "My collecting skills are better than\n"
	.string "than my battling skills.$"

HikerBrianIntro::
# 39 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "In this cave, we shall now battle.\n"
	.string "Dum dum dum dum dum.$"

HikerBrianLose::
# 44 "data/maps/Rugged_Pass_F3/scripts.pory"
	.string "In this cave, I've lost our battle\n"
	.string "Dum dum dum dum dum.$"
