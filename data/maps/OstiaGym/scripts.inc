OstiaGym_MapScripts::
# 2 "data/maps/OstiaGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaGym
	.byte 0


SetUpOstiaGym::
# 6 "data/maps/OstiaGym/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpOstiaGym_1
	return

SetUpOstiaGym_1:
# 7 "data/maps/OstiaGym/scripts.pory"
	setflag FLAG_TEMP_3
	return


OstiaGymGreeter::
# 12 "data/maps/OstiaGym/scripts.pory"
	lock
# 13 "data/maps/OstiaGym/scripts.pory"
	faceplayer
# 14 "data/maps/OstiaGym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, OstiaGymGreeter_2
# 59 "data/maps/OstiaGym/scripts.pory"
	msgbox OstiaGymGreeter_Text_2
OstiaGymGreeter_1:
# 63 "data/maps/OstiaGym/scripts.pory"
	release
	return

OstiaGymGreeter_2:
# 15 "data/maps/OstiaGym/scripts.pory"
	goto_if_unset FLAG_TEMP_2, OstiaGymGreeter_6
OstiaGymGreeter_5:
# 40 "data/maps/OstiaGym/scripts.pory"
	msgbox OstiaGymGreeter_Text_1
	goto OstiaGymGreeter_1

OstiaGymGreeter_6:
# 16 "data/maps/OstiaGym/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/OstiaGym/scripts.pory"
	msgbox OstiaGymGreeter_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/OstiaGym/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 29 "data/maps/OstiaGym/scripts.pory"
	delay 15
# 30 "data/maps/OstiaGym/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq OstiaGymGreeter_9
# 34 "data/maps/OstiaGym/scripts.pory"
	turnobject 6, DIR_SOUTH
OstiaGymGreeter_8:
# 36 "data/maps/OstiaGym/scripts.pory"
	delay 75
# 37 "data/maps/OstiaGym/scripts.pory"
	faceplayer
# 38 "data/maps/OstiaGym/scripts.pory"
	delay 15
	goto OstiaGymGreeter_5

OstiaGymGreeter_9:
# 31 "data/maps/OstiaGym/scripts.pory"
	turnobject 6, DIR_EAST
	goto OstiaGymGreeter_8


GymLeaderJoe::
# 67 "data/maps/OstiaGym/scripts.pory"
	trainerbattle_double TRAINER_GYM_LEADER_JOE, GymLeaderJoeIntro, GymLeaderJoeLose, Dummy, GymLeaderJoePostBattle, FALSE
# 68 "data/maps/OstiaGym/scripts.pory"
	lock
# 69 "data/maps/OstiaGym/scripts.pory"
	faceplayer
# 70 "data/maps/OstiaGym/scripts.pory"
	goto_if_set FLAG_TEMP_1, GymLeaderJoe_2
# 82 "data/maps/OstiaGym/scripts.pory"
	msgbox GymLeaderJoe_Text_1, MSGBOX_AUTOCLOSE
GymLeaderJoe_1:
# 89 "data/maps/OstiaGym/scripts.pory"
	release
	return

GymLeaderJoe_2:
# 71 "data/maps/OstiaGym/scripts.pory"
	msgbox GymLeaderJoe_Text_0, MSGBOX_AUTOCLOSE
	goto GymLeaderJoe_1


GymLeaderJoePostBattle::
# 93 "data/maps/OstiaGym/scripts.pory"
	msgbox GymLeaderJoePostBattle_Text_0
# 98 "data/maps/OstiaGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 99 "data/maps/OstiaGym/scripts.pory"
	msgbox GymLeaderJoePostBattle_Text_1
# 101 "data/maps/OstiaGym/scripts.pory"
	waitfanfare
# 102 "data/maps/OstiaGym/scripts.pory"
	msgbox GymLeaderJoePostBattle_Text_2
# 110 "data/maps/OstiaGym/scripts.pory"
	giveitem ITEM_TM89_FACADE, 1
# 111 "data/maps/OstiaGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 112 "data/maps/OstiaGym/scripts.pory"
	compare VAR_GYM_BADGE_COUNT, 1
	goto_if_lt GymLeaderJoePostBattle_2
GymLeaderJoePostBattle_1:
# 115 "data/maps/OstiaGym/scripts.pory"
	setflag FLAG_TEMP_1
# 116 "data/maps/OstiaGym/scripts.pory"
	settrainerflag TRAINER_YOUNGSTER_ALEXANDER
