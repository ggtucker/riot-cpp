#include <RiotCPP/DTO/Param/ChampData.hpp>

namespace Riot
{
	std::string toString(ChampData ChampData)
	{
		switch(ChampData)
		{
		case ChampData::ALL:
			return "all";
		case ChampData::IMAGE:
			return "image";
		case ChampData::SKINS:
			return "skins";
		case ChampData::LORE:
			return "lore";
		case ChampData::BLURB:
			return "blurb";
		case ChampData::ALLY_TIPS:
			return "allytips";
		case ChampData::ENEMY_TIPS:
			return "enemytips";
		case ChampData::TAGS:
			return "tags";
		case ChampData::PAR_TYPE:
			return "partype";
		case ChampData::INFO:
			return "info";
		case ChampData::STATS:
			return "stats";
		case ChampData::SPELLS:
			return "spells";
		case ChampData::PASSIVE:
			return "passive";
		case ChampData::RECOMMENDED:
			return "recommended";
		}
		return "";
	}
}