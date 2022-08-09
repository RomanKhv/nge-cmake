#include <feature_gui.h>
#include <iostream>

FEATURE_GUI_PREFIX void ShowPropertyManagerPage(IPMPage* page) {
	if(page) {
		std::cout << page->GetTitle() << std::endl;
	}
}