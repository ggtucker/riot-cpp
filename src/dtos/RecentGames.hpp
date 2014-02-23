#ifndef RECENT_GAMES_HPP
#define RECENT_GAMES_HPP

#include <vector>
#include "DTOField.hpp"
#include "Game.hpp"

namespace Riot
{
	struct RecentGames
	{
		DTOField<std::vector<Game>> games;
		DTOField<long long> summonerId;
	};
}

#endif // RECENT_GAMES_HPP