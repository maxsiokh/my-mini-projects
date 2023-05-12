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

   

    public partial class frmLogin : Form
    { 
        DataBase database = new DataBase();
        public frmLogin()
        {
            StartPosition = FormStartPosition.CenterScreen;
            InitializeComponent();
        }
        private void frmLogin_Load(object sender, EventArgs e)
        {
            txtPassword.PasswordChar = '•';
            txtPassword.MaxLength = 50;
            txtUsername.MaxLength = 50;
        }


    private void btnLogin_Click(object sender, EventArgs e)
        {
          var login_User = txtUsername.Text;
          var pass_User = txtPassword.Text;


            SqlDataAdapter adapter = new SqlDataAdapter();
            DataTable table = new DataTable();

            string querystring = $"select id_user, login_user, password_user from register where login_user = '{login_User}' and password_user = '{pass_User}' ";
            SqlCommand command = new SqlCommand(querystring,database.getConnection());

            adapter.SelectCommand = command;
            adapter.Fill(table);

            if(table.Rows.Count == 1)
            {
                MessageBox.Show("You have successfully logged in!", "Successfully!", MessageBoxButtons.OK , MessageBoxIcon.Information  );
                dashboard dashboard = new dashboard();
                this.Hide();
                dashboard.ShowDialog();
                this.Show();
            }
            else
            {
                MessageBox.Show("Does not have such an account!", "Not have acc!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void button1_Click(object sender, EventArgs e) //clear
        {
            txtPassword.Text = "";
            txtUsername.Text = "";
            txtUsername.Focus();
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

        private void label6_Click(object sender, EventArgs e) //go to register
        {
            new frmRegister().Show();
            this.Hide();
        }
    }
}
