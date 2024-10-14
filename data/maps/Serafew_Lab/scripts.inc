Serafew_Lab_MapScripts::
# 2 "data/maps/Serafew_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SerafewLabOnLoad
# 3 "data/maps/Serafew_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpSerafewLab
# 4 "data/maps/Serafew_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Serafew_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Serafew_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Serafew_Lab/scripts.pory"
	map_script_2 VAR_SERAFEW_STATE, 1, ProfessorGreeting
	.2byte 0


SerafewLabOnLoad::
# 10 "data/maps/Serafew_Lab/scripts.pory"
	call MoveProfessor
# 11 "data/maps/Serafew_Lab/scripts.pory"
	compare_var_to_value VAR_SERAFEW_STATE, 3
# 12 "data/maps/Serafew_Lab/scripts.pory"
	goto_if_gt SerafewLabRemoveTable
	return


SerafewLabRemoveTable::
# 16 "data/maps/Serafew_Lab/scripts.pory"
	setmetatile 5, 3, 0x22A, FALSE
# 17 "data/maps/Serafew_Lab/scripts.pory"
	setmetatile 6, 3, 0x22A, FALSE
# 18 "data/maps/Serafew_Lab/scripts.pory"
	setmetatile 7, 3, 0x22A, FALSE
# 19 "data/maps/Serafew_Lab/scripts.pory"
	setmetatile 5, 4, 0x22A, FALSE
# 20 "data/maps/Serafew_Lab/scripts.pory"
	setmetatile 6, 4, 0x22A, FALSE
# 21 "data/maps/Serafew_Lab/scripts.pory"
	setmetatile 7, 4, 0x22A, FALSE
	return


SetUpSerafewLab::
# 25 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_1
# 26 "data/maps/Serafew_Lab/scripts.pory"
	goto_if_set FLAG_FAT_MAN, SetUpSerafewLab_2
SetUpSerafewLab_1:
# 29 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_SERAFEW_STATE, 3
	goto_if_lt SetUpSerafewLab_5
SetUpSerafewLab_4:
# 32 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpSerafewLab_8
SetUpSerafewLab_7:
# 37 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_SERAFEW_STATE, 3
	goto_if_gt SetUpSerafewLab_10
# 43 "data/maps/Serafew_Lab/scripts.pory"
	switch VAR_STARTER_MON
# 46 "data/maps/Serafew_Lab/scripts.pory"
	case SPECIES_CHESPIN, SetUpSerafewLab_15
# 49 "data/maps/Serafew_Lab/scripts.pory"
	case SPECIES_MAGBY, SetUpSerafewLab_16
# 52 "data/maps/Serafew_Lab/scripts.pory"
	case SPECIES_SPHEAL, SetUpSerafewLab_17
	return

SetUpSerafewLab_2:
# 27 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_2
	goto SetUpSerafewLab_1

SetUpSerafewLab_5:
# 30 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_3
	goto SetUpSerafewLab_4

SetUpSerafewLab_8:
# 33 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_2
# 34 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_3
# 35 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_4
	goto SetUpSerafewLab_7

SetUpSerafewLab_10:
# 38 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_A
# 39 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_B
# 40 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_C
	return

SetUpSerafewLab_15:
# 47 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_A
	return

SetUpSerafewLab_16:
# 50 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_B
	return

SetUpSerafewLab_17:
# 53 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_C
	return


ProfessorLabScientist1::
# 60 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 61 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 62 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorLabScientist1_Text_0
# 68 "data/maps/Serafew_Lab/scripts.pory"
	release
	return


ProfessorLabScientist2::
# 72 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 73 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorLabScientist2_Text_0
# 75 "data/maps/Serafew_Lab/scripts.pory"
	release
	return


GetMonDebug::
# 79 "data/maps/Serafew_Lab/scripts.pory"
	lockall
# 80 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DEOXYS
# 81 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_DEOXYS
# 82 "data/maps/Serafew_Lab/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 83 "data/maps/Serafew_Lab/scripts.pory"
	playmoncry VAR_TEMP_2, CRY_MODE_ENCOUNTER
# 84 "data/maps/Serafew_Lab/scripts.pory"
	waitmoncry
