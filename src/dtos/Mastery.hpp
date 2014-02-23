#ifndef MASTERY_HPP
#define MASTERY_HPP

#include <vector>
#include <string>
#include "DTOField.hpp"
#include "Image.hpp"

namespace Riot
{
	struct Mastery
	{
		DTOField<std::vector<std::string>> description;
		DTOField<int> id;
		DTOField<Image> image;
		DTOField<std::string> name;
		DTOField<std::string> prereq;
		DTOField<int> ranks;
	};
}

#endif // MASTERY_HPP