#ifndef _SNAKE_H_
#define _SNAKE_H_

#include <stack>
#include "master.h"

namespace sg
{
	class Snake
	{
	private:
		std::stack<Position> snake; /*<! Pilha de posições que a serpente ocupa */
		short int lives; /*<! número de vidas da serpente */
	public:
		Snake();
		~Snake();

		bool eat_apple();	
	};
}

#endif