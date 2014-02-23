#ifndef CHAMPION_DATA_LIST_HPP
#define CHAMPION_DATA_LIST_HPP

#include <map>
#include <string>
#include "DTOField.hpp"
#include "ChampionData.hpp"

namespace Riot
{
	struct ChampionDataList
	{
		DTOField<std::map<std::string, ChampionData>> data;
		DTOField<std::string> format;
		DTOField<std::map<std::string, std::string>> keys;
		DTOField<std::string> type;
		DTOField<std::string> version;
	};
}

#endif // CHAMPION_DATA_LIST_HPP