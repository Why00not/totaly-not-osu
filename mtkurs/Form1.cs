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
        private void reg_new()
        {
            string lg, pw;
            lg = textBox1.Text;
            pw = textBox2.Text;
            if (search(lg, pw) == 1 || search(lg, pw) == 0)
                statLb.Text = "Такой пользователь уже существует";
            else
            {
                user_mas[counter] = new user(lg, pw, 0);
                counter++;

                StreamWriter writer = new StreamWriter("userlist.txt", false);//false для перезаписи true для дозаписи
                for (int i = 0; i < counter; i++)
                {
                    writer.WriteLine(user_mas[i].login);
                    writer.WriteLine(user_mas[i].password);
                    writer.WriteLine(user_mas[i].admin);
                }
                writer.Close();
                statLb.Text = " ";
            }
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
            StreamWriter writer = new StreamWriter("mode.txt");
            writer.WriteLine("2");
            writer.Close();
            f2.Show();
        }

        private void regBt_Click(object sender, EventArgs e)
        {
            reg_new();
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