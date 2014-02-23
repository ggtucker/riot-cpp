#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "Player.hpp"
#include "RawStats.hpp"

namespace Riot
{
	struct Game
	{
		DTOField<int> championId;
		DTOField<long long> createDate;
		DTOField<std::vector<Player>> fellowPlayers;
		DTOField<long long> gameId;
		DTOField<std::string> gameMode;
		DTOField<std::string> gameType;
		DTOField<bool> invalid;
		DTOField<int> level;
		DTOField<int> mapId;
		DTOField<int> spell1;
		DTOField<int> spell2;
		DTOField<RawStats> stats;
		DTOField<std::string> subType;
		DTOField<int> teamId;
	};
}

#endif // GAME_HPP