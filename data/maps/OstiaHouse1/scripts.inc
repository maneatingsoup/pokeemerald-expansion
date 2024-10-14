OstiaHouse1_MapScripts::
	.byte 0


OstiaFedUpLady::
# 4 "data/maps/OstiaHouse1/scripts.pory"
	lock
# 5 "data/maps/OstiaHouse1/scripts.pory"
	faceplayer
# 6 "data/maps/OstiaHouse1/scripts.pory"
	msgbox OstiaFedUpLady_Text_0
# 9 "data/maps/OstiaHouse1/scripts.pory"
	release
	return


OstiaCrazyTalkMan::
# 13 "data/maps/OstiaHouse1/scripts.pory"
	lock
# 14 "data/maps/OstiaHouse1/scripts.pory"
	faceplayer
# 15 "data/maps/OstiaHouse1/scripts.pory"
	msgbox OstiaCrazyTalkMan_Text_0
# 20 "data/maps/OstiaHouse1/scripts.pory"
	release
	return


OstiaFedUpLady_Text_0:
# 6 "data/maps/OstiaHouse1/scripts.pory"
	.string "My husband has been spewing crazy talk\n"
	.string "all day.\p"
	.string "I don't know what to do!$"

OstiaCrazyTalkMan_Text_0:
# 15 "data/maps/OstiaHouse1/scripts.pory"
	.string "Bleh bleeeeeh bleh bleh\p"
	.string "bleh bleeeeeh bleh bleh\p"
	.string "bleh bleh bleh\p"
	.string "blehblehblehblehblehblehblehblehbleh\n"
	.string "blehblehblehblehblehblehblehblehbleh$"
