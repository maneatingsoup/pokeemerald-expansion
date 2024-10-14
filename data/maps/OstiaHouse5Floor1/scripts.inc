OstiaHouse5Floor1_MapScripts::
# 2 "data/maps/OstiaHouse5Floor1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaHouses
	.byte 0


OstiaHouse5Mom::
# 6 "data/maps/OstiaHouse5Floor1/scripts.pory"
	lock
# 7 "data/maps/OstiaHouse5Floor1/scripts.pory"
	faceplayer
# 8 "data/maps/OstiaHouse5Floor1/scripts.pory"
	msgbox OstiaHouse5Mom_Text_0
# 12 "data/maps/OstiaHouse5Floor1/scripts.pory"
	release
	return


OstiaHouse5Daughter::
# 16 "data/maps/OstiaHouse5Floor1/scripts.pory"
	lock
# 17 "data/maps/OstiaHouse5Floor1/scripts.pory"
	faceplayer
# 18 "data/maps/OstiaHouse5Floor1/scripts.pory"
	goto_if_unset FLAG_BINDING_BAND, OstiaHouse5Daughter_2
# 30 "data/maps/OstiaHouse5Floor1/scripts.pory"
	msgbox OstiaHouse5Daughter_Text_2
OstiaHouse5Daughter_1:
# 33 "data/maps/OstiaHouse5Floor1/scripts.pory"
	release
	return

OstiaHouse5Daughter_2:
# 19 "data/maps/OstiaHouse5Floor1/scripts.pory"
	msgbox OstiaHouse5Daughter_Text_0
# 22 "data/maps/OstiaHouse5Floor1/scripts.pory"
	giveitem ITEM_BINDING_BAND, 1
# 23 "data/maps/OstiaHouse5Floor1/scripts.pory"
	setflag FLAG_BINDING_BAND
# 24 "data/maps/OstiaHouse5Floor1/scripts.pory"
	msgbox OstiaHouse5Daughter_Text_1
	goto OstiaHouse5Daughter_1


OstiaHouse5Mom_Text_0:
# 8 "data/maps/OstiaHouse5Floor1/scripts.pory"
	.string "My daughter just went through a rough\n"
	.string "breakup.\p"
	.string "But she's strong. I think she'll move on\n"
	.string "get back to being herself soon.$"

OstiaHouse5Daughter_Text_0:
# 19 "data/maps/OstiaHouse5Floor1/scripts.pory"
	.string "I just broke it off with my boyfriend.\n"
	.string "I don't have any need for this anymore.\l"
	.string "Here, take it. I don't want to see it.$"

OstiaHouse5Daughter_Text_1:
# 24 "data/maps/OstiaHouse5Floor1/scripts.pory"
	.string "Maybe you'll have someone important to\n"
	.string "give that to. If not, you should give it\l"
	.string "to one of your pokémon. I'm sure they'd\l"
	.string "appreciate it.$"

OstiaHouse5Daughter_Text_2:
# 30 "data/maps/OstiaHouse5Floor1/scripts.pory"
	.string "I'll find my soulmate one day, and I\n"
	.string "hope you do, too.$"
