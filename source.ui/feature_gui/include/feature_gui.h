#pragma once
#include <pm_gui/IPMPage.h>

#ifdef FEATURE_GUI_EXPORT
#define FEATURE_GUI_PREFIX __declspec(dllexport)
#else
#define FEATURE_GUI_PREFIX __declspec(dllimport)
#endif

FEATURE_GUI_PREFIX void ShowPropertyManagerPage(IPMPage *);