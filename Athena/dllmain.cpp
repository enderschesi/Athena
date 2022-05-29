// Athena | Created by CeriumDevs <3 
#include "CeriumFramework.h"

void Start() {

}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Start();
        break;
    }
    return TRUE;
}

