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


namespace Login_and_Register
{
    public partial class frmRegister : Form
    {
        DataBase database = new DataBase();
        public frmRegister()
        {
            StartPosition = FormStartPosition.CenterScreen;
            InitializeComponent();
        }  

        private void frmRegister_Load(object sender, EventArgs e)
        {
            txtPassword.PasswordChar = '•';
            txtPassword.MaxLength = 50;
            txtUsername.MaxLength = 50;
        }

        private void btnRegister_Click(object sender, EventArgs e)
        {
            if (checkUser())

            {
                return;
            }

            var login = txtUsername.Text;
            var password = txtPassword.Text;

            string querystring = $"insert into register (login_user, password_user) values ('{login}', '{password}') ";
            SqlCommand command = new SqlCommand(querystring, database.getConnection());
            database.openConnection();


            if(command.ExecuteNonQuery() == 1)
            {
                MessageBox.Show("Your account has been Successfuly Created", "Successfuly");
                new frmLogin().ShowDialog();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Your account has not created", "Failed");
            }
            database.closeConnection();

        }

        private Boolean checkUser()
        {
            var loginUser = txtUsername.Text;
            var passUser = txtPassword.Text;
            
            SqlDataAdapter adapter = new SqlDataAdapter(); 
            DataTable table = new DataTable();
            string querystring = $"select id_user, login_user, password_user from register where login_user = '{loginUser}' and password_user = '{passUser}' ";
            SqlCommand command = new SqlCommand(querystring, database.getConnection());

            adapter.SelectCommand = command;
            adapter.Fill(table);

            if(table.Rows.Count > 0)
            {
                MessageBox.Show("This user already exists");
                return true;
            }
            else
            {
                return false;
            }

        }
        private void checkBxShowPass_CheckedChanged(object sender, EventArgs e)
        {
            if (checkBxShowPass.Checked)
            {
                txtPassword.PasswordChar = '\0';
               
            }
            else
            {
                txtPassword.PasswordChar = '•';
               
            }
        }



        private void label6_Click(object sender, EventArgs e)
        {
            new frmLogin().Show();
            this.Hide();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            txtUsername.Text = "";
            txtPassword.Text = "";
            txtUsername.Focus();
        }
        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }


    }
}