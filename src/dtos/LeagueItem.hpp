#ifndef LEAGUE_ITEM_HPP
#define LEAGUE_ITEM_HPP

#include <string>
#include "MiniSeries.hpp"

namespace Riot
{
	struct LeagueItem
	{
		bool isFreshBlood;
		bool isHotStreak;
		bool isInactive;
		bool isVeteran;
		long long lastPlayed;
		std::string leagueName;
		int leaguePoints;
		MiniSeries miniSeries;
		std::string playerOrTeamId;
		std::string playerOrTeamName;
		std::string queueType;
		std::string rank;
		std::string tier;
		int wins;
	};
}

#endif // LEAGUE_ITEM_HPP