#ifndef MESSAGE_OF_DAY_HPP
#define MESSAGE_OF_DAY_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct MessageOfDay
	{
		DTOField<long long> createDate;
		DTOField<std::string> message;
		DTOField<int> version;
	};
}

#endif // MESSAGE_OF_DAY_HPP