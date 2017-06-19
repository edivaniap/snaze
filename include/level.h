#ifndef _LEVEL_H_
#define _LEVEL_H_

#include <vector>
#include "master.h"

namespace sg 
{
	class Level
	{
	private:
		std::vector<std::string> m_level;
		short int m_apples; //<! numero de maças

	public:
		/*!
		 * @brief construtor. inicializa numero de macas e mapa do level 
		 */
		Level();

		/*!
		 * @brief construtor. inicializa numero de macas e mapa do level 
		 */
		~Level();

		/*! 
		 * @brief pega a posição inicial do ator
		 * @return posição inicial
		 */
		Position get_start_position( void );

		/*! 
		 * @brief verifica se uma direção, a partir de determinada posição está, está bloqueada 
		 * @param pos posição em foco da análise
		 * @param dir direção a ser analisada
		 * @return "true" se estiver a direção bloqueada, "false" caso contrário
		 */
		bool is_blocked( const Position& pos, const direction_t& dir );

		/*! 
		 * @brief pega a posição adjacente a uma posição em relação a uma direção
		 * @param pos A posição
		 * @param dir A direção
		 * @return posição adajacente
		 */
		Position adjacent_position( Position pos, int dir );
	};
}

#endif