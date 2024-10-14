OstiaStore_MapScripts::
# 2 "data/maps/OstiaStore/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetUpOstiaStore
	.byte 0


SetUpOstiaStore::
# 6 "data/maps/OstiaStore/scripts.pory"
	setflag FLAG_TEMP_1
# 7 "data/maps/OstiaStore/scripts.pory"
	compare VAR_CURRENT_RANDOM_WEATHER_VALUE, 35
	goto_if_ge SetUpOstiaStore_1
# 12 "data/maps/OstiaStore/scripts.pory"
	goto_if_set FLAG_RUDE_DUDE, SetUpOstiaStore_4
	return

SetUpOstiaStore_1:
# 8 "data/maps/OstiaStore/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/OstiaStore/scripts.pory"
	setflag FLAG_TEMP_3
	return

SetUpOstiaStore_4:
# 13 "data/maps/OstiaStore/scripts.pory"
	setflag FLAG_TEMP_3
	return


OstiaStoreAromaLady::
# 19 "data/maps/OstiaStore/scripts.pory"
	lock
# 20 "data/maps/OstiaStore/scripts.pory"
	faceplayer
# 21 "data/maps/OstiaStore/scripts.pory"
	goto_if_unset FLAG_OSTIA_BERRY_2, OstiaStoreAromaLady_2
# 36 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaStoreAromaLady_Text_4
OstiaStoreAromaLady_1:
# 39 "data/maps/OstiaStore/scripts.pory"
	release
	return

OstiaStoreAromaLady_2:
# 22 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaStoreAromaLady_Text_0, MSGBOX_YESNO
# 23 "data/maps/OstiaStore/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OstiaStoreAromaLady_5
# 31 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaStoreAromaLady_Text_3
	goto OstiaStoreAromaLady_1

OstiaStoreAromaLady_5:
# 24 "data/maps/OstiaStore/scripts.pory"
	setflag FLAG_OSTIA_BERRY_2
# 25 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaStoreAromaLady_Text_1
# 27 "data/maps/OstiaStore/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 10
# 28 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaStoreAromaLady_Text_2
	goto OstiaStoreAromaLady_1


OstiaStoreAceTrainer::
# 43 "data/maps/OstiaStore/scripts.pory"
	lock
# 44 "data/maps/OstiaStore/scripts.pory"
	faceplayer
# 45 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaStoreAceTrainer_Text_0
# 50 "data/maps/OstiaStore/scripts.pory"
	release
	return


OstiaMartEmployee::
# 54 "data/maps/OstiaStore/scripts.pory"
	lock
# 55 "data/maps/OstiaStore/scripts.pory"
	faceplayer
# 56 "data/maps/OstiaStore/scripts.pory"
	message OstiaMartEmployee_Text_0
# 58 "data/maps/OstiaStore/scripts.pory"
	waitmessage
# 59 "data/maps/OstiaStore/scripts.pory"
	call CityMart
# 60 "data/maps/OstiaStore/scripts.pory"
	msgbox OstiaMartEmployee_Text_1
# 61 "data/maps/OstiaStore/scripts.pory"
	release
	return


CityMart::
# 65 "data/maps/OstiaStore/scripts.pory"
	switch VAR_GYM_BADGE_COUNT
# 66 "data/maps/OstiaStore/scripts.pory"
	case 0, CityMart_3
# 67 "data/maps/OstiaStore/scripts.pory"
	case 1, CityMart_4
# 68 "data/maps/OstiaStore/scripts.pory"
	case 2, CityMart_5
# 69 "data/maps/OstiaStore/scripts.pory"
	case 3, CityMart_6
# 70 "data/maps/OstiaStore/scripts.pory"
	case 4, CityMart_7
# 71 "data/maps/OstiaStore/scripts.pory"
	case 5, CityMart_8
# 72 "data/maps/OstiaStore/scripts.pory"
	case 6, CityMart_9
# 73 "data/maps/OstiaStore/scripts.pory"
	case 7, CityMart_10
# 74 "data/maps/OstiaStore/scripts.pory"
	case 8, CityMart_11
# 75 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges8
CityMart_1:
	return

CityMart_3:
# 66 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges0
	goto CityMart_1

CityMart_4:
# 67 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges1
	goto CityMart_1

CityMart_5:
# 68 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges2
	goto CityMart_1

CityMart_6:
# 69 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges3
	goto CityMart_1

CityMart_7:
# 70 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges4
	goto CityMart_1

CityMart_8:
# 71 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges5
	goto CityMart_1

CityMart_9:
# 72 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges6
	goto CityMart_1

CityMart_10:
# 73 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges7
	goto CityMart_1

CityMart_11:
# 74 "data/maps/OstiaStore/scripts.pory"
	pokemart MartBadges8
	goto CityMart_1


	.align 2
# 80 "data/maps/OstiaStore/scripts.pory"
MartBadges0:
# 81 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 82 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 83 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 84 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 85 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 86 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 87 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 88 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_NONE

	.align 2
