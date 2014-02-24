#ifndef MESSAGE_OF_DAY_HPP
#define MESSAGE_OF_DAY_HPP

#include <string>

namespace Riot
{
	struct MessageOfDay
	{
		long long createDate;
		std::string message;
		int version;
	};
}

#endif // MESSAGE_OF_DAY_HPP