# 117 "data/maps/OstiaGym/scripts.pory"
	settrainerflag TRAINER_LASS_ISABELLA
# 118 "data/maps/OstiaGym/scripts.pory"
	settrainerflag TRAINER_LASS_ABIGAIL
# 119 "data/maps/OstiaGym/scripts.pory"
	settrainerflag TRAINER_YOUNGSTER_NICHOLAS
# 120 "data/maps/OstiaGym/scripts.pory"
	clearflag FLAG_RIVAL_BATTLE_2
# 121 "data/maps/OstiaGym/scripts.pory"
	setvar VAR_RIVAL_ENCOUNTER, 2
# 122 "data/maps/OstiaGym/scripts.pory"
	msgbox GymLeaderJoePostBattle_Text_3
# 126 "data/maps/OstiaGym/scripts.pory"
	release
	return

GymLeaderJoePostBattle_2:
# 113 "data/maps/OstiaGym/scripts.pory"
	setvar VAR_GYM_BADGE_COUNT, 1
	goto GymLeaderJoePostBattle_1


YoungsterAlexander::
# 130 "data/maps/OstiaGym/scripts.pory"
	trainerbattle_double TRAINER_YOUNGSTER_ALEXANDER, YoungsterAlexanderIntro, YoungsterAlexanderLose, Dummy
# 131 "data/maps/OstiaGym/scripts.pory"
	msgbox YoungsterAlexander_Text_0, MSGBOX_AUTOCLOSE
	return


LassIsabella::
# 136 "data/maps/OstiaGym/scripts.pory"
	trainerbattle_double TRAINER_LASS_ISABELLA, LassIsabellaIntro, LassIsabellaLose, Dummy
# 137 "data/maps/OstiaGym/scripts.pory"
	msgbox LassIsabella_Text_0, MSGBOX_AUTOCLOSE
	return


LassAbigail::
# 142 "data/maps/OstiaGym/scripts.pory"
	trainerbattle_single TRAINER_LASS_ABIGAIL, LassAbigailIntro, LassAbigailLose
# 143 "data/maps/OstiaGym/scripts.pory"
	msgbox LassAbigail_Text_0, MSGBOX_AUTOCLOSE
	return


YoungsterNicholas::
# 147 "data/maps/OstiaGym/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_NICHOLAS, YoungsterNicholasIntro, YoungsterNicholasLose
# 148 "data/maps/OstiaGym/scripts.pory"
	msgbox YoungsterNicholas_Text_0, MSGBOX_AUTOCLOSE
	return


OstiaGymGreeter_Text_0:
# 17 "data/maps/OstiaGym/scripts.pory"
	.string "Hey there, future champion.\p"
	.string "You look like you're ready for a battle\n"
	.string "against Joe.\p"
	.string "Well, you're going to need to reach him\n"
	.string "before you can battle him.\p"
	.string "Pick one of these two doors here and\n"
	.string "head on through.\p"
	.string "But be ready, there are other trainers\n"
	.string "in there besides Joe.\p"
	.string "You might have to battle them on your\n"
	.string "way to the gym leader.$"

OstiaGymGreeter_Text_1:
# 40 "data/maps/OstiaGym/scripts.pory"
	.string "One piece of advice before you go.\p"
	.string "Joe is pretty tough, and so are his\n"
	.string "pokémon.\p"
	.string "His strongest pokémon is level 16, and\n"
	.string "you won't be able to raise yours above\l"
	.string "that level until you defeat him.\p"
	.string "You can rebattle the gym trainers as\n"
	.string "many times as you need to get your\l"
	.string "pokémon as tough as Joe's.\p"
	.string "Once you leave the gym, they'll be\n"
	.string "ready to battle you again.\p"
	.string "Keep that in mind when you're ready\n"
	.string "to take Joe on, because you'll have\l"
	.string "battle them one last time on your\l"
	.string "way to him.\p"
	.string "Alright, that's all I have.\p"
	.string "Good luck!$"

OstiaGymGreeter_Text_2:
# 59 "data/maps/OstiaGym/scripts.pory"
	.string "Hey, congrats on defeating Joe!\p"
	.string "Many new trainers struggle to take\n"
	.string "him on.$"

