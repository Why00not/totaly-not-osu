namespace mtkurs
{
   
    public partial class Form1 : Form
    {
        public static int counter = 0;
        public user[] user_mas = new user[10];
        public Form1()
        {
            InitializeComponent();
            load();
        }    
        private void load() {
            string log, pas, bf;
            int adm,ct = 0;
            StreamReader reader = new StreamReader("userlist.txt");
            while ((log = reader.ReadLine()) != null)
            {
                pas = reader.ReadLine();
                bf = reader.ReadLine();
                adm = Convert.ToInt32(bf);
                user_mas[counter] = new user(log, pas, adm);
                counter++;
            }
           
            reader.Close();
        }
        private int search(string lg,string pw)
        {
            for(int i = 0; i < counter; i++)
            {
                if ((user_mas[i].login == lg) && (user_mas[i].password == pw))
                    return i;
            }
            return -1;
        }
        private void entBt_Click(object sender, EventArgs e)
        {
            string lg, pw;
            lg = textBox1.Text;
            pw = textBox2.Text;
            if (search(lg, pw) == -1)
                statLb.Text = "Данные введены некорректно";
            else
            {
                StreamWriter writer = new StreamWriter("mode.txt");
                switch (search(lg, pw))
                {
                    case 0:
                        {
                            writer.WriteLine("0");
                            break;
                        }                       
                    case 1:
                        {
                            writer.WriteLine("1");
                            break;
                        }
                }
                writer.Close();
                Form2 f2 = new Form2();
                f2.Show();
            }
        }

        private void gueBt_Click(object sender, EventArgs e)
        {
            Form2 f2 = new Form2();
            f2.Show();
        }
    }
    public class user
    {
        public string login;
        public string password;
        public int admin;

        public user(string lg, string pw, int ad)
        {
            this.login = lg;
            this.password = pw;
            this.admin = ad;
        }
    }
}