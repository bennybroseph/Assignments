using System;

namespace _3.Python_WarmUp_Translation
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Question_1 = new System.Windows.Forms.ComboBox();
            this.Question2_Label = new System.Windows.Forms.Label();
            this.Question2_TextBox = new System.Windows.Forms.RichTextBox();
            this.Question2_Button = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Question_1
            // 
            this.Question_1.FormattingEnabled = true;
            this.Question_1.Location = new System.Drawing.Point(83, 12);
            this.Question_1.Name = "Question_1";
            this.Question_1.Size = new System.Drawing.Size(121, 21);
            this.Question_1.TabIndex = 0;
            this.Question_1.Text = "Question 1";
            // 
            // Question2_Label
            // 
            this.Question2_Label.AutoSize = true;
            this.Question2_Label.Location = new System.Drawing.Point(12, 45);
            this.Question2_Label.Name = "Question2_Label";
            this.Question2_Label.Size = new System.Drawing.Size(58, 13);
            this.Question2_Label.TabIndex = 2;
            this.Question2_Label.Text = "Question 2";
            // 
            // Question2_TextBox
            // 
            this.Question2_TextBox.Location = new System.Drawing.Point(83, 42);
            this.Question2_TextBox.Name = "Question2_TextBox";
            this.Question2_TextBox.Size = new System.Drawing.Size(189, 22);
            this.Question2_TextBox.TabIndex = 3;
            this.Question2_TextBox.Text = "null";
            this.Question2_TextBox.MouseClick += new System.Windows.Forms.MouseEventHandler(this.Question2_TextBox_MouseClick);
            // 
            // Question2_Button
            // 
            this.Question2_Button.Location = new System.Drawing.Point(196, 71);
            this.Question2_Button.Name = "Question2_Button";
            this.Question2_Button.Size = new System.Drawing.Size(75, 23);
            this.Question2_Button.TabIndex = 4;
            this.Question2_Button.Text = "Generate";
            this.Question2_Button.UseVisualStyleBackColor = true;
            this.Question2_Button.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Question2_Button_MouseUp);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(113, 100);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(58, 13);
            this.label1.TabIndex = 5;
            this.label1.Text = "Question 3";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(106, 116);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 6;
            this.button1.Text = "Test";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.MouseUp += new System.Windows.Forms.MouseEventHandler(this.Question3_Button1_MouseUp);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 163);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.Question2_Button);
            this.Controls.Add(this.Question2_TextBox);
            this.Controls.Add(this.Question2_Label);
            this.Controls.Add(this.Question_1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox Question_1;
        private System.Windows.Forms.Label Question2_Label;
        private System.Windows.Forms.RichTextBox Question2_TextBox;
        private System.Windows.Forms.Button Question2_Button;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
    }
}