GymLeaderJoe_Text_0:
# 71 "data/maps/OstiaGym/scripts.pory"
	.string "Congratulations on earning the Basic\n"
	.string "Badge.\p"
	.string "Now that you have it, you'll be able to\n"
	.string "use the Hidden Move Cut outside of\l"
	.string "battle.\p"
	.string "You don't need to teach the move to a\n"
	.string "pokémon to use it in the field.\p"
	.string "Just having the Hidden Machine and a\n"
	.string "pokémon that can learn it will do.$"

GymLeaderJoe_Text_1:
# 82 "data/maps/OstiaGym/scripts.pory"
	.string "Hey kid, good to see you again.\n"
	.string "How is your adventure going?\p"
	.string "...\p"
	.string "Ah, glad to hear you keep toughening up.\p"
	.string "You might have what it takes to take on\n"
	.string "the pokémon league some day.$"

GymLeaderJoePostBattle_Text_0:
# 93 "data/maps/OstiaGym/scripts.pory"
	.string "I have to admit, it's been a while since\n"
	.string "I've been defeated.\p"
	.string "You battled well.\p"
	.string "So here, take this Gym Badge as proof\n"
	.string "you beat me.$"

GymLeaderJoePostBattle_Text_1:
# 99 "data/maps/OstiaGym/scripts.pory"
	.string "{PLAYER} received the Basic Badge from\n"
	.string "Ostia's Gym Leader!$"

GymLeaderJoePostBattle_Text_2:
# 102 "data/maps/OstiaGym/scripts.pory"
	.string "With that badge, you can raise your\n"
	.string "pokémon up to level 25.\p"
	.string "It will also allow you to use the Hidden\n"
	.string "Move Cut outside of battle.\p"
	.string "As long as you have the Hidden Machine\n"
	.string "and a pokémon in your party is able to\l"
	.string "learn it, you can cut down small trees.\p"
	.string "You should take this too.$"

GymLeaderJoePostBattle_Text_3:
# 122 "data/maps/OstiaGym/scripts.pory"
	.string "That Technical Machine will teach the\n"
	.string "move Facade.\p"
	.string "When your pokemon has a status ailment,\n"
	.string "that move will deal huge damage!$"

YoungsterAlexander_Text_0:
# 131 "data/maps/OstiaGym/scripts.pory"
	.string "You might wanna head through the other\n"
	.string "door if you're looking for Joe.$"

LassIsabella_Text_0:
# 137 "data/maps/OstiaGym/scripts.pory"
	.string "You're gonna have to head back. This\n"
	.string "way is a dead end.$"

LassAbigail_Text_0:
# 143 "data/maps/OstiaGym/scripts.pory"
	.string "Go on, the gym leader is just ahead.\n$"

YoungsterNicholas_Text_0:
# 148 "data/maps/OstiaGym/scripts.pory"
	.string "You might be tough, but you're not\n"
	.string "gonna beat Joe so easily!$"

GymLeaderJoeIntro::
# 152 "data/maps/OstiaGym/scripts.pory"
	.string "Hey.\p"
	.string "You're here for a pokémon battle I\n"
	.string "assume.\p"
	.string "I'm Joe, the gym leader here in Ostia.\n"
	.string "I like to use Normal type pokémon, and\l"
	.string "they can be pretty tough.\p"
	.string "I'll show you.\p"
	.string "Now, let's begin.$"

GymLeaderJoeLose::
# 163 "data/maps/OstiaGym/scripts.pory"
	.string "Hmph, well done.$"

YoungsterAlexanderIntro::
# 167 "data/maps/OstiaGym/scripts.pory"
	.string "You think you're ready to face Joe?\n"
	.string "I'll be the judge of that!$"

YoungsterAlexanderLose::
# 172 "data/maps/OstiaGym/scripts.pory"
	.string "I guess you are ready...$"

LassIsabellaIntro::
# 176 "data/maps/OstiaGym/scripts.pory"
	.string "Looks like you went the wrong way!$"

LassIsabellaLose::
# 180 "data/maps/OstiaGym/scripts.pory"
	.string "Drat!$"

LassAbigailIntro::
# 184 "data/maps/OstiaGym/scripts.pory"
	.string "You'll have to beat me if you want\n"
	.string "to have a battle with Joe!$"

LassAbigailLose::
# 189 "data/maps/OstiaGym/scripts.pory"
	.string "Oh, wow. You're really strong.$"

YoungsterNicholasIntro::
# 193 "data/maps/OstiaGym/scripts.pory"
	.string "You don't look so tough.$"

YoungsterNicholasLose::
# 197 "data/maps/OstiaGym/scripts.pory"
	.string "You're stronger than you look!$"
