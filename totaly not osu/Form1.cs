using System.Media;
using System.IO;

namespace totaly_not_osu
{

    public partial class Form1 : Form
    {
        public Bitmap old_TargTex = Resource1.old_cr;
        public Bitmap background, score_spot, hp_bar;
        public Bitmap[] old_t_an = new Bitmap[8], new_t_an = new Bitmap[8];

        private player pl = new player(0, "0", 0, 0, 0);
        private target[] targets = new target[200];

        public Random r = new Random();

        public int tg_c = 50, score = 0, flag = 0, tick = 0, spawn_delay = 1000,
            desp_delay = 200, first_factor = 0, cl_num = 0,tg_num = 0;
        public int[] speed = new int[10000];
        public int x, y, del,load_counter = 0;

        public double anim_speed_mult = 30;

        public bool isclick = false, anb = true, anr = false, rp = true,load_mode = false;

        private Point new_tg_pos = new Point(420, 380), old_tg_pos = new Point(420, 380);

        public DateTime t1, t2, Time_sp, Time_cl, time_start;

        public Rectangle old_targ_rect, new_targ_rect;

        public StreamWriter sw = new StreamWriter(@"level1.txt");
        public StreamReader sr = new StreamReader(@"level.txt");


        public void init()
        {
            scorelb.Text = "Score : 0";
            load();
            time_start = DateTime.Now.AddSeconds(4);
            SoundPlayer sp = new SoundPlayer("circles.wav");
            sp.Play();
        }
        private void Form1_Click(object sender, EventArgs e)
        {
            var localpos = this.PointToClient(Cursor.Position);
            first_factor = 1;
            if (load_mode)
            {
                sw.WriteLine(localpos.X);
                sw.WriteLine(localpos.Y);
                sw.WriteLine((t1 - time_start).TotalMilliseconds);

            }


            if (localpos.X < old_tg_pos.X + 100 && localpos.X > old_tg_pos.X - 50 && localpos.Y < old_tg_pos.Y + 50 && localpos.Y > old_tg_pos.Y - 50)
            {
                isclick = true;

                score++;
                cl_event();
            }

        }
        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;

            old_targ_rect = new Rectangle(old_tg_pos.X - tg_c, old_tg_pos.Y - tg_c, 100, 100);
            new_targ_rect = new Rectangle(new_tg_pos.X - tg_c, new_tg_pos.Y - tg_c, 100, 100);

            t1 = DateTime.Now;
            tick++;

            if (tick >= (800 / anim_speed_mult))
                tick = 0;

            if (first_factor == 0)
            {
                t2 = DateTime.Now;
                draw_new(g);
                if (t1 >= time_start)
                    cl_event();
                timelab.Text = (time_start - t2).ToString();
            }
            else
            {
                if (load_mode)
                    draw_prc(g);
                else
                    draw_prc2(g);
                timelab.Text = "";
            }

