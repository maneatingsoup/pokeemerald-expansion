OstiaHouse2_MapScripts::
# 2 "data/maps/OstiaHouse2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaHouses
	.byte 0


OstiaHouse2Boy::
# 6 "data/maps/OstiaHouse2/scripts.pory"
	lock
# 7 "data/maps/OstiaHouse2/scripts.pory"
	faceplayer
# 8 "data/maps/OstiaHouse2/scripts.pory"
	msgbox OstiaHouse2Boy_Text_0
# 11 "data/maps/OstiaHouse2/scripts.pory"
	release
	return


OstiaHouse2Woman::
# 15 "data/maps/OstiaHouse2/scripts.pory"
	lock
# 16 "data/maps/OstiaHouse2/scripts.pory"
	faceplayer
# 17 "data/maps/OstiaHouse2/scripts.pory"
	msgbox OstiaHouse2Woman_Text_0
# 19 "data/maps/OstiaHouse2/scripts.pory"
	release
	return


OstiaHouse2Boy_Text_0:
# 8 "data/maps/OstiaHouse2/scripts.pory"
	.string "I don't wanna go to school tomorrow.\n"
	.string "I have a big presentation due, and I\l"
	.string "haven't even started it yet.$"

OstiaHouse2Woman_Text_0:
# 17 "data/maps/OstiaHouse2/scripts.pory"
	.string "My son isn't very smart.\p"
	.string "At least he's good at sports.$"
