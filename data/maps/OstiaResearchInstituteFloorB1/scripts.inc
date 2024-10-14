OstiaResearchInstituteFloorB1_MapScripts::
	.byte 0


OstiaResearchMachine::
# 4 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 5 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchMachine_Text_0
# 7 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return


OstiaResearchLabScientist1::
# 11 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 12 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	faceplayer
# 13 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist1_Text_0
# 16 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return


OstiaResearchLabScientist2::
# 20 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 21 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	faceplayer
# 22 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	goto_if_set FLAG_SHELLOS_GIVE, ShellosReceived
# 23 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_0, MSGBOX_YESNO
# 25 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OstiaResearchLabScientist2_2
# 31 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_2, MSGBOX_YESNO
# 35 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OstiaResearchLabScientist2_5
# 40 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_3
# 42 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	special ChoosePartyMon
# 43 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	waitstate
# 44 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OstiaResearchLabScientist2_8
# 49 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 50 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, SPECIES_SHELLOS
	goto_if_eq OstiaResearchLabScientist2_11
# 58 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, SPECIES_SHELLOS_EAST_SEA
	goto_if_ne OstiaResearchLabScientist2_12
# 64 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_6
# 65 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	delay 60
# 67 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_7
# 77 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	givemon SPECIES_SHELLOS, 12
# 78 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OstiaResearchLabScientist2_16
# 86 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OstiaResearchLabScientist2_17
# 95 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_9
# 97 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end

OstiaResearchLabScientist2_2:
# 26 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_1
# 28 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end

OstiaResearchLabScientist2_5:
# 36 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox ShellosDeclined
# 37 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end

OstiaResearchLabScientist2_8:
# 45 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox ShellosDeclined
# 46 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end

OstiaResearchLabScientist2_11:
# 51 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_4
# 54 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end

OstiaResearchLabScientist2_12:
# 59 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_5
# 61 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end

OstiaResearchLabScientist2_15:
# 100 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_10
# 102 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return

OstiaResearchLabScientist2_16:
# 79 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHELLOS
# 81 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_8
# 82 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	waitfanfare
# 83 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	setflag FLAG_SHELLOS_GIVE
# 84 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	call NicknamePartyMon
	goto OstiaResearchLabScientist2_15

OstiaResearchLabScientist2_17:
# 87 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHELLOS
# 89 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist2_Text_8
# 90 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	waitfanfare
# 91 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	setflag FLAG_SHELLOS_GIVE
# 92 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	call NicknameBoxMon
	goto OstiaResearchLabScientist2_15


ShellosReceived::
# 106 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox ShellosReceived_Text_0
# 110 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	end


OstiaResearchLabScientist3::
# 115 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 116 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	faceplayer
# 117 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist3_Text_0
# 122 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return


OstiaResearchLabScientist4::
# 126 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 127 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	faceplayer
# 128 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchLabScientist4_Text_0
# 134 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return


OstiaResearchAccessDenied::
# 138 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 139 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	applymovement 4, FaceLeft
# 140 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	waitmovement 0
# 141 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 142 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchAccessDenied_Text_0, MSGBOX_AUTOCLOSE
# 145 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq OstiaResearchAccessDenied_2
# 149 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkDown
OstiaResearchAccessDenied_1:
# 151 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	waitmovement 0
# 152 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	applymovement 4, FaceDown
# 153 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	waitmovement 0
# 154 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return

OstiaResearchAccessDenied_2:
# 146 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkLeft
	goto OstiaResearchAccessDenied_1


OstiaResearchBlueprintsReturned::
# 158 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	lock
# 159 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	goto_if_set FLAG_OSTIA_SCIENTIST, OstiaResearchBlueprintsReturned_2
# 163 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	compare VAR_TEAM_HELIX_ENCOUNTER_SEQUENCE, 2
	goto_if_ge OstiaResearchBlueprintsReturned_5
# 191 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	call OstiaResearchBlueprintsReturnedAlternate
OstiaResearchBlueprintsReturned_1:
# 194 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	release
	return

OstiaResearchBlueprintsReturned_2:
# 160 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	call OstiaResearchBlueprintsReturnedAlternate
	goto OstiaResearchBlueprintsReturned_1

OstiaResearchBlueprintsReturned_5:
# 164 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	setflag FLAG_OSTIA_SCIENTIST
# 165 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchBlueprintsReturned_Text_0, MSGBOX_AUTOCLOSE
# 167 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	delay 15
# 168 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	playse SE_PIN
# 169 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	applymovement 5, Exclamation
# 170 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	delay 60
# 171 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	faceplayer
# 172 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchBlueprintsReturned_Text_1
# 183 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 1
# 184 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchBlueprintsReturned_Text_2, MSGBOX_AUTOCLOSE
	goto OstiaResearchBlueprintsReturned_1


