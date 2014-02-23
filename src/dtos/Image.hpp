#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Image
	{
		DTOField<std::string> full;
		DTOField<std::string> group;
		DTOField<int> h;
		DTOField<std::string> sprite;
		DTOField<int> w;
		DTOField<int> x;
		DTOField<int> y;
	};
}

#endif // IMAGE_HPP