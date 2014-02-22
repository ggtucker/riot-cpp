#ifndef RECENT_GAMES_HPP
#define RECENT_GAMES_HPP

#include <vector>
#include "Game.hpp"

struct RecentGames
{
	std::vector<Game> games;
	long long summonerId;
};

#endif // RECENT_GAMES_HPP