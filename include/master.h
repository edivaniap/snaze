#ifndef _MASTER_H_
#define _MASTER_H_

#define direction_t short int

#include <iostream>


using namespace std;


/*! enumeração de direções 

			 north
	    west __|__ east
		       |     
		     south
	*/
enum Direction
{
	NORTH = 0, //<! (-1, 0)
	SOUTH = 1, //<! ( 1, 0)
	WEST = 2,  //<! ( 0,-1)
	EAST = 3   //<! ( 0, 1)
};

struct Position
{
	size_t line;   /*<! linha da posição */
	size_t column; /*<! coluna da posição */

	/*! inicializador */
	Position( size_t x_=0, size_t y_=0 ) 
		: line(x_)
		, column(y_)
	{ /*empty*/ }

	/*! configurador: muda a posição de acordo com uma direção */
	void set( const direction_t& dir )
	{
		switch( dir ) 
		{
			case Direction::NORTH:
				line -= 1;
				break;
				
			case Direction::SOUTH:
				line += 1;
				break;

			case Direction::WEST: 
				column -= 1;
				break;
				
		  	case Direction::EAST: 
				column += 1;
				break;
			default:
				cout << "Invalid Direction!";
		}
	}
};

/*! estrutura que vai definir o significado de cada caracter no mapa/labirinto */
struct Map
{
	char init    = 'i'; /*<! Caracter que define local inicial da snake */ 
	char wall    = '#'; /*<! Caracter que define uma parede */
	char way     = ' '; /*<! Caracter que define um caminho aberto */
	char spawn   = '*'; /*<! Caracter que define um local da comida */
	char marker  = '.'; /*<! Caracter que define um marcador */
};

#endif