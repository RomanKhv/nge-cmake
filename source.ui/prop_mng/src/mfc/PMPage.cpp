#include "pch.h"
#include "PMPage.h"
#include "resource.h"

PMPage::PMPage()
{}

std::string PMPage::GetTitle(){
    char buff[32];
    int read_symbols = 0;

    HINSTANCE handle = AfxLoadLibrary("mfc_res");
    if (handle) {
        read_symbols = LoadString(handle, IDS_APP_TITLE, buff, sizeof(buff));
        AfxFreeLibrary(handle);
    }
    else {
        return "Failed To load resource dll";
    }

    if (read_symbols > 0) {
        return std::string(buff, read_symbols);
    }
    return "";
    //return "pm_gui: MFC implementation";
}