#ifndef PASSIVE_HPP
#define PASSIVE_HPP

#include <string>
#include "DTOField.hpp"
#include "Image.hpp"

namespace Riot
{
	struct Passive
	{
		DTOField<std::string> description;
		DTOField<Image> image;
		DTOField<std::string> name;
	};
}

#endif // PASSIVE_HPP