# 85 "data/maps/Serafew_Lab/scripts.pory"
	msgbox GetMonDebug_Text_0, MSGBOX_YESNO
# 86 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GetMonDebug_2
# 112 "data/maps/Serafew_Lab/scripts.pory"
	hidemonpic
GetMonDebug_1:
# 114 "data/maps/Serafew_Lab/scripts.pory"
	waitmessage
# 115 "data/maps/Serafew_Lab/scripts.pory"
	releaseall
	end

GetMonDebug_2:
# 87 "data/maps/Serafew_Lab/scripts.pory"
	givemon VAR_TEMP_2, 100
# 88 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GetMonDebug_5
# 97 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GetMonDebug_6
# 107 "data/maps/Serafew_Lab/scripts.pory"
	hidemonpic
# 108 "data/maps/Serafew_Lab/scripts.pory"
	msgbox GetMonDebug_Text_2
	goto GetMonDebug_1

GetMonDebug_5:
# 89 "data/maps/Serafew_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 90 "data/maps/Serafew_Lab/scripts.pory"
	msgbox GetMonDebug_Text_1
# 91 "data/maps/Serafew_Lab/scripts.pory"
	waitfanfare
# 92 "data/maps/Serafew_Lab/scripts.pory"
	removeobject 5
# 93 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_DEBUG_MON
# 94 "data/maps/Serafew_Lab/scripts.pory"
	call NicknamePartyMon
# 95 "data/maps/Serafew_Lab/scripts.pory"
	call GiveDebugItems
	goto GetMonDebug_1

GetMonDebug_6:
# 98 "data/maps/Serafew_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 99 "data/maps/Serafew_Lab/scripts.pory"
	msgbox GetMonDebug_Text_1
# 100 "data/maps/Serafew_Lab/scripts.pory"
	waitfanfare
# 101 "data/maps/Serafew_Lab/scripts.pory"
	removeobject 5
# 102 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_DEBUG_MON
# 103 "data/maps/Serafew_Lab/scripts.pory"
	call NicknameBoxMon
# 104 "data/maps/Serafew_Lab/scripts.pory"
	call GiveDebugItems
	goto GetMonDebug_1


GiveDebugItems::
# 120 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_RARE_CANDY, 99
# 121 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_METEORITE, 1
# 122 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_FLAME_GENE, 1
# 123 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_SPLASH_GENE, 1
# 124 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_ZAP_GENE, 1
# 125 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_MEADOW_GENE, 1
# 126 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_ICICLE_GENE, 1
# 127 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_FIST_GENE, 1
# 128 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_TOXIC_GENE, 1
# 129 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_EARTH_GENE, 1
# 130 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_SKY_GENE, 1
# 131 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_MIND_GENE, 1
# 132 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_INSECT_GENE, 1
# 133 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_STONE_GENE, 1
# 134 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_SPOOKY_GENE, 1
# 135 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_DRACO_GENE, 1
# 136 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_DREAD_GENE, 1
# 137 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_IRON_GENE, 1
# 138 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_PIXIE_GENE, 1
# 139 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_BLANK_GENE, 1
# 140 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 141 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 142 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 143 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 144 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE01_GET
# 145 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE02_GET
# 146 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE03_GET
# 147 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE04_GET
# 148 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE05_GET
# 149 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE06_GET
# 150 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE07_GET
# 151 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_BADGE08_GET
# 152 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 153 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM01
# 154 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM05
# 155 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM03
# 156 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM04
# 157 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM05
# 158 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM06
# 159 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM07
# 160 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_RECEIVED_HM08
	return


NicknameBoxMon::
# 164 "data/maps/Serafew_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 166 "data/maps/Serafew_Lab/scripts.pory"
	hidemonpic
# 167 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
# 168 "data/maps/Serafew_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


NicknamePartyMon::
# 174 "data/maps/Serafew_Lab/scripts.pory"
	msgbox NicknameBoxMon_Text_0, MSGBOX_YESNO
# 176 "data/maps/Serafew_Lab/scripts.pory"
	hidemonpic
# 177 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 178 "data/maps/Serafew_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 179 "data/maps/Serafew_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


