ValniGymLobby_MapScripts::
	.byte 0


ValniGymReceptionist1::
# 4 "data/maps/ValniGymLobby/scripts.pory"
	lock
# 5 "data/maps/ValniGymLobby/scripts.pory"
	faceplayer
# 6 "data/maps/ValniGymLobby/scripts.pory"
	msgbox ValniGymReceptionist1_Text_0
# 16 "data/maps/ValniGymLobby/scripts.pory"
	release
	return


ValniGymReceptionist2::
# 20 "data/maps/ValniGymLobby/scripts.pory"
	lock
# 21 "data/maps/ValniGymLobby/scripts.pory"
	faceplayer
# 22 "data/maps/ValniGymLobby/scripts.pory"
	msgbox ValniGymReceptionist2_Text_0
# 30 "data/maps/ValniGymLobby/scripts.pory"
	release
	return


ValniGymReceptionist1_Text_0:
# 6 "data/maps/ValniGymLobby/scripts.pory"
	.string "Hello, and welcome to Valni's Gym.\p"
	.string "The gym here is designed to reflect a\n"
	.string "natural environment.\p"
	.string "And to that end, there are wild pokémon\n"
	.string "throughout.\p"
	.string "The wild pokémon are part of the gym\n"
	.string "challenge, and so we ask that you\l"
	.string "please refrain from capturing any.\p"
	.string "We wish you the best of luck on you\n"
	.string "challenge of Valni's Gym.$"

ValniGymReceptionist2_Text_0:
# 22 "data/maps/ValniGymLobby/scripts.pory"
	.string "Hello, and welcome to Valni's Gym.\p"
	.string "The current gym leader is Mycelian.\p"
	.string "He holds to Valni's long standing\n"
	.string "tradition of battling with pokémon\l"
	.string "of the grass-type.\p"
	.string "Victory over Mycelian might prove\n"
	.string "difficult if you don't have pokémon\l"
	.string "that are strong against grass-types.$"