# 91 "data/maps/OstiaStore/scripts.pory"
MartBadges1:
# 92 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 93 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 94 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 95 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 96 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 97 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 98 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 99 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 100 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 101 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 102 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 103 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 104 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_NONE

	.align 2
# 107 "data/maps/OstiaStore/scripts.pory"
MartBadges2:
# 108 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 109 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 110 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 111 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 112 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 113 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 114 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 115 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 116 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 117 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 118 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 119 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 120 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 121 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 122 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 123 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 124 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 125 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 126 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 129 "data/maps/OstiaStore/scripts.pory"
MartBadges3:
# 130 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 131 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 132 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 133 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 134 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NET_BALL
# 135 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 136 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 137 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 138 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 139 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 140 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SPEED
# 141 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 142 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 143 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 144 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 145 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 146 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 147 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 148 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 149 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 150 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 151 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 152 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 153 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 156 "data/maps/OstiaStore/scripts.pory"
MartBadges4:
# 157 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 158 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 159 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 160 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 161 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NET_BALL
# 162 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 163 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 164 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 165 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 166 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 167 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 168 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 169 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 170 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SPEED
# 171 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 172 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 173 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 174 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 175 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 176 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 177 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 178 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 179 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 180 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 181 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 182 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 183 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 184 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 185 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 188 "data/maps/OstiaStore/scripts.pory"
MartBadges5:
# 189 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 190 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 191 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 192 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 193 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 194 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NET_BALL
# 195 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 196 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 197 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 198 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 199 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 200 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 201 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 202 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 203 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 204 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 205 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SPEED
# 206 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 207 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 208 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 209 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 210 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 211 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 212 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 213 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 214 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 215 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 216 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 217 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 218 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 219 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 220 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 221 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 224 "data/maps/OstiaStore/scripts.pory"
MartBadges6:
# 225 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 226 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 227 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 228 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 229 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 230 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 231 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 232 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NET_BALL
# 233 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 234 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 235 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 236 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 237 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 238 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 239 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 240 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 241 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 242 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 243 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 244 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SPEED
# 245 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 246 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 247 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 248 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 249 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 250 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 251 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 252 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 253 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 254 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 255 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 256 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 257 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 258 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 259 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 260 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 263 "data/maps/OstiaStore/scripts.pory"
MartBadges7:
# 264 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 265 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 266 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 267 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 268 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 269 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 270 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 271 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 272 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 273 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NET_BALL
# 274 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 275 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 276 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 277 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 278 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 279 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 280 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 281 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 282 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 283 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 284 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ATTACK
# 285 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 286 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 287 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 288 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SPEED
# 289 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 290 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 291 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 292 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 293 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 294 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 295 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 296 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 297 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 298 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 299 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 300 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 301 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 302 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 303 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 304 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 307 "data/maps/OstiaStore/scripts.pory"
MartBadges8:
# 308 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_POKE_BALL
# 309 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 310 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 311 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 312 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 313 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 314 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 315 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 316 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NEST_BALL
# 317 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_NET_BALL
# 318 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 319 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 320 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 321 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 322 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 323 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 324 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 325 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 326 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 327 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 328 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_ATTACK
# 329 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 330 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 331 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 332 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_X_SPEED
# 333 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 334 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 335 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 336 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 337 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 338 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ICE_STONE
# 339 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 340 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 341 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_WATER_STONE
# 342 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SUN_STONE
# 343 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_MOON_STONE
# 344 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 345 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 346 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 347 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 348 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 349 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 350 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 351 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 352 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 353 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 354 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 355 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 356 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 357 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 358 "data/maps/OstiaStore/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

OstiaStoreAromaLady_Text_0:
# 22 "data/maps/OstiaStore/scripts.pory"
	.string "Are you shopping for berries?$"

OstiaStoreAromaLady_Text_1:
# 25 "data/maps/OstiaStore/scripts.pory"
	.string "The berries in the store here aren't very\n"
	.string "fresh. Here, take some that I grew.$"

OstiaStoreAromaLady_Text_2:
# 28 "data/maps/OstiaStore/scripts.pory"
	.string "Those should taste much better.$"

OstiaStoreAromaLady_Text_3:
# 31 "data/maps/OstiaStore/scripts.pory"
	.string "I see. That's probably for the best. The\n"
	.string "berries here look a little old to me.$"

OstiaStoreAromaLady_Text_4:
# 36 "data/maps/OstiaStore/scripts.pory"
	.string "Growing berries is a lot of work, but it's\n"
	.string "rewarding to share them with others.$"

OstiaStoreAceTrainer_Text_0:
# 45 "data/maps/OstiaStore/scripts.pory"
	.string "I'm trying to decide whether I should\n"
	.string "buy more Poké Balls, or if I should get\l"
	.string "some battle items.\p"
	.string "Having a bigger team is an advantage,\n"
	.string "but so is raising the Attack stat.$"

OstiaMartEmployee_Text_0:
# 56 "data/maps/OstiaStore/scripts.pory"
	.string "Welcome to the Ostia General Store!\n"
	.string "Is there something I can get for you?$"

OstiaMartEmployee_Text_1:
# 60 "data/maps/OstiaStore/scripts.pory"
	.string "Please come again.$"
