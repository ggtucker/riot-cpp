#ifndef META_DATA_HPP
#define META_DATA_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct MetaData
	{
		DTOField<bool> isRune;
		DTOField<std::string> tier;
		DTOField<std::string> type;
	};
}

#endif // META_DATA_HPP