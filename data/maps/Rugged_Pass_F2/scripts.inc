Rugged_Pass_F2_MapScripts::
	.byte 0


BlackBeltThomas::
# 4 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_THOMAS, BlackBeltThomasIntro, BlackBeltThomasLose
# 5 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox BlackBeltThomas_Text_0, MSGBOX_AUTOCLOSE
	return


HikerCody::
# 10 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_HIKER_CODY, HikerCodyIntro, HikerCodyLose
# 11 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox HikerCody_Text_0, MSGBOX_AUTOCLOSE
	return


PsychicVicky::
# 17 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_VICKY, PsychicVickyIntro, PsychicVickyLose
# 18 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox PsychicVicky_Text_0, MSGBOX_AUTOCLOSE
	return


PsychicJordan::
# 24 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JORDAN, PsychicJordanIntro, PsychicJordanLose
# 25 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox PsychicJordan_Text_0, MSGBOX_AUTOCLOSE
	return


AceTrainerKayla::
# 31 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_ACE_TRAINER_KAYLA, AceTrainerKaylaIntro, AceTrainerKaylaLose
# 32 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox AceTrainerKayla_Text_0, MSGBOX_AUTOCLOSE
	return


HikerJustin::
# 37 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_double TRAINER_HIKER_JUSTIN, HikerJustinIntro, HikerJustinLose, Dummy
# 38 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox HikerJustin_Text_0, MSGBOX_AUTOCLOSE
	return


PsychicRobert::
# 45 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_ROBERT, PsychicRobertIntro, PsychicRobertLose
# 46 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox PsychicRobert_Text_0, MSGBOX_AUTOCLOSE
	return


BlackBeltAustin::
# 50 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AUSTIN, BlackBeltAustinIntro, BlackBeltAustinLose
# 51 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox BlackBeltAustin_Text_0, MSGBOX_AUTOCLOSE
	return


HikerKyle::
# 55 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_single TRAINER_HIKER_KYLE, HikerKyleIntro, HikerKyleLose
# 56 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox HikerKyle_Text_0, MSGBOX_AUTOCLOSE
	return


AceTrainerEric::
# 61 "data/maps/Rugged_Pass_F2/scripts.pory"
	trainerbattle_double TRAINER_ACE_TRAINER_ERIC, AceTrainerEricIntro, AceTrainerEricLose, Dummy
# 62 "data/maps/Rugged_Pass_F2/scripts.pory"
	msgbox AceTrainerEric_Text_0, MSGBOX_AUTOCLOSE
	return


BlackBeltThomas_Text_0:
# 5 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Thank you for showing me that I still\n"
	.string "have much to learn.$"

HikerCody_Text_0:
# 11 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Losing a battle isn't going to get me\n"
	.string "in a bad mood!\p"
	.string "I'm having a great day!$"

PsychicVicky_Text_0:
# 18 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "My visions are not always correct, it\n"
	.string "seems.\p"
	.string "This is most vexing.$"

PsychicJordan_Text_0:
# 25 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I need to work on my psionics.\p"
	.string "I shouldn't be defeated by one without\n"
	.string "the power.$"

AceTrainerKayla_Text_0:
# 32 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Go on and take it.\p"
	.string "You've certainly earned it.$"

HikerJustin_Text_0:
# 38 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I'll find my way out of here some day.\p"
	.string "Or I won't.\p"
	.string "I don't know.\p"
	.string "We'll see what happens.$"

PsychicRobert_Text_0:
# 46 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Eat clock, loser!$"

BlackBeltAustin_Text_0:
# 51 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Angry.$"

HikerKyle_Text_0:
# 56 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Is Austin okay?\p"
	.string "He doesn't seem okay.$"

AceTrainerEric_Text_0:
# 62 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I'm pretty funny, huh?\p"
	.string "That intimidate joke does great at\n"
	.string "the pokémon league.$"

BlackBeltThomasIntro::
# 67 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I train in this dark cave to hone my\n"
	.string "senses.$"

BlackBeltThomasLose::
# 72 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "My senses need more training.$"

HikerCodyIntro::
# 76 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Well, hi there!\p"
	.string "Let's battle!$"

HikerCodyLose::
# 81 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Aw, shucks.\n"
	.string "I lost.$"

PsychicVickyIntro::
# 86 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I had a vision of this battle.\n"
	.string "You stand no chance to win.$"

PsychicVickyLose::
# 91 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "How can this be?$"

PsychicJordanIntro::
# 95 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "My psychic abilities are unmatched!\n"
	.string "Allow me to demonstrate them.$"

PsychicJordanLose::
# 100 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "It seems you were the one that\n"
	.string "demonstrated your abilities.$"

AceTrainerKaylaIntro::
# 105 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Stop right there!\p"
	.string "You're gonna have to go through me if\n"
	.string "you want that item.$"

AceTrainerKaylaLose::
# 111 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I see.$"

HikerJustinIntro::
# 115 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Oh good, another person.\p"
	.string "I'm glad to see you.\n"
	.string "I'm lost!$"

HikerJustinLose::
# 121 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "That wasn't the warm response I was\n"
	.string "looking for.$"

PsychicRobertIntro::
# 126 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I've seen your defeat.\p"
	.string "It was painful!$"

PsychicRobertLose::
# 131 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "I've seen my defeat.\p"
	.string "It was painful!$"

BlackBeltAustinIntro::
# 136 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Fight! Fight! Fight!$"

BlackBeltAustinLose::
# 140 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "AHHHHHH!!!$"

HikerKyleIntro::
# 144 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Yo, that other guy is kinda unhinged.$"

HikerKyleLose::
# 148 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Uh oh.$"

AceTrainerEricIntro::
# 152 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Do my pokémon intimidate you?$"

AceTrainerEricLose::
# 156 "data/maps/Rugged_Pass_F2/scripts.pory"
	.string "Heh, get it?\p"
	.string "Intimidate.$"
