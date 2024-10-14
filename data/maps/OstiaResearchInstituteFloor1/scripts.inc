OstiaResearchInstituteFloor1_MapScripts::
# 2 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaResearchInstituteFloor1
	.byte 0


SetUpOstiaResearchInstituteFloor1::
# 6 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpOstiaResearchInstituteFloor1_1
	return

SetUpOstiaResearchInstituteFloor1_1:
# 7 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	setflag FLAG_TEMP_1
	return


OstiaResearchDisplay::
# 12 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	lock
# 13 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	msgbox OstiaResearchDisplay_Text_0
# 15 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	release
	return


OstiaResearchExcitedBoy::
# 19 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	lock
# 20 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	faceplayer
# 21 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	msgbox OstiaResearchExcitedBoy_Text_0
# 24 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	applymovement 3, FaceRight
# 25 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	waitmovement 0
# 26 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	release
	return


OstiaResearchGrandma::
# 30 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	lock
# 31 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	faceplayer
# 32 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	msgbox OstiaResearchGrandma_Text_0
# 37 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	release
	return


OstiaResearchGalleryScientist::
# 41 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	lock
# 42 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	faceplayer
# 43 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	msgbox OstiaResearchGalleryScientist_Text_0
# 48 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	release
	return


OstiaResearchCounterLady::
# 52 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	lock
# 53 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	faceplayer
# 54 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	msgbox OstiaResearchCounterLady_Text_0
# 57 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	release
	return


OstiaResearchCounterMan::
# 61 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	lock
# 62 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	faceplayer
# 63 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	msgbox OstiaResearchCounterMan_Text_0
# 67 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	release
	return


OstiaResearchDisplay_Text_0:
# 13 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	.string "It's a glass display showing a fossil of\n"
	.string "an ancient pokémon.$"

OstiaResearchExcitedBoy_Text_0:
# 21 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	.string "I like looking at the fossils.\n"
	.string "It helps me imagine what the world was\l"
	.string "like so long ago.$"

OstiaResearchGrandma_Text_0:
# 32 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	.string "I take my grandson here every few\n"
	.string "days.\p"
	.string "He really gets inspired by the rocks.\p"
	.string "It does bring a smile to my face to\n"
	.string "see him so interested.$"

OstiaResearchGalleryScientist_Text_0:
# 43 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	.string "It seems that there was a great variety\n"
	.string "of pokémon roaming the planet, even in\l"
	.string "ancient times.\p"
	.string "Some fossils of those pokémon are here\n"
	.string "on display in the gallery.$"

OstiaResearchCounterLady_Text_0:
# 54 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	.string "Hello, and welcome to the Ostia Research\n"
	.string "Institute Gallery.\p"
	.string "Please enjoy the exhibits.$"

OstiaResearchCounterMan_Text_0:
# 63 "data/maps/OstiaResearchInstituteFloor1/scripts.pory"
	.string "Hello, and welcome to the Ostia Research\n"
	.string "Institute Gallery.\p"
	.string "Unfortunately, we have no active tours\n"
	.string "today. Please come back another time.$"
