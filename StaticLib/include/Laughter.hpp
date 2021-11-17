// CreateLibrary.h : включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта.

#ifdef BUILD_DLL
/* DLL export */
#define EXPORT __declspec(dllexport)
#else
/* EXE import */
#define EXPORT __declspec(dllimport)
#endif

#pragma once

#include <cstdio>


extern "C"
{
	EXPORT void laughter();
}
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.
