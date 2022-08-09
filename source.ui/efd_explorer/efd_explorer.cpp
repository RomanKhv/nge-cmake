#include "efd_explorer.h"

#include <windows.h>

#include <iostream>

#include <utils.h>
#include <feature_gui.h>
#include <pm_gui/pm_gui.h>
#include <gui_resources.h>

using namespace std;

std::string load_res_string()
{
  	char buff[32];
    int read_symbols = 0;

    const HINSTANCE handle = LoadLibrary("gui_res");
    if (handle) {
        read_symbols = LoadString(handle, IDS_STRING101, buff, sizeof(buff)-1);
        FreeLibrary(handle);
    }
    else {
        std::cout << "Failed To load resource dll" << std::endl;
    }

    if (read_symbols <= 0) {
        std::cout << "Failed to load string resource" << std:: endl;
         return {};
   }
    return std::string(buff, read_symbols);
}

int main()
{
	cout << utils::quoted("FLOEFD rules!") << endl;

    IPMPage* page = pm_gui_factory();
    ShowPropertyManagerPage(page);

	cout << load_res_string();

	return 0;
}
