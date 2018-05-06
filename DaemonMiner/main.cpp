#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <memory>
#include "Public/WinService/DynamineDaemon.h"

#pragma comment(lib, "advapi32.lib")


int __cdecl wmain(int argc, PWSTR argv[])
{
	auto daemon = std::make_shared<DynamineDaemon>();
	daemon->Run(); 

	return 0;
}


