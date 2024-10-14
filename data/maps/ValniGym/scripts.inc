ValniGym_MapScripts::
	.byte 0


ValniGymNoCatching::
# 4 "data/maps/ValniGym/scripts.pory"
	setflag FLAG_NO_CATCHING
# 5 "data/maps/ValniGym/scripts.pory"
	setflag FLAG_NO_RUNNING
# 6 "data/maps/ValniGym/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


ValniGymClearNoCatching::
# 10 "data/maps/ValniGym/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 11 "data/maps/ValniGym/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 12 "data/maps/ValniGym/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


GymLeaderMycelian::
# 16 "data/maps/ValniGym/scripts.pory"
	trainerbattle_single TRAINER_GYM_LEADER_MYCELIAN, GymLeaderMycelianIntro, GymLeaderMycelianLose, GymLeaderMycelianPostBattle, FALSE
# 17 "data/maps/ValniGym/scripts.pory"
	lock
# 18 "data/maps/ValniGym/scripts.pory"
	faceplayer
# 19 "data/maps/ValniGym/scripts.pory"
	goto_if_set FLAG_TEMP_1, GymLeaderMycelian_2
# 27 "data/maps/ValniGym/scripts.pory"
	msgbox GymLeaderMycelian_Text_1, MSGBOX_AUTOCLOSE
GymLeaderMycelian_1:
# 32 "data/maps/ValniGym/scripts.pory"
	release
	return

GymLeaderMycelian_2:
# 20 "data/maps/ValniGym/scripts.pory"
	msgbox GymLeaderMycelian_Text_0, MSGBOX_AUTOCLOSE
	goto GymLeaderMycelian_1


GymLeaderMycelianPostBattle::
# 36 "data/maps/ValniGym/scripts.pory"
	msgbox GymLeaderMycelianPostBattle_Text_0
# 39 "data/maps/ValniGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 40 "data/maps/ValniGym/scripts.pory"
	msgbox GymLeaderMycelianPostBattle_Text_1
# 42 "data/maps/ValniGym/scripts.pory"
	waitfanfare
# 43 "data/maps/ValniGym/scripts.pory"
	msgbox GymLeaderMycelianPostBattle_Text_2
# 50 "data/maps/ValniGym/scripts.pory"
	giveitem ITEM_TM76_GIGA_DRAIN
# 51 "data/maps/ValniGym/scripts.pory"
	compare VAR_GYM_BADGE_COUNT, 2
	goto_if_lt GymLeaderMycelianPostBattle_2
GymLeaderMycelianPostBattle_1:
# 54 "data/maps/ValniGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 55 "data/maps/ValniGym/scripts.pory"
	setflag FLAG_TEMP_1
# 56 "data/maps/ValniGym/scripts.pory"
	settrainerflag TRAINER_PKMN_RANGER_ZACHARY
# 57 "data/maps/ValniGym/scripts.pory"
	settrainerflag TRAINER_AROMA_LADY_TAYLOR
# 58 "data/maps/ValniGym/scripts.pory"
	settrainerflag TRAINER_LADY_BRIANNA
# 59 "data/maps/ValniGym/scripts.pory"
	msgbox GymLeaderMycelianPostBattle_Text_3, MSGBOX_AUTOCLOSE
	return

GymLeaderMycelianPostBattle_2:
# 52 "data/maps/ValniGym/scripts.pory"
	setvar VAR_GYM_BADGE_COUNT, 2
	goto GymLeaderMycelianPostBattle_1


PkmnRangerZachary::
# 66 "data/maps/ValniGym/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_ZACHARY, PkmnRangerZacharyIntro, PkmnRangerZacharyLose
# 67 "data/maps/ValniGym/scripts.pory"
	msgbox PkmnRangerZachary_Text_0, MSGBOX_AUTOCLOSE
	return


AromaLadyTaylor::
# 72 "data/maps/ValniGym/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_TAYLOR, AromaLadyTaylorIntro, AromaLadyTaylorLose
# 73 "data/maps/ValniGym/scripts.pory"
	msgbox AromaLadyTaylor_Text_0, MSGBOX_AUTOCLOSE
	return


LadyBrianna::
# 78 "data/maps/ValniGym/scripts.pory"
	trainerbattle_single TRAINER_LADY_BRIANNA, LadyBriannaIntro, LadyBriannaLose
# 79 "data/maps/ValniGym/scripts.pory"
	msgbox LadyBrianna_Text_0, MSGBOX_AUTOCLOSE
	return


