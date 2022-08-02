#include "efd_explorer.h"
#include <iostream>
#include <utils.h>
#include <pm_gui/IPMPage.h>
#include <pm_gui/pm_gui.h>

using namespace std;

int main()
{
	cout << utils::quoted("FLOEFD rules!") << endl;

	if (IPMPage *page = pm_gui_factory())
	{
		cout << page->GetTitle() << endl;
	}

	return 0;
}
