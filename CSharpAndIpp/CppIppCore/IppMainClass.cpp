#include "IppMainClass.h"

void IppMainClass::Mult2Vectors(Ipp32fc* src1, Ipp32fc* src2, Ipp32fc* dst, int len)
{
	ippsMul_32fc(src1, src2, dst, len);
}

int main()
{
	IppMainClass c1;
	c1.Mult2Vectors(nullptr, nullptr, nullptr, 0);
}
