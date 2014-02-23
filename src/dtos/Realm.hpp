#ifndef REALM_HPP
#define REALM_HPP

#include <map>
#include <string>
#include "DTOField.hpp"

namespace Riot
{
	struct Realm
	{
		DTOField<std::string> cdn;
		DTOField<std::string> css;
		DTOField<std::string> dd;
		DTOField<std::string> l;
		DTOField<std::string> lg;
		DTOField<std::map<std::string, std::string>> n;
		DTOField<int> profileiconmax;
		DTOField<std::string> store;
		DTOField<std::string> v;
	};
}

#endif // REALM_HPP