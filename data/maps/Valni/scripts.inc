Valni_MapScripts::
# 2 "data/maps/Valni/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ValniOnLoad
# 3 "data/maps/Valni/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpValni
# 4 "data/maps/Valni/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ValniOnResume
	.byte 0


ValniOnLoad::
# 8 "data/maps/Valni/scripts.pory"
	compare_var_to_value VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
# 9 "data/maps/Valni/scripts.pory"
	call_if_ge ValniRemovePuddles
	return


ValniRemovePuddles::
# 13 "data/maps/Valni/scripts.pory"
	setmetatile 3, 18, METATILE_General_Grass, FALSE
# 14 "data/maps/Valni/scripts.pory"
	setmetatile 4, 18, METATILE_General_Grass, FALSE
# 15 "data/maps/Valni/scripts.pory"
	setmetatile 3, 19, METATILE_General_Grass, FALSE
# 16 "data/maps/Valni/scripts.pory"
	setmetatile 4, 19, METATILE_General_Grass, FALSE
# 17 "data/maps/Valni/scripts.pory"
	setmetatile 14, 9, METATILE_General_Grass, FALSE
# 18 "data/maps/Valni/scripts.pory"
	setmetatile 15, 9, METATILE_General_Grass, FALSE
# 19 "data/maps/Valni/scripts.pory"
	setmetatile 14, 10, METATILE_General_Grass, FALSE
# 20 "data/maps/Valni/scripts.pory"
	setmetatile 15, 10, METATILE_General_Grass, FALSE
# 21 "data/maps/Valni/scripts.pory"
	setmetatile 24, 13, METATILE_General_Grass, FALSE
# 22 "data/maps/Valni/scripts.pory"
	setmetatile 25, 13, METATILE_General_Grass, FALSE
# 23 "data/maps/Valni/scripts.pory"
	setmetatile 26, 13, METATILE_General_Grass, FALSE
# 24 "data/maps/Valni/scripts.pory"
	setmetatile 24, 14, METATILE_General_Grass, FALSE
# 25 "data/maps/Valni/scripts.pory"
	setmetatile 25, 14, METATILE_General_Grass, FALSE
# 26 "data/maps/Valni/scripts.pory"
	setmetatile 26, 14, METATILE_General_Grass, FALSE
# 27 "data/maps/Valni/scripts.pory"
	setmetatile 39, 9, METATILE_General_Grass, FALSE
# 28 "data/maps/Valni/scripts.pory"
	setmetatile 38, 9, METATILE_General_Grass, FALSE
# 29 "data/maps/Valni/scripts.pory"
	setmetatile 39, 10, METATILE_General_Grass, FALSE
# 30 "data/maps/Valni/scripts.pory"
	setmetatile 38, 10, METATILE_General_Grass, FALSE
	return


SetUpValni::
# 34 "data/maps/Valni/scripts.pory"
	special SetGroupWeather
# 35 "data/maps/Valni/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_lt SetUpValni_1
	return

SetUpValni_1:
# 36 "data/maps/Valni/scripts.pory"
	setflag FLAG_TEMP_1
# 37 "data/maps/Valni/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP
	return


ValniOnResume::
# 43 "data/maps/Valni/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
	return


ValniForestSignEast::
# 47 "data/maps/Valni/scripts.pory"
	lock
# 48 "data/maps/Valni/scripts.pory"
	msgbox ValniForestSignEast_Text_0
# 50 "data/maps/Valni/scripts.pory"
	release
	return


ValniInnSign::
# 54 "data/maps/Valni/scripts.pory"
	lock
# 55 "data/maps/Valni/scripts.pory"
	msgbox ValniInnSign_Text_0
# 57 "data/maps/Valni/scripts.pory"
	release
	return


ValniStoreSign::
# 61 "data/maps/Valni/scripts.pory"
	lock
# 62 "data/maps/Valni/scripts.pory"
	msgbox ValniStoreSign_Text_0
# 64 "data/maps/Valni/scripts.pory"
	release
	return


ValniGymSign::
# 68 "data/maps/Valni/scripts.pory"
	lock
