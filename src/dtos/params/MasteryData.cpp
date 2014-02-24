#include <RiotCPP/DTO/Param/MasteryData.hpp>

namespace Riot
{
	std::string toString(MasteryData masteryData)
	{
		switch(masteryData)
		{
		case MasteryData::ALL:
			return "all";
		case MasteryData::RANKS:
			return "ranks";
		case MasteryData::PREREQ:
			return "prereq";
		case MasteryData::IMAGE:
			return "image";
		}
		return "";
	}
}