InitializeStarterSelectionLeft::
# 184 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 185 "data/maps/Serafew_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, InitializeStarterSelectionLeft_2
# 191 "data/maps/Serafew_Lab/scripts.pory"
	msgbox OnlyOne
InitializeStarterSelectionLeft_1:
# 193 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

InitializeStarterSelectionLeft_2:
# 186 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_CHESPIN
# 187 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_0, 1
# 188 "data/maps/Serafew_Lab/scripts.pory"
	call SelectStarterPokemon
	goto InitializeStarterSelectionLeft_1


InitializeStarterSelectionMiddle::
# 197 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 198 "data/maps/Serafew_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, InitializeStarterSelectionMiddle_2
# 204 "data/maps/Serafew_Lab/scripts.pory"
	msgbox OnlyOne
InitializeStarterSelectionMiddle_1:
# 206 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

InitializeStarterSelectionMiddle_2:
# 199 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_MAGBY
# 200 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_0, 2
# 201 "data/maps/Serafew_Lab/scripts.pory"
	call SelectStarterPokemon
	goto InitializeStarterSelectionMiddle_1


InitializeStarterSelectionRight::
# 210 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 211 "data/maps/Serafew_Lab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, InitializeStarterSelectionRight_2
# 217 "data/maps/Serafew_Lab/scripts.pory"
	msgbox OnlyOne
InitializeStarterSelectionRight_1:
# 219 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

InitializeStarterSelectionRight_2:
# 212 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_SPHEAL
# 213 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_0, 3
# 214 "data/maps/Serafew_Lab/scripts.pory"
	call SelectStarterPokemon
	goto InitializeStarterSelectionRight_1


SelectStarterPokemon::
# 223 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 224 "data/maps/Serafew_Lab/scripts.pory"
	showmonpic VAR_STARTER_MON, 10, 3
# 225 "data/maps/Serafew_Lab/scripts.pory"
	playmoncry VAR_STARTER_MON, CRY_MODE_ENCOUNTER
# 226 "data/maps/Serafew_Lab/scripts.pory"
	waitmoncry
# 227 "data/maps/Serafew_Lab/scripts.pory"
	delay 40
# 228 "data/maps/Serafew_Lab/scripts.pory"
	msgbox SelectStarterPokemon_Text_0, MSGBOX_YESNO
# 229 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SelectStarterPokemon_1
# 254 "data/maps/Serafew_Lab/scripts.pory"
	hidemonpic
	return

SelectStarterPokemon_1:
# 230 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 231 "data/maps/Serafew_Lab/scripts.pory"
	switch VAR_STARTER_MON
# 232 "data/maps/Serafew_Lab/scripts.pory"
	case SPECIES_CHESPIN, SelectStarterPokemon_6
# 235 "data/maps/Serafew_Lab/scripts.pory"
	case SPECIES_MAGBY, SelectStarterPokemon_7
# 238 "data/maps/Serafew_Lab/scripts.pory"
	case SPECIES_SPHEAL, SelectStarterPokemon_8
SelectStarterPokemon_4:
# 242 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 243 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_SERAFEW_STATE, 3
# 244 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 245 "data/maps/Serafew_Lab/scripts.pory"
	givemon VAR_STARTER_MON, 5
# 246 "data/maps/Serafew_Lab/scripts.pory"
	removeobject VAR_TEMP_0
# 247 "data/maps/Serafew_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 248 "data/maps/Serafew_Lab/scripts.pory"
	msgbox GetMonDebug_Text_1
# 249 "data/maps/Serafew_Lab/scripts.pory"
	waitfanfare
# 250 "data/maps/Serafew_Lab/scripts.pory"
	call NicknamePartyMon
# 251 "data/maps/Serafew_Lab/scripts.pory"
	call ProfessorChoseMon
	return

SelectStarterPokemon_6:
# 233 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_A
	goto SelectStarterPokemon_4

SelectStarterPokemon_7:
# 236 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_B
	goto SelectStarterPokemon_4

SelectStarterPokemon_8:
# 239 "data/maps/Serafew_Lab/scripts.pory"
	setflag FLAG_TEMP_C
	goto SelectStarterPokemon_4


ProfessorGreeting::
# 259 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 260 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_SERAFEW_STATE, 2
# 261 "data/maps/Serafew_Lab/scripts.pory"
	playse SE_PIN
