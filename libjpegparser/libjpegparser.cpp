// libjpegparser.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "libjpegparser.h"
#include "JPEGParser.h"

using namespace hdz;

__declspec(dllexport) bool parseJPEG(){
	JPEGParser *pParser = new JPEGParser("F:\\test.jpg");
	printf("call parseJPEG");
	pParser->parse();
	return false;
}

