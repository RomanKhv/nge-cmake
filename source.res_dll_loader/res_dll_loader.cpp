#include <windows.h>
#include <libloaderapi.h>
#include <iostream>
#include <string>

#include <resource.h>

int main() {
    char buff[32];
    int read_symbols = 0;

    HINSTANCE handle = LoadLibrary("res_dll");
    if (handle) {
        read_symbols = LoadString(handle, IDS_STRING101, buff, sizeof(buff));
        FreeLibrary(handle);
    }
    else {
        std::cout << "Failed To load resource dll" << std::endl;
        return -1;
    }

    if (read_symbols > 0) {
        std::cout << std::string(buff, read_symbols) << std:: endl;
    }
    return 0;
}