# 262 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, ProfessorNotice
# 263 "data/maps/Serafew_Lab/scripts.pory"
	waitse
# 264 "data/maps/Serafew_Lab/scripts.pory"
	delay 30
# 265 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorGreeting_Text_0, MSGBOX_AUTOCLOSE
# 266 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, ProfessorMeetsPlayer
# 267 "data/maps/Serafew_Lab/scripts.pory"
	waitmovement 0
# 268 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorGreeting_Text_1, MSGBOX_AUTOCLOSE
# 273 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, ProfessorWalkUp
# 274 "data/maps/Serafew_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkUp
# 275 "data/maps/Serafew_Lab/scripts.pory"
	waitmovement 4
# 276 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorGreeting_Text_2, MSGBOX_AUTOCLOSE
# 287 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, WalkRightFaceLeft
# 288 "data/maps/Serafew_Lab/scripts.pory"
	waitmovement 0
# 289 "data/maps/Serafew_Lab/scripts.pory"
	release
	return


MoveProfessor::
# 293 "data/maps/Serafew_Lab/scripts.pory"
	switch VAR_SERAFEW_STATE
# 294 "data/maps/Serafew_Lab/scripts.pory"
	case 0, MoveProfessor_2
# 295 "data/maps/Serafew_Lab/scripts.pory"
	case 1, MoveProfessor_2
# 297 "data/maps/Serafew_Lab/scripts.pory"
	case 2, MoveProfessor_3
# 298 "data/maps/Serafew_Lab/scripts.pory"
	case 3, MoveProfessor_3
# 303 "data/maps/Serafew_Lab/scripts.pory"
	setobjectxyperm 4, 6, 4
# 304 "data/maps/Serafew_Lab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return

MoveProfessor_2:
	return

MoveProfessor_3:
# 299 "data/maps/Serafew_Lab/scripts.pory"
	setobjectxyperm 4, 8, 5
# 300 "data/maps/Serafew_Lab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	return


ProfessorMasterScript::
# 310 "data/maps/Serafew_Lab/scripts.pory"
	switch VAR_SERAFEW_STATE
# 311 "data/maps/Serafew_Lab/scripts.pory"
	case 2, ProfessorMasterScript_2
# 312 "data/maps/Serafew_Lab/scripts.pory"
	case 3, ProfessorMasterScript_3
# 313 "data/maps/Serafew_Lab/scripts.pory"
	case 4, ProfessorMasterScript_4
# 314 "data/maps/Serafew_Lab/scripts.pory"
	case 5, ProfessorMasterScript_5
# 315 "data/maps/Serafew_Lab/scripts.pory"
	case 6, ProfessorMasterScript_6
# 316 "data/maps/Serafew_Lab/scripts.pory"
	case 7, ProfessorMasterScript_7
	return

ProfessorMasterScript_2:
# 311 "data/maps/Serafew_Lab/scripts.pory"
	goto ProfessorState2
	return

ProfessorMasterScript_3:
# 312 "data/maps/Serafew_Lab/scripts.pory"
	goto ProfessorState3
	return

ProfessorMasterScript_4:
# 313 "data/maps/Serafew_Lab/scripts.pory"
	goto ProfessorState4
	return

ProfessorMasterScript_5:
# 314 "data/maps/Serafew_Lab/scripts.pory"
	goto ProfessorState5
	return

ProfessorMasterScript_6:
# 315 "data/maps/Serafew_Lab/scripts.pory"
	goto ProfessorState5
	return

ProfessorMasterScript_7:
# 316 "data/maps/Serafew_Lab/scripts.pory"
	goto ProfessorState7
	return


ProfessorState2::
# 321 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 322 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 323 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq ProfessorState2_2
# 341 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ProfessorState2_3
ProfessorState2_1:
# 365 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

ProfessorState2_2:
# 324 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 325 "data/maps/Serafew_Lab/scripts.pory"
	checkplayergender
# 326 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ProfessorState2_6
# 334 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState2_Text_1
	goto ProfessorState2_1

ProfessorState2_3:
# 342 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState2_Text_2, MSGBOX_YESNO
# 345 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorState2_9
# 352 "data/maps/Serafew_Lab/scripts.pory"
	checkplayergender
