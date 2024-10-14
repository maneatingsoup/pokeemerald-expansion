Route_104_2_MapScripts::
# 2 "data/maps/Route_104_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_104_2OnLoad
# 3 "data/maps/Route_104_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpMapWeather
	.byte 0


Route_104_2OnLoad::
# 7 "data/maps/Route_104_2/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 8 "data/maps/Route_104_2/scripts.pory"
	call_if_ge Route_104_2RemovePuddles
	return


Route_104_2RemovePuddles::
# 12 "data/maps/Route_104_2/scripts.pory"
	setmetatile 11, 56, METATILE_General_Grass, FALSE
# 13 "data/maps/Route_104_2/scripts.pory"
	setmetatile 10, 56, METATILE_General_Grass, FALSE
# 14 "data/maps/Route_104_2/scripts.pory"
	setmetatile 11, 57, METATILE_General_Grass, FALSE
# 15 "data/maps/Route_104_2/scripts.pory"
	setmetatile 10, 57, METATILE_General_Grass, FALSE
# 16 "data/maps/Route_104_2/scripts.pory"
	setmetatile 2, 12, METATILE_General_Grass, FALSE
# 17 "data/maps/Route_104_2/scripts.pory"
	setmetatile 3, 12, METATILE_General_Grass, FALSE
# 18 "data/maps/Route_104_2/scripts.pory"
	setmetatile 4, 12, METATILE_General_Grass, FALSE
# 19 "data/maps/Route_104_2/scripts.pory"
	setmetatile 2, 11, METATILE_General_Grass, FALSE
# 20 "data/maps/Route_104_2/scripts.pory"
	setmetatile 3, 11, METATILE_General_Grass, FALSE
# 21 "data/maps/Route_104_2/scripts.pory"
	setmetatile 4, 11, METATILE_General_Grass, FALSE
	return


BugCatcherBrandon::
# 25 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_double TRAINER_BUG_CATCHER_BRANDON, BugCatcherBrandonIntro, BugCatcherBrandonLose, Dummy
# 26 "data/maps/Route_104_2/scripts.pory"
	msgbox BugCatcherBrandon_Text_0, MSGBOX_AUTOCLOSE
	return


HikerDylan::
# 31 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_single TRAINER_HIKER_DYLAN, HikerDylanIntro, HikerDylanLose
# 32 "data/maps/Route_104_2/scripts.pory"
	msgbox HikerDylan_Text_0, MSGBOX_AUTOCLOSE
	return


CamperSamuel::
# 37 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE, CamperSamuelIntro, CamperSamuelLose
# 38 "data/maps/Route_104_2/scripts.pory"
	msgbox CamperSamuel_Text_0, MSGBOX_AUTOCLOSE
	return


PicnickerAlyssa::
# 42 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ALYSSA, PicnickerAlyssaIntro, PicnickerAlyssaLose
# 43 "data/maps/Route_104_2/scripts.pory"
	msgbox PicnickerAlyssa_Text_0, MSGBOX_AUTOCLOSE
	return


HikerBen::
# 49 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_single TRAINER_HIKER_BEN, HikerBenIntro, HikerBenLose
# 50 "data/maps/Route_104_2/scripts.pory"
	msgbox HikerBen_Text_0, MSGBOX_AUTOCLOSE
	return


AceTrainerNathan::
# 55 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_single TRAINER_ACE_TRAINER_NATHAN, AceTrainerNathanIntro, AceTrainerNathanLose
# 56 "data/maps/Route_104_2/scripts.pory"
	msgbox AceTrainerNathan_Text_0, MSGBOX_AUTOCLOSE
	return


AceTrainerAva::
# 63 "data/maps/Route_104_2/scripts.pory"
	trainerbattle_single TRAINER_ACE_TRAINER_AVA, AceTrainerAvaIntro, AceTrainerAvaLose
# 64 "data/maps/Route_104_2/scripts.pory"
	msgbox AceTrainerAva_Text_0, MSGBOX_AUTOCLOSE
	return


BugCatcherBrandon_Text_0:
# 26 "data/maps/Route_104_2/scripts.pory"
	.string "I think I'll go look elsewhere for bug\n"
	.string "pokémon tomorrow.$"

HikerDylan_Text_0:
# 32 "data/maps/Route_104_2/scripts.pory"
	.string "Thanks for the battle.\n"
	.string "It livened up my day.$"

CamperSamuel_Text_0:
# 38 "data/maps/Route_104_2/scripts.pory"
	.string "I like to hike out here.$"

PicnickerAlyssa_Text_0:
# 43 "data/maps/Route_104_2/scripts.pory"
	.string "My brother and I hike here a lot.\p"
	.string "I like the smell of fresh air and the\n"
	.string "breeze you feel on the mountainside.$"

HikerBen_Text_0:
# 50 "data/maps/Route_104_2/scripts.pory"
	.string "I need to find a way to get my energy\n"
	.string "to go running back.$"

AceTrainerNathan_Text_0:
# 56 "data/maps/Route_104_2/scripts.pory"
	.string "Anyone as strong as you is welcome in\n"
	.string "our secret hideout.\p"
	.string "Maybe you could teach me a bit about\n"
	.string "battling while you're here.$"

AceTrainerAva_Text_0:
# 64 "data/maps/Route_104_2/scripts.pory"
	.string "I guess we can let you in, since you\n"
	.string "beat us both.$"

BugCatcherBrandonIntro::
# 68 "data/maps/Route_104_2/scripts.pory"
	.string "I thought there would be stronger bug\n"
	.string "pokémon here.\p"
	.string "All I can find are Pineco.$"

BugCatcherBrandonLose::
# 74 "data/maps/Route_104_2/scripts.pory"
	.string "Maybe I should have just caught a\n"
	.string "a Pineco and gone home...$"

HikerDylanIntro::
# 79 "data/maps/Route_104_2/scripts.pory"
	.string "Ho there, let us now battle!$"

HikerDylanLose::
# 83 "data/maps/Route_104_2/scripts.pory"
	.string "Maybe I should just talk normally...$"

CamperSamuelIntro::
# 87 "data/maps/Route_104_2/scripts.pory"
	.string "My sister and I are hiking through\n"
	.string "the trails around here.\p"
	.string "But I have time for a battle!$"

CamperSamuelLose::
# 93 "data/maps/Route_104_2/scripts.pory"
	.string "Well, it was still fun.$"

PicnickerAlyssaIntro::
# 97 "data/maps/Route_104_2/scripts.pory"
	.string "My brother and I are hiking today.\p"
	.string "We both like battling too, though!$"

PicnickerAlyssaLose::
# 102 "data/maps/Route_104_2/scripts.pory"
	.string "Can't win'em all.$"

HikerBenIntro::
# 106 "data/maps/Route_104_2/scripts.pory"
	.string "I'm getting my exercise in!$"

HikerBenLose::
# 110 "data/maps/Route_104_2/scripts.pory"
	.string "How am I supposed to exercise after\n"
	.string "losing like that...$"

AceTrainerNathanIntro::
# 115 "data/maps/Route_104_2/scripts.pory"
	.string "Oh, looks like you've wandered into our\n"
	.string "little hideout!\p"
	.string "We won't let you out without a battle!$"

AceTrainerNathanLose::
# 121 "data/maps/Route_104_2/scripts.pory"
	.string "You're strong...$"

AceTrainerAvaIntro::
# 125 "data/maps/Route_104_2/scripts.pory"
	.string "You can't be here!\p"
	.string "This is our secret base!$"

AceTrainerAvaLose::
# 130 "data/maps/Route_104_2/scripts.pory"
	.string "Ugh, I guess you win.$"
