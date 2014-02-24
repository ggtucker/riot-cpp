#include <RiotCPP/DTO/Param/Season.hpp>

namespace Riot
{
	std::string toString(Season season)
	{
		switch(season)
		{
		case Season::SEASON3:
			return "SEASON3";
		case Season::SEASON4:
			return "SEASON4";
		}
		return "";
	}
}