# 353 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ProfessorState2_12
# 359 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState2_Text_5
	goto ProfessorState2_1

ProfessorState2_6:
# 327 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState2_Text_0
	goto ProfessorState2_1

ProfessorState2_9:
# 346 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState2_Text_3
	goto ProfessorState2_1

ProfessorState2_12:
# 354 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState2_Text_4
	goto ProfessorState2_1


ProfessorState3::
# 369 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 370 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 371 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_CHESPIN
	goto_if_eq ProfessorState3_2
# 374 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_MAGBY
	goto_if_eq ProfessorState3_3
# 377 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_STARTER_MON, SPECIES_SPHEAL
	goto_if_eq ProfessorState3_4
ProfessorState3_1:
# 380 "data/maps/Serafew_Lab/scripts.pory"
	checkplayergender
# 381 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ProfessorState3_9
# 388 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState3_Text_1
ProfessorState3_8:
# 393 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

ProfessorState3_2:
# 372 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGBY
	goto ProfessorState3_1

ProfessorState3_3:
# 375 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SPHEAL
	goto ProfessorState3_1

ProfessorState3_4:
# 378 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESPIN
	goto ProfessorState3_1

ProfessorState3_9:
# 382 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState3_Text_0
	goto ProfessorState3_8


ProfessorState4::
# 397 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 398 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 399 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq ProfessorState4_2
# 419 "data/maps/Serafew_Lab/scripts.pory"
	checkplayergender
# 420 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ProfessorState4_8
# 425 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState4_Text_4
ProfessorState4_1:
# 429 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

ProfessorState4_2:
# 400 "data/maps/Serafew_Lab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 401 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 402 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState4_Text_0, MSGBOX_YESNO
# 406 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ProfessorState4_5
# 412 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState4_Text_2
	goto ProfessorState4_1

ProfessorState4_5:
# 407 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState4_Text_1
	goto ProfessorState4_1

ProfessorState4_8:
# 421 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState4_Text_3
	goto ProfessorState4_1


ProfessorState5::
# 433 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 434 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 435 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState5_Text_0
# 442 "data/maps/Serafew_Lab/scripts.pory"
	release
	return


ProfessorState7::
# 446 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 447 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 448 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorState7_Text_0
# 460 "data/maps/Serafew_Lab/scripts.pory"
	release
	return


ProfessorChoseMon::
# 464 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 465 "data/maps/Serafew_Lab/scripts.pory"
	delay 20
# 466 "data/maps/Serafew_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 467 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq ProfessorChoseMon_2
# 470 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq ProfessorChoseMon_3
# 473 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq ProfessorChoseMon_4
ProfessorChoseMon_1:
# 476 "data/maps/Serafew_Lab/scripts.pory"
	waitmovement 4
# 477 "data/maps/Serafew_Lab/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 478 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorChoseMon_Text_0
# 486 "data/maps/Serafew_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 487 "data/maps/Serafew_Lab/scripts.pory"
	checkplayergender
# 488 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq ProfessorChoseMon_9
# 503 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorChoseMon_Text_2, MSGBOX_AUTOCLOSE
ProfessorChoseMon_8:
# 516 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq ProfessorChoseMon_13
# 519 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_0, 2
	goto_if_eq ProfessorChoseMon_14
# 522 "data/maps/Serafew_Lab/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq ProfessorChoseMon_15
ProfessorChoseMon_12:
# 525 "data/maps/Serafew_Lab/scripts.pory"
	waitmovement 0
# 526 "data/maps/Serafew_Lab/scripts.pory"
	release
	return

ProfessorChoseMon_2:
# 468 "data/maps/Serafew_Lab/scripts.pory"
	call ProfessorMoveChespin
	goto ProfessorChoseMon_1

ProfessorChoseMon_3:
# 471 "data/maps/Serafew_Lab/scripts.pory"
	call ProfessorMoveMagby
	goto ProfessorChoseMon_1

ProfessorChoseMon_4:
# 474 "data/maps/Serafew_Lab/scripts.pory"
	call ProfessorMoveSpheal
	goto ProfessorChoseMon_1

