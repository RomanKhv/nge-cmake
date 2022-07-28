#include "efd_explorer.h"
#include <iostream>
#include <utils.h>
#include <pm_gui/IPMPage.h>
#include <pm_gui/pm_gui_win.h>
#include <pm_gui/pm_gui_mfc.h>

using namespace std;

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

	return 0;
}
