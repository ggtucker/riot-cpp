#ifndef CHAMP_DATA_HPP
#define CHAMP_DATA_HPP

#include <string>

namespace Riot
{
	enum class ChampData
	{
		ALL = 0,
		IMAGE,
		SKINS,
		LORE,
		BLURB,
		ALLY_TIPS,
		ENEMY_TIPS,
		TAGS,
		PAR_TYPE,
		INFO,
		STATS,
		SPELLS,
		PASSIVE,
		RECOMMENDED
	};

	std::string toString(ChampData champData);
}

#endif // CHAMP_DATA_HPP