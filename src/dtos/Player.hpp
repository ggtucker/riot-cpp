#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "DTOField.hpp"

namespace Riot
{
	struct Player
	{
		DTOField<int> championId;
		DTOField<long long> summonerId;
		DTOField<int> teamId;
	};
}

#endif // PLAYER_HPP