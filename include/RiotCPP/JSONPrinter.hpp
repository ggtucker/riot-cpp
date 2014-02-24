#ifndef JSON_PRINTER_HPP
#define JSON_PRINTER_HPP

#include <rapidjson/reader.h>
#include <rapidjson/document.h>
#include <iostream>
#include <string>

namespace Riot
{
	namespace JSONPrinter
	{
		void printContents(const std::string& contents);
		void printContents(const std::string prefix, const rapidjson::Value& v);
		void printValue(const rapidjson::Value& v);
	}
}

#endif