ProfessorChoseMon_9:
# 489 "data/maps/Serafew_Lab/scripts.pory"
	msgbox ProfessorChoseMon_Text_1, MSGBOX_AUTOCLOSE
	goto ProfessorChoseMon_8

ProfessorChoseMon_13:
# 517 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, ReturnChespin
	goto ProfessorChoseMon_12

ProfessorChoseMon_14:
# 520 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, ReturnMagby
	goto ProfessorChoseMon_12

ProfessorChoseMon_15:
# 523 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, ReturnSpheal
	goto ProfessorChoseMon_12


SadBoyLab::
# 530 "data/maps/Serafew_Lab/scripts.pory"
	lock
# 531 "data/maps/Serafew_Lab/scripts.pory"
	faceplayer
# 532 "data/maps/Serafew_Lab/scripts.pory"
	msgbox SadBoyLab_Text_0
# 536 "data/maps/Serafew_Lab/scripts.pory"
	release
	return


ProfessorMoveChespin::
# 540 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, MoveChespin
	return


ProfessorMoveMagby::
# 544 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, MoveMagby
	return


ProfessorMoveSpheal::
# 548 "data/maps/Serafew_Lab/scripts.pory"
	applymovement 4, MoveSpheal
	return


# 551 "data/maps/Serafew_Lab/scripts.pory"
ReturnChespin:
# 552 "data/maps/Serafew_Lab/scripts.pory"
	walk_right
# 552 "data/maps/Serafew_Lab/scripts.pory"
	walk_right
# 553 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 554 "data/maps/Serafew_Lab/scripts.pory"
	face_down
	step_end

# 557 "data/maps/Serafew_Lab/scripts.pory"
ReturnMagby:
# 558 "data/maps/Serafew_Lab/scripts.pory"
	walk_right
# 559 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 560 "data/maps/Serafew_Lab/scripts.pory"
	face_down
	step_end

# 563 "data/maps/Serafew_Lab/scripts.pory"
ReturnSpheal:
# 564 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 565 "data/maps/Serafew_Lab/scripts.pory"
	face_down
	step_end

# 568 "data/maps/Serafew_Lab/scripts.pory"
MoveChespin:
# 569 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 570 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
# 570 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
	step_end

# 573 "data/maps/Serafew_Lab/scripts.pory"
MoveMagby:
# 574 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 575 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
	step_end

# 578 "data/maps/Serafew_Lab/scripts.pory"
MoveSpheal:
# 579 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 580 "data/maps/Serafew_Lab/scripts.pory"
	face_left
	step_end

# 583 "data/maps/Serafew_Lab/scripts.pory"
ProfessorNotice:
# 584 "data/maps/Serafew_Lab/scripts.pory"
	face_left
# 585 "data/maps/Serafew_Lab/scripts.pory"
	emote_exclamation_mark
	step_end

# 588 "data/maps/Serafew_Lab/scripts.pory"
ProfessorMeetsPlayer:
# 589 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
# 589 "data/maps/Serafew_Lab/scripts.pory"
	walk_left
# 590 "data/maps/Serafew_Lab/scripts.pory"
	walk_down
	step_end

# 593 "data/maps/Serafew_Lab/scripts.pory"
ProfessorWalkUp:
# 594 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 594 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 595 "data/maps/Serafew_Lab/scripts.pory"
	walk_right
# 596 "data/maps/Serafew_Lab/scripts.pory"
	face_left
	step_end

# 599 "data/maps/Serafew_Lab/scripts.pory"
PlayerWalkUp:
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 600 "data/maps/Serafew_Lab/scripts.pory"
	walk_up
# 601 "data/maps/Serafew_Lab/scripts.pory"
	face_right
	step_end

# 604 "data/maps/Serafew_Lab/scripts.pory"
FaceRight:
# 605 "data/maps/Serafew_Lab/scripts.pory"
	face_right
	step_end

ProfessorLabScientist1_Text_0:
# 62 "data/maps/Serafew_Lab/scripts.pory"
	.string "We study pokémon in this laboratory.\p"
	.string "I bet you knew that already.\p"
	.string "More specifically, we look into pokémon\n"
	.string "habitats.\p"
	.string "We try to learn why some pokémon live\n"
	.string "in certain environments but not others.$"

