using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ClassLibrary_sampleDLL;

namespace CsharpProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            mA a = new mA();
            mB test = new mB(23);
            string str = "hello, test";
            string[] strs = { "chuangqianmingyueguang", "yishidishangshuang", "jutouwnagmingyue", "ditousiguxiang" };
            int[] arr = { 1, 2, 3, 4, 5 };
            test.mBfoo(a, 45, str, strs, 4, arr, 5);
        }
    }
}
