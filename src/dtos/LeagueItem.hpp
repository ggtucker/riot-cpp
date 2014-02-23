#ifndef LEAGUE_ITEM_HPP
#define LEAGUE_ITEM_HPP

#include <string>
#include "DTOField.hpp"
#include "MiniSeries.hpp"

namespace Riot
{
	struct LeagueItem
	{
		DTOField<bool> isFreshBlood;
		DTOField<bool> isHotStreak;
		DTOField<bool> isInactive;
		DTOField<bool> isVeteran;
		DTOField<long long> lastPlayed;
		DTOField<std::string> leagueName;
		DTOField<int> leaguePoints;
		DTOField<MiniSeries> miniSeries;
		DTOField<std::string> playerOrTeamId;
		DTOField<std::string> playerOrTeamName;
		DTOField<std::string> queueType;
		DTOField<std::string> rank;
		DTOField<std::string> tier;
		DTOField<int> wins;
	};
}

#endif // LEAGUE_ITEM_HPP