ProfessorLabScientist2_Text_0:
# 73 "data/maps/Serafew_Lab/scripts.pory"
	.string "I'm a bit busy at the moment.\p"
	.string "Please do not distract me.$"

GetMonDebug_Text_0:
# 85 "data/maps/Serafew_Lab/scripts.pory"
	.string "Do you want the debug kit?$"

GetMonDebug_Text_1:
# 90 "data/maps/Serafew_Lab/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

GetMonDebug_Text_2:
# 108 "data/maps/Serafew_Lab/scripts.pory"
	.string "You don't have room.$"

NicknameBoxMon_Text_0:
# 164 "data/maps/Serafew_Lab/scripts.pory"
	.string "Would you like to give {STR_VAR_1}\n"
	.string "a nickname?$"

SelectStarterPokemon_Text_0:
# 228 "data/maps/Serafew_Lab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

ProfessorGreeting_Text_0:
# 265 "data/maps/Serafew_Lab/scripts.pory"
	.string "Oh, hey {PLAYER}.$"

ProfessorGreeting_Text_1:
# 268 "data/maps/Serafew_Lab/scripts.pory"
	.string "I didn't expect to see you here so\n"
	.string "soon!\p"
	.string "I'm sure you're excited to get out and\n"
	.string "explore, so I'll try to be brief.\p"
	.string "Why don't you follow me?$"

ProfessorGreeting_Text_2:
# 276 "data/maps/Serafew_Lab/scripts.pory"
	.string "I have a gift to give you before you\n"
	.string "leave.\p"
	.string "It'll help you get your footing\n"
	.string "out there.\p"
	.string "On the table here are three pokémon,\n"
	.string "and I'd like you to choose one.\p"
	.string "Whichever one you pick will be your\n"
	.string "partner.\p"
	.string "They're all good pokémon, so no matter\n"
	.string "which partner you choose, I'm sure you\l"
	.string "two will form a strong bond.$"

ProfessorState2_Text_0:
# 327 "data/maps/Serafew_Lab/scripts.pory"
	.string "You know, I gave my daughter the same\n"
	.string "three pokémon to choose from when she\l"
	.string "first set out on her journey.\p"
	.string "I'm eager to see if you make the same\n"
	.string "selection she did.$"

ProfessorState2_Text_1:
# 334 "data/maps/Serafew_Lab/scripts.pory"
	.string "You know, I gave my son the same three\n"
	.string "pokémon to choose from when he first\l"
	.string "set out on his journey.\p"
	.string "I'm eager to see if you make the same\n"
	.string "selection he did.$"

ProfessorState2_Text_2:
# 342 "data/maps/Serafew_Lab/scripts.pory"
	.string "What's that?\p"
	.string "You want to know which pokémon {RIVAL}\n"
	.string "chose as her first partner?$"

ProfessorState2_Text_3:
# 346 "data/maps/Serafew_Lab/scripts.pory"
	.string "Well, I think I'll let you pick your\n"
	.string "partner before I tell you.\p"
	.string "It wouldn't be good to make your choice\n"
	.string "based on someone else's.$"

ProfessorState2_Text_4:
# 354 "data/maps/Serafew_Lab/scripts.pory"
	.string "Ah, you want to keep it a surprise,\n"
	.string "I see. I'm sure she'd be happy to show\l"
	.string "you if you run into her.$"

ProfessorState2_Text_5:
# 359 "data/maps/Serafew_Lab/scripts.pory"
	.string "Ah, you want to keep it a surprise,\n"
	.string "I see. I'm sure he'd be happy to show\l"
	.string "you if you run into him.$"

ProfessorState3_Text_0:
# 382 "data/maps/Serafew_Lab/scripts.pory"
	.string "{RIVAL} chose {STR_VAR_1} as her first\n"
	.string "pokémon.\p"
	.string "Sounds like she'll have the upper hand\n"
	.string "if you two battle.$"

ProfessorState3_Text_1:
# 388 "data/maps/Serafew_Lab/scripts.pory"
	.string "{RIVAL} chose {STR_VAR_1} as his first\n"
	.string "pokémon.\p"
	.string "Sounds like he'll have the upper hand\n"
	.string "if you two battle.$"