GymLeaderMycelian_Text_0:
# 20 "data/maps/ValniGym/scripts.pory"
	.string "If you have the Hidden Machine\n"
	.string "containing the move Flash, you should\l"
	.string "be able to traverse the Rugged Pass.\p"
	.string "It's quite a treck, be sure to prepare\n"
	.string "before you set out.$"

GymLeaderMycelian_Text_1:
# 27 "data/maps/ValniGym/scripts.pory"
	.string "It is nice to see you again.\p"
	.string "You are always welcome here in Valni.\n"
	.string "I'm glad that you've taken a liking to\l"
	.string "its forest.$"

GymLeaderMycelianPostBattle_Text_0:
# 36 "data/maps/ValniGym/scripts.pory"
	.string "Well battled.\n"
	.string "I've been defeated.\p"
	.string "As proof of your victory, take this.$"

GymLeaderMycelianPostBattle_Text_1:
# 40 "data/maps/ValniGym/scripts.pory"
	.string "{PLAYER} received the Canopy Badge from\n"
	.string "Valni's Gym Leader!$"

GymLeaderMycelianPostBattle_Text_2:
# 43 "data/maps/ValniGym/scripts.pory"
	.string "The Canopy Badge allows its bearer to\n"
	.string "use the Hidden Move Flash outside of\l"
	.string "pokémon battles.\p"
	.string "Moreover, it will also keep your pokémon\n"
	.string "obedient up to level PLACEHOLDER.\p"
	.string "And as a gift from me to you, please\n"
	.string "take this.$"

GymLeaderMycelianPostBattle_Text_3:
# 59 "data/maps/ValniGym/scripts.pory"
	.string "That TM contains the move Giga Drain.\p"
	.string "It's a powerful move that drains the\n"
	.string "foe of their energy to restore that\l"
	.string "of its user.$"

PkmnRangerZachary_Text_0:
# 67 "data/maps/ValniGym/scripts.pory"
	.string "The pokémon here are pretty tough.\n"
	.string "Too bad we can't catch any of them.$"

AromaLadyTaylor_Text_0:
# 73 "data/maps/ValniGym/scripts.pory"
	.string "I love the scenery here. It really\n"
	.string "captures the essence of Valni.$"

LadyBrianna_Text_0:
# 79 "data/maps/ValniGym/scripts.pory"
	.string "Mycelian is just ahead.\p"
	.string "His pokémon use a powerful move that\n"
	.string "will drain your energy and restore\l"
	.string "their own at the same time.\p"
	.string "Make sure you're prepared for that!$"

GymLeaderMycelianIntro::
# 86 "data/maps/ValniGym/scripts.pory"
	.string "Welcome young one. You stand before\n"
	.string "the leader of Valni's pokémon gym.\p"
	.string "My name is Mycelian.\p"
	.string "Much like the leaders of Valni's past,\n"
	.string "I favor grass-type pokémon.\p"
	.string "It is for the bond we share with the\n"
	.string "great trees and the life that grows\l"
	.string "in the shade of their protection.\p"
	.string "That is why we have carried the\n"
	.string "tradition of raising grass-type\l"
	.string "pokémon all this time.\p"
	.string "Do you have what it takes to overcome\n"
	.string "the strength we've cultivated?\p"
	.string "We shall soon see.\p"
	.string "Ready yourself.$"

GymLeaderMycelianLose::
# 104 "data/maps/ValniGym/scripts.pory"
	.string "And so the strength of youth defeats\n"
	.string "the wisdom of age-long tradition.$"

PkmnRangerZacharyIntro::
# 109 "data/maps/ValniGym/scripts.pory"
	.string "You're gonna have to battle me if you\n"
	.string "want to avoid the wild pokémon!$"

PkmnRangerZacharyLose::
# 114 "data/maps/ValniGym/scripts.pory"
	.string "Alright, you win...$"

AromaLadyTaylorIntro::
# 118 "data/maps/ValniGym/scripts.pory"
	.string "This is such a lovely gym. It's vibrant\n"
	.string "and full of plants and pokémon.$"

AromaLadyTaylorLose::
# 123 "data/maps/ValniGym/scripts.pory"
	.string "Oh my, you're full of energy arent you.$"

LadyBriannaIntro::
# 127 "data/maps/ValniGym/scripts.pory"
	.string "Well hello there, looks like you'll be\n"
	.string "battling me before you reach Mycelian.$"

LadyBriannaLose::
# 132 "data/maps/ValniGym/scripts.pory"
	.string "I wasn't much of an obstacle for someone\n"
	.string "like you.$"