            scorelb.Text = $"Score : {score}";
        }
        public void draw_prc(Graphics g)
        {

            new_targ_rect = new Rectangle(new_tg_pos.X - tg_c, new_tg_pos.Y - tg_c, 100, 100);
            if (anb)
            {
                anim(tick, g, new_t_an, new_targ_rect);
                anr = false;
            }
            if (t1 >= Time_cl.AddMilliseconds(spawn_delay))
            {
                anb = false;
                if (rp)
                {
                    replace();//вместо time_cl использовать время относительно старта  в млс spawn = (time-400) despawn = 400
                    rp = false;
                }
                old_targ_rect = new Rectangle(old_tg_pos.X - tg_c, old_tg_pos.Y - tg_c, 100, 100);
                anim(tick, g, old_t_an, old_targ_rect);
                if (t1 >= Time_cl.AddMilliseconds(spawn_delay + desp_delay))
                    cl_event();
            }
        }
        public void draw_prc2(Graphics g)
        {

            new_targ_rect = new Rectangle(new_tg_pos.X - tg_c, new_tg_pos.Y - tg_c, 100, 100);
            if (anb)
            {
                anim(tick, g, new_t_an, new_targ_rect);
                anr = false;
            }
            if (t1 >= time_start.AddMilliseconds(spawn_delay))
            {
                anb = false;
                if (rp)
                {
                    replace();//вместо time_cl использовать время относительно старта  в млс spawn = (time-400) despawn = 400
                    rp = false;
                }
                old_targ_rect = new Rectangle(old_tg_pos.X - tg_c, old_tg_pos.Y - tg_c, 100, 100);
                anim(tick, g, old_t_an, old_targ_rect);
                if (t1 >= time_start.AddMilliseconds(spawn_delay + desp_delay))
                    cl_event();
            }
        }
        public void upd_targ()
        {
            if (load_mode)
            {
                new_tg_pos.X = r.Next(130, 630);
                new_tg_pos.Y = r.Next(120, 550);
            }
            else
            {
                new_tg_pos.X = targets[tg_num].x;
                new_tg_pos.Y = targets[tg_num].y;
                spawn_delay = targets[tg_num].delay - desp_delay;
                tg_num++;
            }

            flag = 1;
        }
        public void cl_event()
        {
            rp = true;
            anb = true;
            anr = false;
            Time_cl = DateTime.Now;
            first_factor++;
            if (isclick)
            {
                speed[cl_num] = check_time(Time_cl, Time_sp) - spawn_delay;
                if (first_factor != 0)
                    speed[0] = 0;
                cl_num++;
                isclick = false;
            }
            upd_targ();
        }
        public void load()
        {
            old_t_an[0] = Resource1.c1;
            old_t_an[1] = Resource1.c2;
            old_t_an[2] = Resource1.c3;
            old_t_an[3] = Resource1.c4;
            old_t_an[4] = Resource1.c5;
            old_t_an[5] = Resource1.c6;
            old_t_an[6] = Resource1.c7;
            old_t_an[7] = Resource1.c8;

            new_t_an[0] = Resource1.cn1;
            new_t_an[1] = Resource1.cn5;
            new_t_an[2] = Resource1.cn2;
            new_t_an[3] = Resource1.cn6;
            new_t_an[4] = Resource1.cn3;
            new_t_an[5] = Resource1.cn7;
            new_t_an[6] = Resource1.cn4;
            new_t_an[7] = Resource1.cn8;
            if (!load_mode)
            {
                string buf;
                while ((buf = sr.ReadLine()) != null)
                {
                    x = System.Convert.ToInt32(buf);
                    y = System.Convert.ToInt32(sr.ReadLine());
                    del = (int)Math.Floor(System.Convert.ToDouble(sr.ReadLine()));
                    targets[load_counter] = new target(x, y, del);
                    load_counter++;
                }
            }
            

        }
        public int check_time(DateTime t1, DateTime t2)
        {
            TimeSpan ts = new TimeSpan();
            ts = t1 - t2;
            return (int)Math.Abs(Math.Floor(ts.TotalMilliseconds));
        }
        public void draw_new(Graphics g)
        {
            if (flag != 0)
            {
                Time_sp = DateTime.Now;
                flag = 0;
            }
            var new_targ_rect = new Rectangle(new_tg_pos.X - tg_c, new_tg_pos.Y - tg_c, 100, 100);
            g.DrawImage(old_TargTex, new_targ_rect);
        }
        public void anim(int t, Graphics g, Bitmap[] mass, Rectangle rect)
        {
            if (flag != 0)
            {
                Time_sp = DateTime.Now;
                flag = 0;
            }
            double b = t / (100 / anim_speed_mult);
            int a = (int)Math.Floor(b);
            switch (a)
            {
                case 0:
                    {
                        g.DrawImage(mass[0], rect);
                        break;
                    }
                case 1:
                    {
                        g.DrawImage(mass[1], rect);
                        break;
                    }
                case 2:
                    {
                        g.DrawImage(mass[2], rect);
                        break;
                    }
                case 3:
                    {
                        g.DrawImage(mass[3], rect);
                        break;
                    }
                case 4:
                    {
                        g.DrawImage(mass[4], rect);
                        break;
                    }
                case 5:
                    {
                        g.DrawImage(mass[5], rect);
                        break;
                    }
                case 6:
                    {
                        g.DrawImage(mass[6], rect);
                        break;
                    }
                case 7:
                    {
                        g.DrawImage(mass[7], rect);
                        break;
                    }
                case 8:
                    {
                        g.DrawImage(mass[0], rect);
                        break;
                    }
                default:
                    {
                        a = 0;
                        break;
                    }
            }
        }
        public void update_data()
        {
            pl.score = score;
            pl.cps = get_mid(speed, cl_num);
            textBox1.Text = get_mid(speed, cl_num).ToString();
        }
        public void replace()
        {
            old_tg_pos.X = new_tg_pos.X;
            old_tg_pos.Y = new_tg_pos.Y;
        }
        public double get_mid(int[] mass, int size)
        {
            double mid = 0;
            for (int i = 0; i < size; i++)
            {
                mid += mass[i];
            }
            return (mid / size);
        }
        private void timer1_Tick(object sender, EventArgs e)
        {
            Refresh();
        }
        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (load_mode)
            {
                sw.Close();
            }
            else
            {
                sr.Close();
            }
            
        }
        private void timer2_Tick(object sender, EventArgs e)
        {
            update_data();
        }
        public Form1()
        {
            InitializeComponent();
            SetStyle(ControlStyles.OptimizedDoubleBuffer |
                ControlStyles.AllPaintingInWmPaint |
                ControlStyles.UserPaint, true);
            UpdateStyles();
            init();
        }
    }
    class player
    {
        public int id;
        public string name;
        public int accuracity;
        public int score;
        public double cps;
        public player(int id, string name, int accuracity, int score, double cps)
        {
            this.id = id;
            this.name = name;
            this.accuracity = accuracity;
            this.score = score;
            this.cps = cps;
        }
    }
    class target
    {
        public int x;
        public int y;
        public int delay;
        public target(int x,int y,int delay)
        {
            this.x = x;
            this.y = y;
            this.delay = delay;
        }
    }

}