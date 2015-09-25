using System;

class Program
{
    static void Main(string[] args)
    {
        MyClass oMyClass = new MyClass();

        bool bRun = true;
        int iInput;
        while (bRun)
        {
            Console.Clear();
            Console.WriteLine("What would you like to do?\n");

            Console.WriteLine("1. Add");
            Console.WriteLine("2. Subtract");
            Console.WriteLine("3. Multiply");
            Console.WriteLine("4. Divide");
            Console.WriteLine("5. Exit");

            Console.SetCursorPosition(0, 10);
            Console.Write(">> ");

            iInput = Console.Read();
            Console.ReadLine();

            if (iInput == '5')
                bRun = false;
            else
            {
                int iNum1 = 0, iNum2 = 0;

                bool bException = false;
                do
                {
                    Console.Clear();
                    Console.Write("Enter the first number");

                    Console.SetCursorPosition(0, 10);
                    Console.Write(">> ");

                    bException = false;
                    try { iNum1 = Convert.ToInt32(Console.ReadLine()); }
                    catch (FormatException)
                    {
                        Console.Write("Numbers only. Please try again...");
                        while (Console.ReadLine() != "") ;
                        bException = true;
                    }
                } while (bException);

                do
                {
                    Console.Clear();
                    Console.Write("Enter the second number");

                    Console.SetCursorPosition(0, 10);
                    Console.Write(">> ");

                    bException = false;
                    try { iNum2 = Convert.ToInt32(Console.ReadLine()); }
                    catch (FormatException)
                    {
                        Console.Write("Numbers only. Please try again...");
                        bException = true;
                    }
                } while (bException);
                switch (iInput)
                {
                    case '1':
                        {
                            int iDiff = oMyClass.Subtract(iNum1, iNum2);
                            Console.Write("{0} + {1} = {2}", iNum1, iNum2, iDiff);

                            Console.SetCursorPosition(0, 24);
                            Console.Write("Press Enter to Continue...");
                            while (Console.ReadLine() != "") ;
                        }
                        break;
                    case '2':
                        {
                            int iSum = oMyClass.Subtract(iNum1, iNum2);
                            Console.Write("{0} - {1} = {2}", iNum1, iNum2, iSum);

                            Console.SetCursorPosition(0, 24);
                            Console.Write("Press Enter to Continue...");
                            while (Console.ReadLine() != "") ;
                        }
                        break;
                    case '3':
                        {
                            int iProd = oMyClass.Multiply(iNum1, iNum2);
                            Console.Write("{0} * {1} = {2}", iNum1, iNum2, iProd);

                            Console.SetCursorPosition(0, 24);
                            Console.Write("Press Enter to Continue...");
                            while (Console.ReadLine() != "") ;
                        }
                        break;
                    case '4':
                        {
                            int iQuo = oMyClass.Divide(iNum1, iNum2);
                            Console.Write("{0} / {1} = {2}", iNum1, iNum2, iQuo);

                            Console.SetCursorPosition(0, 24);
                            Console.Write("Press Enter to Continue...");
                            while (Console.ReadLine() != "") ;
                        }
                        break;
                }
            }

            if (!bRun)
            {
                Console.Clear();
                Console.WriteLine("Goodbye");

                Console.SetCursorPosition(0, 24);
                Console.Write("Press Enter to Continue...");
                while (Console.ReadLine() != "") ;
            }
        }
    }
}