# 69 "data/maps/Valni/scripts.pory"
	msgbox ValniGymSign_Text_0
# 72 "data/maps/Valni/scripts.pory"
	release
	return


ValniYoungLady::
# 76 "data/maps/Valni/scripts.pory"
	lock
# 77 "data/maps/Valni/scripts.pory"
	faceplayer
# 78 "data/maps/Valni/scripts.pory"
	goto_if_set FLAG_TEMP_1, ValniYoungLady_2
# 87 "data/maps/Valni/scripts.pory"
	goto_if_set FLAG_VALNI_MINT, ValniYoungLady_5
# 95 "data/maps/Valni/scripts.pory"
	msgbox ValniYoungLady_Text_2, MSGBOX_YESNO
# 97 "data/maps/Valni/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ValniYoungLady_8
# 118 "data/maps/Valni/scripts.pory"
	msgbox ValniYoungLady_Text_5
ValniYoungLady_1:
# 124 "data/maps/Valni/scripts.pory"
	release
	return

ValniYoungLady_2:
# 79 "data/maps/Valni/scripts.pory"
	msgbox ValniYoungLady_Text_0
	goto ValniYoungLady_1

ValniYoungLady_5:
# 88 "data/maps/Valni/scripts.pory"
	msgbox ValniYoungLady_Text_1
	goto ValniYoungLady_1

ValniYoungLady_8:
# 98 "data/maps/Valni/scripts.pory"
	msgbox ValniYoungLady_Text_3
# 100 "data/maps/Valni/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MAGBY
	goto_if_eq ValniYoungLady_12
# 103 "data/maps/Valni/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPHEAL
	goto_if_eq ValniYoungLady_13
# 107 "data/maps/Valni/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
ValniYoungLady_11:
# 109 "data/maps/Valni/scripts.pory"
	setflag FLAG_VALNI_MINT
# 110 "data/maps/Valni/scripts.pory"
	msgbox ValniYoungLady_Text_4
	goto ValniYoungLady_1

ValniYoungLady_12:
# 101 "data/maps/Valni/scripts.pory"
	giveitem ITEM_MODEST_MINT
	goto ValniYoungLady_11

ValniYoungLady_13:
# 104 "data/maps/Valni/scripts.pory"
	giveitem ITEM_QUIET_MINT
	goto ValniYoungLady_11


ValniBoy::
# 128 "data/maps/Valni/scripts.pory"
	lock
# 129 "data/maps/Valni/scripts.pory"
	faceplayer
# 130 "data/maps/Valni/scripts.pory"
	goto_if_set FLAG_TEMP_1, ValniBoy_2
# 134 "data/maps/Valni/scripts.pory"
	msgbox ValniBoy_Text_1
ValniBoy_1:
# 137 "data/maps/Valni/scripts.pory"
	release
	return

ValniBoy_2:
# 131 "data/maps/Valni/scripts.pory"
	msgbox ValniBoy_Text_0
	goto ValniBoy_1


ValniOldLady::
# 141 "data/maps/Valni/scripts.pory"
	lock
# 142 "data/maps/Valni/scripts.pory"
	faceplayer
# 143 "data/maps/Valni/scripts.pory"
	goto_if_set FLAG_TEMP_1, ValniOldLady_2
# 153 "data/maps/Valni/scripts.pory"
	msgbox ValniOldLady_Text_1
ValniOldLady_1:
# 159 "data/maps/Valni/scripts.pory"
	release
	return

ValniOldLady_2:
# 144 "data/maps/Valni/scripts.pory"
	msgbox ValniOldLady_Text_0
	goto ValniOldLady_1


ValniMan::
# 163 "data/maps/Valni/scripts.pory"
	lock
# 164 "data/maps/Valni/scripts.pory"
	faceplayer
# 165 "data/maps/Valni/scripts.pory"
	msgbox ValniMan_Text_0
# 170 "data/maps/Valni/scripts.pory"
	release
	return


ResetValniGymTrainers::
# 174 "data/maps/Valni/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, ResetValniGymTrainers_2
ResetValniGymTrainers_1:
# 179 "data/maps/Valni/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

