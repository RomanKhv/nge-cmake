#include "efd_solver.h"
#include <iostream>
#include <utils.h>
#include <vwr/vwr_module.h>

using namespace std;

int main()
{
	// call function from static lib "utils"
	cout << utils::quoted("FLOEFD Solver rules!") << endl;

	// call function from viewer.dll
	cout << "Available visualization parameters:\n";
	for ( const auto& param : viewer::get_vis_params() )
		cout << param << "\n";

	return 0;
}
