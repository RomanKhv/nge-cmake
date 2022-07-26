#include "utils.h"


std::string utils::quoted(const std::string& _in)
{
	return std::string("\"") + _in + "\"|;
}
