#include "CppWrapperClass.h"

CppWrapper::CppWrapperClass::CppWrapperClass():
	m_ippMainClass(nullptr)
{
	m_ippMainClass = new IppMainClass();
}

CppWrapper::CppWrapperClass::~CppWrapperClass()
{
	if (m_ippMainClass != nullptr)
	{
		delete m_ippMainClass;
		m_ippMainClass = nullptr;
	}
}

void CppWrapper::CppWrapperClass::Mult2Vectors(array<float_complex>^ src1, array<float_complex>^ src2, array<float_complex>^ dst, int len)
{
	pin_ptr<float_complex> src1PinPtr = &src1[0];
	Ipp32fc* pSrc1 = (Ipp32fc*)src1PinPtr;
	pin_ptr<float_complex> src2PinPtr = &src2[0];
	Ipp32fc* pSrc2 = (Ipp32fc*)src2PinPtr;
	pin_ptr<float_complex> dstPinPtr = &dst[0];
	Ipp32fc* pDst = (Ipp32fc*)dstPinPtr;

	m_ippMainClass->Mult2Vectors(pSrc1, pSrc2, pDst, len);
}
