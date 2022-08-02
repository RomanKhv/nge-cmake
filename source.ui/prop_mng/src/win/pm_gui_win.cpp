#include "pch.h"
#include "framework.h"
#include "pm_gui/pm_gui.h"
#include "PMPage.h"


DLL_LINK_FLAG IPMPage* pm_gui_factory()
{
    return new PMPage();
}
