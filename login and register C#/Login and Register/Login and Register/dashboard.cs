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
    enum RowState
    {
        Existet,
        New,
        Modified,
        ModifiedNew,
        Deleted
    }
    public partial class dashboard : Form
    {
        DataBase database = new DataBase();
        int selectedRow;
        public dashboard()
        {
            InitializeComponent();
        }
        private void CreateColumns()
        {
            dataGridView.Columns.Add("id", "id");
            dataGridView.Columns.Add("name_of", "Name");
            dataGridView.Columns.Add("count_of", "Quantity");
            dataGridView.Columns.Add("price", "Price");
            dataGridView.Columns.Add("supplier", "Supplier");
            dataGridView.Columns.Add("isNew",String.Empty);
        }
        private void ReadSingleRows(DataGridView dgw, IDataRecord record)
        {
            dgw.Rows.Add(record.GetInt32(0), record.GetString(1),record.GetInt32(2),record.GetInt32(3), record.GetString(4),RowState.ModifiedNew);

        }
        private void refreshDataGrid(DataGridView dgw)
        {
            dgw.Rows.Clear();

            string queryString = $"select * from goods";

            SqlCommand command = new SqlCommand(queryString, database.getConnection());

            database.openConnection();

            SqlDataReader reader = command.ExecuteReader();

            while (reader.Read())
            {
                ReadSingleRows(dgw, reader);
            }
            reader.Close();
        }
        private void dashboard_Load(object sender, EventArgs e)
        {
            CreateColumns();
            refreshDataGrid(dataGridView);
        }

        private void dataGridView_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            selectedRow= e.RowIndex;

            if (e.RowIndex >= 0)
            {
                DataGridViewRow row = dataGridView.Rows[selectedRow];
                textBox_ID.Text = row.Cells[0].Value.ToString();
                textBox_Name.Text = row.Cells[1].Value.ToString();
                textBox_Count.Text = row.Cells[2].Value.ToString();
                textBox_Postav.Text = row.Cells[3].Value.ToString();    
                textBox_Price.Text = row.Cells[4].Value.ToString();
                
            }
        }

        private void btnRefresh_Click(object sender, EventArgs e)
        {
            refreshDataGrid(dataGridView);
        }

        private void btnNewEntry_Click(object sender, EventArgs e)
        {
            dashboard_add addfrm = new dashboard_add();
            addfrm.Show();
        }


        private void search(DataGridView dgw)
        {
            dgw.Rows.Clear();

            string searchstring = $" select * from goods where concat (id, name_of, count_of ,price ,supplier) like '%" + textBox_Search.Text +"%'  ";
            SqlCommand com = new SqlCommand(searchstring,database.getConnection());
            database.openConnection();

            SqlDataReader read = com.ExecuteReader();

            while (read.Read())
            {
                ReadSingleRows(dgw,read);
            }
            read.Close();

        }

        private void textBox_Search_TextChanged(object sender, EventArgs e)
        {
            search(dataGridView);
        }
    }
}
