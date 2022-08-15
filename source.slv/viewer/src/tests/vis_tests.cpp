#include <iostream>
#include <vis_params.h>
#include <boost/test/unit_test.hpp>

using boost::unit_test::test_suite;

test_suite* init_unit_test_suite(int argc, char* argv[])
{
	return nullptr;
}

BOOST_AUTO_TEST_CASE(vis_test) {
	std::vector<std::string> params = get_scalar_params();
	BOOST_TEST((std::find(params.begin(), params.end(), "Pressure") != params.end()));
	BOOST_TEST((std::find(params.begin(), params.end(), "Temperature") != params.end()));
}