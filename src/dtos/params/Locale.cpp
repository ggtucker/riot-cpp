#include <RiotCPP/DTO/Param/Locale.hpp>

namespace Riot
{
	std::string toString(Locale locale)
	{
		switch(locale)
		{
		case Locale::en_US:
			return "en_US";
		case Locale::es_ES:
			return "es_ES";
		}
		return "";
	}
}