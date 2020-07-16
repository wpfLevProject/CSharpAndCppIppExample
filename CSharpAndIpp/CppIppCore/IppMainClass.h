#pragma once

#include "IppFiles/ipp.h"

#ifdef EXPORT_CLASS
#define DllExportImport   __declspec( dllexport )
#else
#define DllExportImport   __declspec( dllimport )
#endif


class DllExportImport IppMainClass
{
public:

	void Mult2Vectors(Ipp32fc* src1, Ipp32fc* src2, Ipp32fc* dst, int len);

};

