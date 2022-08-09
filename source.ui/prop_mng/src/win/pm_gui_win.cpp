#include "pch.h"
#include "framework.h"
#include "pm_gui/pm_gui.h"
#include "PMPage.h"


PMGUI_API IPMPage* pm_gui_factory()
{
    return new PMPage();
}