ResetValniGymTrainers_2:
# 175 "data/maps/Valni/scripts.pory"
	cleartrainerflag TRAINER_PKMN_RANGER_ZACHARY
# 176 "data/maps/Valni/scripts.pory"
	cleartrainerflag TRAINER_AROMA_LADY_TAYLOR
# 177 "data/maps/Valni/scripts.pory"
	cleartrainerflag TRAINER_LADY_BRIANNA
	goto ResetValniGymTrainers_1


ValniForestSignEast_Text_0:
# 48 "data/maps/Valni/scripts.pory"
	.string "Valni Forest\n"
	.string "East Entrance$"

ValniInnSign_Text_0:
# 55 "data/maps/Valni/scripts.pory"
	.string "Canopy Inn\n"
	.string "Take a Rest Above the Ground$"

ValniStoreSign_Text_0:
# 62 "data/maps/Valni/scripts.pory"
	.string "Valni General Store\p"
	.string "Local and Imported Goods$"

ValniGymSign_Text_0:
# 69 "data/maps/Valni/scripts.pory"
	.string "Valni Gym\n"
	.string "Leader: Mycelian\p"
	.string "Holds the Grass-Type Tradition Strong$"

ValniYoungLady_Text_0:
# 79 "data/maps/Valni/scripts.pory"
	.string "I wonder if it's raining over in Ostia\n"
	.string "too.\p"
	.string "I have a twin sister there, and she\n"
	.string "loves to grow berries.\p"
	.string "I'm sure the rain would be good for\n"
	.string "her berry plants.$"

ValniYoungLady_Text_1:
# 88 "data/maps/Valni/scripts.pory"
	.string "My husband sells mints like the one\n"
	.string "I gave you.\p"
	.string "If you want to buy some, stop by our\n"
	.string "home.\p"
	.string "It's the house just passed the gym.$"

ValniYoungLady_Text_2:
# 95 "data/maps/Valni/scripts.pory"
	.string "I haven't seen you around before.\n"
	.string "Are you new to Valni?$"

ValniYoungLady_Text_3:
# 98 "data/maps/Valni/scripts.pory"
	.string "Then I'll give you this as a gift,\n"
	.string "to welcome you to our forest home.$"

ValniYoungLady_Text_4:
# 110 "data/maps/Valni/scripts.pory"
	.string "That mint was made from a plant that\n"
	.string "grows here in our forest.\p"
	.string "It has a special property that alters\n"
	.string "a pokémon's stats.\p"
	.string "Try giving it to the pokémon you think\n"
	.string "would benefit the most!$"

ValniYoungLady_Text_5:
# 118 "data/maps/Valni/scripts.pory"
	.string "Oh, I see.\p"
	.string "Apologies, I must have missed you last\n"
	.string "time you visited.$"

ValniBoy_Text_0:
# 131 "data/maps/Valni/scripts.pory"
	.string "I like to run around in the rain!$"

ValniBoy_Text_1:
# 134 "data/maps/Valni/scripts.pory"
	.string "I get to live in a treehouse!\p"
	.string "My cousins are really jealous.$"

ValniOldLady_Text_0:
# 144 "data/maps/Valni/scripts.pory"
	.string "The weather here in Valni can be\n"
	.string "quite fickle.\p"
	.string "We people might not enjoy how often\n"
	.string "it rains, but the trees that we live\l"
	.string "in do need the water.\p"
	.string "And for their sake, I am grateful for\n"
	.string "the rain.$"

ValniOldLady_Text_1:
# 153 "data/maps/Valni/scripts.pory"
	.string "I've spent my whole life here in\n"
	.string "Valni, and it's a lovely place.\p"
	.string "I have a wonderful view from my porch,\n"
	.string "and the ladder here keeps my old\l"
	.string "muscles in tip-top shape.$"

ValniMan_Text_0:
# 165 "data/maps/Valni/scripts.pory"
	.string "I tried spelunking in the Rugged Pass\n"
	.string "yesterday, but it was way too dark\l"
	.string "for me to see anything.\p"
	.string "If you're gonna try and go through,\n"
	.string "you better find a way to see.$"
