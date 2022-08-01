#include <atlbase.h>
#include <iostream>
#include "../src/generated/Greeter_i.h" // generated from idl
#include "../src/generated/Greeter_i.c" // generated from idl

int main(int argc, char** argv)
{
    CoInitialize(nullptr);
    {
        CComPtr<IGreeter> greeter;
        HRESULT hr = greeter.CoCreateInstance(CLSID_Greeter);
        if (FAILED(hr))
        {
            std::cerr << "Failed to create CLSID_Greeter instance!" << std::endl;
            return -1;
        }

        greeter->greet();
    }

    CoUninitialize();
    
    return 0;
}