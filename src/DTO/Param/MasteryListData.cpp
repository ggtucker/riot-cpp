#include <RiotCPP/DTO/Param/MasteryListData.hpp>

namespace Riot
{
	std::string toString(MasteryListData masteryListData)
	{
		switch(masteryListData)
		{
		case MasteryListData::ALL:
			return "all";
		case MasteryListData::IMAGE:
			return "image";
		case MasteryListData::PREREQ:
			return "prereq";
		case MasteryListData::RANKS:
			return "ranks";
		case MasteryListData::TREE:
			return "tree";
		}
		return "";
	}
}