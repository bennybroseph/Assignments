using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _3.Python_WarmUp_Translation
{
    class MySystem
    {
        public MySystem()
        {

        }
        public string getString(string a_sPrompt)
        {
            Console.Out.Write(a_sPrompt);
            string Input = Console.ReadLine();
            return Input;
        }
        public void printString(string a_sString)
        {
            Console.Out.Write(a_sString.ToUpper());
        }
    }
}
