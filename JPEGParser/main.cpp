#include "stdafx.h"
#include "libjpegparser.h"
#pragma comment(lib, "libcommon")

int main(int argc, char*argv[])
{
	//dlopen
	HMODULE hHandle = LoadLibrary(_T("libjpegparser.dll"));
	if (hHandle == NULL){
		return -1;
	}

	funcParseJPEG parserFunc = (funcParseJPEG)GetProcAddress(hHandle, "parseJPEG");
	if (parserFunc == NULL){
		DWORD err = GetLastError();
		return -1;
	}

	(*parserFunc)();
	return 0;
}