OstiaResearchBlueprintsReturnedAlternate::
# 198 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	faceplayer
# 199 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	msgbox OstiaResearchBlueprintsReturnedAlternate_Text_0, MSGBOX_AUTOCLOSE
# 204 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	turnobject 5, DIR_NORTH
	return


OstiaResearchMachine_Text_0:
# 5 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "It's a strange machine with an old fossil\n"
	.string "sitting inside a glass chamber.$"

OstiaResearchLabScientist1_Text_0:
# 13 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "I'm still learning how to type. When I\n"
	.string "started working here, we did all of our\l"
	.string "documentation in notebooks.$"

OstiaResearchLabScientist2_Text_0:
# 23 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "You're a pokémon trainer right?\n"
	.string "Do you have a Shellos?$"

OstiaResearchLabScientist2_Text_1:
# 26 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "I see. If you catch a Shellos, please\n"
	.string "bring it to me.$"

OstiaResearchLabScientist2_Text_2:
# 31 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "I need a sample of the mucous that\n"
	.string "coats a Shellos for my research.\p"
	.string "Would you let me take a sample from your\n"
	.string "Shellos?$"

OstiaResearchLabScientist2_Text_3:
# 40 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Oh, thank you so much!\p"
	.string "Please show me your Shellos.$"

OstiaResearchLabScientist2_Text_4:
# 51 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Wow, you caught an ancient Shellos?!\p"
	.string "That's incredible! but I need a sample\n"
	.string "from a modern day Shellos.$"

OstiaResearchLabScientist2_Text_5:
# 59 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Wait, that isn't a Shellos!\n"
	.string "I need a sample from a Shellos.$"

OstiaResearchLabScientist2_Text_6:
# 64 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Okay, this will only take a second.$"

OstiaResearchLabScientist2_Text_7:
# 68 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Wonderful! This sample will greatly help\n"
	.string "my research.\p"
	.string "As a thank you, why don't you take this\n"
	.string "Shellos with you?\p"
	.string "It's not like the one you just showed me.\n"
	.string "This Shellos is from ancient times.\p"
	.string "I won't tell you how we obtained it, but\n"
	.string "I think it's time that it gets to meet\l"
	.string "a pokémon trainer.$"

OstiaResearchLabScientist2_Text_8:
# 81 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "{PLAYER} received Shellos!$"

OstiaResearchLabScientist2_Text_9:
# 95 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Oh, it seems that you don't have room\n"
	.string "in your PC for Shellos. That's too bad.$"

OstiaResearchLabScientist2_Text_10:
# 100 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "That Shellos really is special. It might\n"
	.string "be the only of its kind around today.$"

ShellosReceived_Text_0:
# 106 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Thanks for letting me take a sample from\n"
	.string "your Shellos.\p"
	.string "With it, we'll learn a lot about how these\n"
	.string "these pokémon changed over time.$"

OstiaResearchLabScientist3_Text_0:
# 117 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Our first revival experiment was a\n"
	.string "success.\p"
	.string "With the DNA we extracted, we were able\n"
	.string "to create an ancient pokémon in the\l"
	.string "modern day.$"

OstiaResearchLabScientist4_Text_0:
# 128 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "The temporal transporter is still under\n"
	.string "construction.\p"
	.string "One day, we'll be able to send people into\n"
	.string "the past.\p"
	.string "Then, we'll be able to observe ancient\n"
	.string "pokémon in their natural habitat.$"

OstiaResearchAccessDenied_Text_0:
# 142 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "The temporal transporter is currently\n"
	.string "under construction.\p"
	.string "Please step away from the machine.$"

OstiaResearchBlueprintsReturned_Text_0:
# 165 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Hmm, but what about the issue of time\n"
	.string "dilation...$"

OstiaResearchBlueprintsReturned_Text_1:
# 172 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "Ah, you made it.\p"
	.string "Thanks again for returning those\n"
	.string "blueprints.\p"
	.string "We're working on creating a new temporal\n"
	.string "translocator.\p"
	.string "We were almost done with the temporal\n"
	.string "transporter when the part was stolen.\p"
	.string "Now, we're on track to finishing it in\n"
	.string "the near future.\p"
	.string "So, take this a thank you from everyone\n"
	.string "here at the institute.$"

OstiaResearchBlueprintsReturned_Text_2:
# 184 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "That item will let you change the\n"
	.string "ability of one of your pokémon.\p"
	.string "It's a small token when you compare it\n"
	.string "to the temporal translocator, but I\l"
	.string "hope you find it useful.$"

OstiaResearchBlueprintsReturnedAlternate_Text_0:
# 199 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "I must admit, I can hardly wait to see\n"
	.string "the ancient world with my own eyes.\p"
	.string "But I've much work to do before then.\p"
	.string "Please excuse me, but I must return\n"
	.string "to my work.$"

ShellosDeclined::
# 207 "data/maps/OstiaResearchInstituteFloorB1/scripts.pory"
	.string "But I need a sample for my research...$"
