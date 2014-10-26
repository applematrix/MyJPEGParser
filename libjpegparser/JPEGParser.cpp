#include "stdafx.h"
#include "JPEGParser.h"
#pragma comment(lib, "libcommon")

using namespace hdz;

JPEGParser::JPEGParser(const char* url)
{
	if (url == NULL){
		//TODO;
		return;
	}
	m_pJPEGFile = new FileSource(url);
	if (m_pJPEGFile == NULL){

	}
	m_size = m_pJPEGFile->size();
	mInited = true;
}

JPEGParser::~JPEGParser(){

}

bool JPEGParser::parse(){
	if (!mInited){
		return false;
	}

	return true;
}

int JPEGParser::nextMarker(){
	uint8 header = 0;
	if (1 != m_pJPEGFile->readAt(m_offset, 1, &header)){
		return false;
	}

	//tag start
	if (header == 0xff){
		while (header == 0xff){
			if (1 != m_pJPEGFile->readAt(m_offset, 1, &header)){
				break;
			}
		}
	}
}
