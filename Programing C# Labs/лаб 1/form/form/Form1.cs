using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        { 
            try
            {
            double a = double.Parse(txtA.Text);
            double b = double.Parse(txtB.Text);
            double c = double.Parse(txtC.Text);
            double h;
           
            if(a > b)
            {
                MessageBox.Show("side A is larger than side B");
            }
            else if(a < b)
            {
                MessageBox.Show("side B is larger than side A");
            }
            else
            {
                  h = Math.Sqrt((a*a) - (b*b)/4);
                  MessageBox.Show("height: " + h );
            }
            }
            catch (FormatException)
            {
                MessageBox.Show("Incorrect input");
}

        }
    }
}
