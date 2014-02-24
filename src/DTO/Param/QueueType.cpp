#include <RiotCPP/DTO/Param/QueueType.hpp>

namespace Riot
{
	std::string toString(QueueType queueType)
	{
		switch(queueType)
		{
		case QueueType::RANKED_SOLO_5x5:
			return "RANKED_SOLO_5x5";
		case QueueType::RANKED_TEAM_3x3:
			return "RANKED_TEAM_3x3";
		case QueueType::RANKED_TEAM_5x5:
			return "RANKED_TEAM_5x5";
		}
		return "";
	}
}