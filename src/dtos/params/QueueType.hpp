#ifndef QUEUE_TYPE_HPP
#define QUEUE_TYPE_HPP

#include <string>

namespace Riot
{
	enum class QueueType
	{
		RANKED_SOLO_5x5 = 0,
		RANKED_TEAM_3x3,
		RANKED_TEAM_5x5
	};

	std::string toString(QueueType queueType);
}

#endif // QUEUE_TYPE_HPP