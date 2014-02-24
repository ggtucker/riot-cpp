#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <string>
#include "Player.hpp"
#include "RawStats.hpp"

namespace Riot
{
	struct Game
	{
		int championId;
		long long createDate;
		std::vector<Player> fellowPlayers;
		long long gameId;
		std::string gameMode;
		std::string gameType;
		bool invalid;
		int level;
		int mapId;
		int spell1;
		int spell2;
		RawStats stats;
		std::string subType;
		int teamId;
	};
}

#endif // GAME_HPP