// live_source_file.cpp : ���� DLL Ӧ�ó���ĵ���������
//
#include "SourceInterface.h"
#include "FileFactory.h"

ISourceFactory* GetSourceFactory() {
	return new CFileFactory();
}
