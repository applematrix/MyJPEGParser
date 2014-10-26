#pragma once

#include "sp.h"
#include "FileSource.h"

namespace hdz{
	enum{
		TAG_SOI, //start of image£¬0xffd8
		TAG_ERR,
	};

	class JPEGParser{
	public:
		JPEGParser(const char* url);
		~JPEGParser();
		bool parse();
		int nextMarker();
	private:
		sp<FileSource> m_pJPEGFile;
		bool mInited;
		int64 m_offset;
		int64 m_size;
	};

};//end namespace