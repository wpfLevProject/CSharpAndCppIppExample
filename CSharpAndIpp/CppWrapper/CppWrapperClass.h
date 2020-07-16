#pragma once
#include "../CppIppCore/IppMainClass.h"

using namespace System;



namespace CppWrapper
{

	public value struct float_complex
	{
		float re;
		float im;
	};

	public ref class CppWrapperClass
	{
	public:
		CppWrapperClass();
		~CppWrapperClass();

		void Mult2Vectors(array<float_complex>^ src1, array<float_complex>^ src2, array<float_complex>^ dst, int len);

	private:
		IppMainClass* m_ippMainClass;
	};

}

