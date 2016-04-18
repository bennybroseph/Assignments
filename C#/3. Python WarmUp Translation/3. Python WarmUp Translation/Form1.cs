using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _3.Python_WarmUp_Translation
{
    public partial class Form1 : Form
    {
        MySystem oTestingObject = new MySystem();

        public Form1()
        {
            InitializeComponent();

            Question2_TextBox.Text = "Enter numbers separated by a comma.";
            for (int i = 2000; i <= 3200; i++)
            {
                if (i % 7 == 0 && i % 5 != 0)
                    Question_1.Items.Add(i);
            }
        }

        private void Question2_TextBox_MouseClick(object sender, MouseEventArgs e)
        {
            if (Question2_TextBox.Text == "Enter numbers separated by a comma.")
                Question2_TextBox.Text = "";

            Question2_Button.Text = "Generate";
            Question2_Button.Enabled = true;
        }

        private void Question2_Button_MouseUp(object sender, MouseEventArgs e)
        {
            string sParse = Question2_TextBox.Text;
            List<int> iParsedNumbers = new List<int>();

            int iFoundIndex = 0;

            try
            {
                for (int i = 0; i < Question2_TextBox.Text.Length; i++)
                {
                    iFoundIndex = sParse.IndexOf(",");
                    if (iFoundIndex >= 0)
                    {
                        iParsedNumbers.Add(Convert.ToInt32(sParse.Substring(0, iFoundIndex)));
                        sParse = sParse.Substring(iFoundIndex + 1);
                    }
                }
                iParsedNumbers.Add(Convert.ToInt32(sParse));

            }
            catch { Question2_Button.Text = "Error..."; return; }

            Console.Out.WriteLine();
            Console.Out.Write("[");
            for (int i = 0; i < iParsedNumbers.Count; i++)
            {
                Console.Out.Write("'{0:G}'", iParsedNumbers[i]);
                if (i != iParsedNumbers.Count - 1)
                {
                    Console.Out.Write(",");
                }
            }
            Console.Out.Write("]");
            Console.Out.WriteLine();

            Question2_Button.Enabled = false;
        }

        private void Question3_Button1_MouseUp(object sender, MouseEventArgs e)
        {
            string Input = oTestingObject.getString("This would ask for input: ");
            oTestingObject.printString("It's all uppercase");
        }
    }
}
