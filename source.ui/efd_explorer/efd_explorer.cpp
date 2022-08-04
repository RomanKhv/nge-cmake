#include "efd_explorer.h"
#include <iostream>
#include <windows.h>
#include <utils.h>
#include <pm_gui/IPMPage.h>
#include <pm_gui/pm_gui_win.h>
#include <pm_gui/pm_gui_mfc.h>
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

	if (IPMPage *page = pm_gui_win_factory())
	{
		cout << page->GetTitle() << endl;
	}
	if (IPMPage *page = pm_gui_mfc_factory())
	{
		cout << page->GetTitle() << endl;
	}

	cout << load_res_string();

	return 0;
}