ProfessorState4_Text_0:
# 402 "data/maps/Serafew_Lab/scripts.pory"
	.string "Hey {PLAYER}, how are you and {STR_VAR_1}\n"
	.string "doing?\p"
	.string "Have you two become good friends\n"
	.string "already?$"

ProfessorState4_Text_1:
# 407 "data/maps/Serafew_Lab/scripts.pory"
	.string "I'm glad to hear that!\p"
	.string "I'm sure your bond will continue to\n"
	.string "grow as you two travel.$"

ProfessorState4_Text_2:
# 412 "data/maps/Serafew_Lab/scripts.pory"
	.string "I see.\p"
	.string "Well, these things take time.\p"
	.string "Give it a while, I'm sure you'll come\n"
	.string "to understand one another.$"

ProfessorState4_Text_3:
# 421 "data/maps/Serafew_Lab/scripts.pory"
	.string "Have you run into May yet?\n"
	.string "She should be at the inn in Aldus.$"

ProfessorState4_Text_4:
# 425 "data/maps/Serafew_Lab/scripts.pory"
	.string "Have you run into Brendan yet?\n"
	.string "He should be at the inn in Aldus.$"

ProfessorState5_Text_0:
# 435 "data/maps/Serafew_Lab/scripts.pory"
	.string "Hey {PLAYER}, have you run into {RIVAL}\n"
	.string "yet?\p"
	.string "...\p"
	.string "It's nice to hear you two are getting\n"
	.string "along so well.\p"
	.string "I bet you'll be seeing more of\n"
	.string "each other on your adventures.$"

ProfessorState7_Text_0:
# 448 "data/maps/Serafew_Lab/scripts.pory"
	.string "When Mitch finishes indexing the\n"
	.string "pokédex, I'll rate your progress.\p"
	.string "Until then, I'll break the fourth\n"
	.string "wall with this placeholder dialogue.\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "What? You wanna know why me and my\n"
	.string "family sleep on the floor?\l"
	.string "And where my wife is?\p"
	.string "That's too damn bad!\p"
	.string "It's a secret.$"

ProfessorChoseMon_Text_0:
# 478 "data/maps/Serafew_Lab/scripts.pory"
	.string "So, you decided that {STR_VAR_1} is going to\n"
	.string "be your partner.\p"
	.string "What a wonderful choice!\p"
	.string "You two will accomplish great things,\n"
	.string "I'm sure of it.\p"
	.string "Let's see, you'll also need some\n"
	.string "pokéballs before you go.\p"
	.string "Here, take these.$"

ProfessorChoseMon_Text_1:
# 489 "data/maps/Serafew_Lab/scripts.pory"
	.string "It's been a long time since I've caught\n"
	.string "a pokémon myself.\p"
	.string "I bet my daughter could help get you\n"
	.string "started off on the right foot.\p"
	.string "She should still be at the inn up in\n"
	.string "Aldus if you want to go find her.\p"
	.string "Well then, I don't think I'm forgetting\n"
	.string "anything.\p"
	.string "So, off you go!\p"
	.string "And don't be afraid to stop by.\n"
	.string "I'd love to hear all about your\l"
	.string "experiences when you return.$"

ProfessorChoseMon_Text_2:
# 503 "data/maps/Serafew_Lab/scripts.pory"
	.string "It's been a long time since I've caught\n"
	.string "a pokémon myself.\p"
	.string "I bet my son could help get you started\n"
	.string "off on the right foot.\p"
	.string "He should still be at the inn up in\n"
	.string "Aldus if you want to go find him.\p"
	.string "Well then, I don't think I'm forgetting\n"
	.string "anything.\p"
	.string "So, off you go!\p"
	.string "And don't be afraid to stop by.\n"
	.string "I'd love to hear all about your\l"
	.string "experiences when you return.$"

SadBoyLab_Text_0:
# 532 "data/maps/Serafew_Lab/scripts.pory"
	.string "I like to read the books here.\p"
	.string "The professor has a huge collection of\n"
	.string "knowledge about pokémon, and I want to\l"
	.string "learn everything I can.$"

OnlyOne::
# 608 "data/maps/Serafew_Lab/scripts.pory"
	.string "I better not take another...$"
