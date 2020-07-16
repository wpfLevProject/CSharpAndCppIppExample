using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CppWrapper;

namespace CSharpConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            int len = 100;

            float_complex[] src1 = new float_complex[len];
            float_complex[] src2 = new float_complex[len];
            float_complex[] dst = new float_complex[len];

            

            for(int i=0;i< len; i++)
            {
                src1[i].re = 2;
                src1[i].im = 0;

                src2[i].re = i;
                src2[i].im = 0;
            }

            CppWrapperClass cppWrapper = new CppWrapperClass();

            cppWrapper.Mult2Vectors(src1, src2, dst, len);

            for (int i = 0; i < len; i++)
            {
                Console.WriteLine(dst[i].re);
            }


            Console.Read();

        }
    }
}
