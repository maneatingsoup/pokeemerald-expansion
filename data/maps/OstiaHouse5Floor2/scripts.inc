OstiaHouse5Floor2_MapScripts::
	.byte 0


OstiaHouse5Dad::
# 4 "data/maps/OstiaHouse5Floor2/scripts.pory"
	lock
# 5 "data/maps/OstiaHouse5Floor2/scripts.pory"
	faceplayer
# 6 "data/maps/OstiaHouse5Floor2/scripts.pory"
	switch VAR_TEMP_0
# 7 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 0, OstiaHouse5Dad_3
# 14 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 1, OstiaHouse5Dad_4
# 23 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 2, OstiaHouse5Dad_5
# 31 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 3, OstiaHouse5Dad_6
# 44 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 4, OstiaHouse5Dad_7
# 52 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 5, OstiaHouse5Dad_8
# 60 "data/maps/OstiaHouse5Floor2/scripts.pory"
	case 6, OstiaHouse5Dad_9
OstiaHouse5Dad_1:
# 67 "data/maps/OstiaHouse5Floor2/scripts.pory"
	release
	return

OstiaHouse5Dad_3:
# 8 "data/maps/OstiaHouse5Floor2/scripts.pory"
	setvar VAR_TEMP_0, 1
# 9 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_0
	goto OstiaHouse5Dad_1

OstiaHouse5Dad_4:
# 15 "data/maps/OstiaHouse5Floor2/scripts.pory"
	setvar VAR_TEMP_0, 2
# 16 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_1
	goto OstiaHouse5Dad_1

OstiaHouse5Dad_5:
# 24 "data/maps/OstiaHouse5Floor2/scripts.pory"
	setvar VAR_TEMP_0, 3
# 25 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_2
	goto OstiaHouse5Dad_1

OstiaHouse5Dad_6:
# 32 "data/maps/OstiaHouse5Floor2/scripts.pory"
	setvar VAR_TEMP_0, 4
# 33 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_3
	goto OstiaHouse5Dad_1

OstiaHouse5Dad_7:
# 45 "data/maps/OstiaHouse5Floor2/scripts.pory"
	setvar VAR_TEMP_0, 5
# 46 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_4
	goto OstiaHouse5Dad_1

OstiaHouse5Dad_8:
# 53 "data/maps/OstiaHouse5Floor2/scripts.pory"
	setvar VAR_TEMP_0, 6
# 54 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_5
	goto OstiaHouse5Dad_1

OstiaHouse5Dad_9:
# 61 "data/maps/OstiaHouse5Floor2/scripts.pory"
	msgbox OstiaHouse5Dad_Text_6
	goto OstiaHouse5Dad_1


OstiaHouse5Dad_Text_0:
# 9 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "I'm doing my taxes for the year.\p"
	.string "...\p"
	.string "...\p"
	.string "I sure do love doing taxes.$"

OstiaHouse5Dad_Text_1:
# 16 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "I bet you're wondering how my entire\n"
	.string "family fits in that tiny bed over there.\p"
	.string "...\p"
	.string "We don't.\p"
	.string "I sleep on this here table and my wife\n"
	.string "sleeps on the couch.$"

OstiaHouse5Dad_Text_2:
# 25 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "Wanna subscribe to my OnlyFans?\p"
	.string "Some of my scenes involve peanut butter,\n"
	.string "and in others I wear assless overalls.\p"
	.string "But, in all of them, I pretend to be\n"
	.string "Super Man.$"

OstiaHouse5Dad_Text_3:
# 33 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "You know, I don't really understand\n"
	.string "anything about doing taxes.\p"
	.string "I've just been writing big numbers in\n"
	.string "the boxes and hoped the IRS doesn't\l"
	.string "come for me. Which they haven't done\l"
	.string "yet. So that means I must be doing a\l"
	.string "great job.\p"
	.string "...\p"
	.string "Maybe I do know a lot about doing taxes.\n"
	.string "I'd make a pretty good tax attorney.$"

OstiaHouse5Dad_Text_4:
# 46 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "Well, it's decided. I'm gonna go take the\n"
	.string "Bar Exam.\p"
	.string "If that doesn't work out, there's always\n"
	.string "my widely successful OnlyFans career\l"
	.string "to fall back on.$"

OstiaHouse5Dad_Text_5:
# 54 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "You've really helped me get my life\n"
	.string "together just by standing there.\p"
	.string "Thanks stranger, who walked into my home\n"
	.string "uninvited and came up to my bedroom.\p"
	.string "You're a real pal.$"

OstiaHouse5Dad_Text_6:
# 61 "data/maps/OstiaHouse5Floor2/scripts.pory"
	.string "Well, I better get these taxes done now.\n"
	.string "It'd be a pretty bad look to end up in\l"
	.string "prison for tax evasion while trying to\l"
	.string "be a tax attorney.$"
