OstiaHouse3_MapScripts::
# 2 "data/maps/OstiaHouse3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaHouses
	.byte 0


OstiaHouse3Man::
# 6 "data/maps/OstiaHouse3/scripts.pory"
	lock
# 7 "data/maps/OstiaHouse3/scripts.pory"
	faceplayer
# 8 "data/maps/OstiaHouse3/scripts.pory"
	goto_if_set FLAG_OSTIA_TRADE, OstiaHouse3TradeCompleted
# 9 "data/maps/OstiaHouse3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MANKEY
# 10 "data/maps/OstiaHouse3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 11 "data/maps/OstiaHouse3/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 12 "data/maps/OstiaHouse3/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq OstiaHouse3Man_2
# 22 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3Man_Text_1, MSGBOX_YESNO
OstiaHouse3Man_1:
# 25 "data/maps/OstiaHouse3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OstiaHouse3Man_6
# 30 "data/maps/OstiaHouse3/scripts.pory"
	special ChoosePartyMon
# 31 "data/maps/OstiaHouse3/scripts.pory"
	waitstate
# 32 "data/maps/OstiaHouse3/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq OstiaHouse3Man_9
# 37 "data/maps/OstiaHouse3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 38 "data/maps/OstiaHouse3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 39 "data/maps/OstiaHouse3/scripts.pory"
	compare VAR_RESULT, SPECIES_FOMANTIS
	goto_if_ne OstiaHouse3Man_12
# 47 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3Man_Text_3, MSGBOX_YESNO
# 48 "data/maps/OstiaHouse3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OstiaHouse3Man_15
# 53 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3Man_Text_4, MSGBOX_AUTOCLOSE
# 55 "data/maps/OstiaHouse3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 56 "data/maps/OstiaHouse3/scripts.pory"
	special CreateInGameTradePokemon
# 57 "data/maps/OstiaHouse3/scripts.pory"
	special DoInGameTradeScene
# 58 "data/maps/OstiaHouse3/scripts.pory"
	waitstate
# 59 "data/maps/OstiaHouse3/scripts.pory"
	setflag FLAG_OSTIA_TRADE
# 60 "data/maps/OstiaHouse3/scripts.pory"
	goto OstiaHouse3TradeCompleted
# 61 "data/maps/OstiaHouse3/scripts.pory"
	release
	end

OstiaHouse3Man_2:
# 13 "data/maps/OstiaHouse3/scripts.pory"
	setvar VAR_TEMP_0, 1
# 14 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3Man_Text_0, MSGBOX_YESNO
	goto OstiaHouse3Man_1

OstiaHouse3Man_6:
# 26 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaTradeDeclined
# 27 "data/maps/OstiaHouse3/scripts.pory"
	release
	end

OstiaHouse3Man_9:
# 33 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaTradeDeclined
# 34 "data/maps/OstiaHouse3/scripts.pory"
	release
	end

OstiaHouse3Man_12:
# 40 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3Man_Text_2
# 44 "data/maps/OstiaHouse3/scripts.pory"
	release
	end

OstiaHouse3Man_15:
# 49 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaTradeDeclined
# 50 "data/maps/OstiaHouse3/scripts.pory"
	release
	end


OstiaHouse3TradeCompleted::
# 66 "data/maps/OstiaHouse3/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq OstiaHouse3TradeCompleted_2
# 72 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3TradeCompleted_Text_1
OstiaHouse3TradeCompleted_1:
# 75 "data/maps/OstiaHouse3/scripts.pory"
	release
	end

OstiaHouse3TradeCompleted_2:
# 67 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaHouse3TradeCompleted_Text_0
	goto OstiaHouse3TradeCompleted_1


OstiaKirlia::
# 80 "data/maps/OstiaHouse3/scripts.pory"
	lock
# 81 "data/maps/OstiaHouse3/scripts.pory"
	faceplayer
# 82 "data/maps/OstiaHouse3/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_ENCOUNTER
# 83 "data/maps/OstiaHouse3/scripts.pory"
	msgbox OstiaKirlia_Text_0
# 84 "data/maps/OstiaHouse3/scripts.pory"
	waitmoncry
# 85 "data/maps/OstiaHouse3/scripts.pory"
	release
	return


OstiaHouse3Man_Text_0:
# 14 "data/maps/OstiaHouse3/scripts.pory"
	.string "Hey, you're a pokémon trainer right?\p"
	.string "I've been trying to find a Fomantis to\n"
	.string "catch for the last couple weeks.\p"
	.string "Do you have one you'd be willing to part\n"
	.string "with? I'd be happy to trade you my\l"
	.string "Mankey in exchange for it.$"

OstiaHouse3Man_Text_1:
# 22 "data/maps/OstiaHouse3/scripts.pory"
	.string "Oh, have you changed your mind?\p"
	.string "I'll trade my MAnkey for a Fomantis.$"

OstiaHouse3Man_Text_2:
# 40 "data/maps/OstiaHouse3/scripts.pory"
	.string "Umm...\p"
	.string "I don't think that's a Fomantis.\p"
	.string "If you wanna trade for my Mankey, you\n"
	.string "need to bring a Fomantis to trade me.$"

OstiaHouse3Man_Text_3:
# 47 "data/maps/OstiaHouse3/scripts.pory"
	.string "Oh, really? You'd trade me this Fomantis?$"

OstiaHouse3Man_Text_4:
# 53 "data/maps/OstiaHouse3/scripts.pory"
	.string "Wow, thank you so much! Let's start the\n"
	.string "trade right now.$"

OstiaHouse3TradeCompleted_Text_0:
# 67 "data/maps/OstiaHouse3/scripts.pory"
	.string "Thanks for trading! I was starting\n"
	.string "to think I'd never have a Fomantis.\p"
	.string "Be sure to take good care of Mankey.$"

OstiaHouse3TradeCompleted_Text_1:
# 72 "data/maps/OstiaHouse3/scripts.pory"
	.string "How are you and Mankey doing?\n"
	.string "Fomantis and I get along well.$"

OstiaKirlia_Text_0:
# 83 "data/maps/OstiaHouse3/scripts.pory"
	.string "Kyuuuu!$"

OstiaTradeDeclined::
# 88 "data/maps/OstiaHouse3/scripts.pory"
	.string "Oh, that's too bad. Fomantis is a really\n"
	.string "cool pokémon. I hope I find one soon.\p"
	.string "Well, if you change your mind, I'll\n"
	.string "still offer to trade my Mankey.$"
