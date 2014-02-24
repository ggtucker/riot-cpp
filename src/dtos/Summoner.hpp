#ifndef SUMMONER_HPP
#define SUMMONER_HPP

#include <string>

namespace Riot
{
	struct Summoner
	{
		long long id;
		std::string name;
		int profileIconId;
		long long revisionDate;
		long long summonerLevel;
	};
}

#endif // SUMMONER_HPP