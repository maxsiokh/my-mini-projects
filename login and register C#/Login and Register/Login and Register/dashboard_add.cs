using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using MetroSet_UI.Forms;

namespace Login_and_Register
{
    public partial class dashboard_add : Form
    {
        DataBase database = new DataBase();
        public dashboard_add()
        {
            InitializeComponent();
            StartPosition = FormStartPosition.CenterScreen;
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            database.openConnection();

            var name = textBox_Name2.Text;
            var count = textBox_Count2.Text;
            var postav = textBox_Postav2.Text;  
            int price;

            if (int.TryParse(textBox_Price2.Text, out price))
            {
                var addQuery = $"insert into goods(name_of, count_of, price, supplier) values('{name}', '{count}', '{price}','{postav}')";

                var comand = new SqlCommand(addQuery, database.getConnection());
                comand.ExecuteNonQuery();
                MessageBox.Show("Entry created!", "Sucsessful", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
            else
            {
                MessageBox.Show("Entry not created! \nPrice must be a number", "error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            database.closeConnection();
        }
    }
}
