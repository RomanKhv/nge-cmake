#include <iostream>
#include <boost/shared_ptr.hpp>

using namespace std;

int main()
{
	// call function from static lib "utils"
	cout << "3rd party libs" << endl;

	boost::shared_ptr<int> sp;

	return 0;
}
