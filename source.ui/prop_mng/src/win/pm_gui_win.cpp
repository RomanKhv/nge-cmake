#include "pch.h"
#include "framework.h"
#include "pm_gui/pm_gui_win.h"
#include "PMPage.h"


PMGUIWIN_API IPMPage* pm_gui_win_factory()
{
    return new PMPage();
}
