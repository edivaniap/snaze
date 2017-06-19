#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "master.h"

namespace sg
{
	class Player
	{
	private:

	public:
		Player();
		~Player();

		direction_t next_move();

		bool find_solution();
	};
}

#endif