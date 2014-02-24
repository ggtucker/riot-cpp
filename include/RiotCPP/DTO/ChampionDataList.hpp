#ifndef CHAMPION_DATA_LIST_HPP
#define CHAMPION_DATA_LIST_HPP

#include <map>
#include <string>
#include "ChampionData.hpp"

namespace Riot
{
	struct ChampionDataList
	{
		std::map<std::string, ChampionData> data;
		std::string format;
		std::map<std::string, std::string> keys;
		std::string type;
		std::string version;
	};
}

#endif // CHAMPION_DATA_LIST_HPP