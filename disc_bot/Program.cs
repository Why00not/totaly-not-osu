using System;
using Discord;
using Discord.WebSocket;
using System.Threading.Tasks;
using Discord.Commands;
using Microsoft.Extensions.DependencyInjection;
using System.IO;
//using CSharpDiscordWebhook.NET.Discord;

namespace dis_bot
{
    class person
    {
        //статы
        public int exp = 0;
        public int voice = 0;
        public int gold = 0;
        //инфо
        public string id;
        public string nickname;
        //личное
        public double age;
        public string sex;
        public string name;
        public string bio;

        public person(string c_id,string c_nickname,int c_exp,int c_voice,int c_gold,double c_age,string c_sex,string c_name,string c_bio)
        {
            this.gold = c_gold; 
            this.voice = c_voice;
            this.exp = c_exp;
            this.nickname = c_nickname;
            this.id = c_id;
            this.age = c_age;
            this.sex = c_sex;
            this.bio = c_bio;   
            this.name = c_name;
        }
        public void show_all_info(SocketMessage msg)
        {
            IUser user = msg.Author;
            msg.Channel.SendMessageAsync($"***профиль***\n" +
                $"{user.Username}\n" +
                $"опыт - {this.exp}\n" +
                $"голоса - {this.voice}\n" +
                $"золото - {this.gold}\n" +
                $"имя - {this.name}\n" +
                $"пол - {this.sex}\n" +
                $"возраст - {this.age}\n" +
                $"биография - {this.bio}");
        }
    }
    
    class Program
    {
        public person[] player_massive = new person[10];
        private DiscordSocketClient client;
        private CommandService commands;
        private IServiceProvider _services;
        public int counter = 0;
        public string path = "info.txt";
        //public person player_massiv;

        static void Main(string[] args)
        {
            Program program = new Program();
            program.MainAsync().GetAwaiter().GetResult();
        }

        private async Task MainAsync()
        {
            client = new DiscordSocketClient();
            commands = new CommandService();
            _services = new ServiceCollection()
                .AddSingleton(client)
                .AddSingleton(commands)
                .BuildServiceProvider();


            client.MessageReceived += cmHandler;
            client.Log += Log;
            
            
            //токен (не показывать)
            var token = "";
            load();
            await client.LoginAsync(TokenType.Bot, token);
            await client.StartAsync();
            await Task.Delay(-1);
            //чтобы не завершало само себя
            Console.ReadLine();
        }

        private Task Log(LogMessage msg)
        {
            Console.WriteLine(msg.ToString());
            return Task.CompletedTask;
        }
        
        private async Task cmHandler(SocketMessage msg)
        {
            var message = msg as SocketUserMessage;
            var context = new SocketCommandContext(client, message);
            IUser us = msg.Author;
            SocketGuildUser user = (SocketGuildUser)msg.Author;
            int argpos = 0;
            IWebhook wh;
            if (message.Author.IsBot) return;
            
            if (message.HasStringPrefix("!", ref argpos))
            {
                var result = await commands.ExecuteAsync(context, argpos, _services);
                if (!result.IsSuccess) Console.WriteLine(result.ErrorReason);
                
                switch (message.ToString())
                {
                    case "!help":
                        {
                            msg.Channel.SendMessageAsync($"__**`gaydick`**__\n" +
                                $"`!alive - жив ли бот                                   `\n" +
                                $"`!IWannaRole - если повезет то получишь роль (или мут) `\n" +
                                $"`!register - ргистрация нового пользователя            `\n" +
                                $"`!myinfo - информация о тебе                           `\n" +
                                $"`!wannapic - картиночька                               `\n" +
                                $"`                       ass we can                     `");
                            break;
                        }
                    case "!alive?":
                        {
                            msg.Channel.SendMessageAsync("im alive");
                            break;
                        }
                    case "!IWannaRole":
                        {
                            Random rnd = new Random();
                            int i = Convert.ToInt32(rnd.Next(0, 1000));
                            i = 2;
                            switch (i)
                            {
                                case 1:
                                    {
                                        user.AddRoleAsync(937739747500122130);
                                        msg.Channel.SendMessageAsync($"пользователь {us.Username} получил новую роль");
                                        Console.WriteLine($"{us.Username} got new role");
                                        break;
                                    }
                                case 2:
                                    {
                                        DateTime t1 = DateTime.Now.AddSeconds(15);
                                        DateTime t2 = DateTime.Now;
                                        TimeSpan timer =  t1-t2;
                                        user.SetTimeOutAsync(timer);
                                        msg.Channel.SendMessageAsync($"лошня");
                                        break;
                                    }
                                default:
                                    {
                                        msg.Channel.SendMessageAsync($"тяжело...");
                                        break;
                                    }
                            }                            
                            break;
                        }
                    case "!register":
                        {
                            register_new(user,msg);
                            break;
                        }
                    case "!myinfo":
                        {
                            if (search_in_list(user) == 0)
                            {
                                msg.Channel.SendMessageAsync($"вы еще не зарегистрированы в системе");
                            }
                            else
                            {
                                load();
                                info_out(msg, user);
                            }
                            
                            break;
                        }
                    case "!wannapic":
                        {
                            msg.Channel.SendMessageAsync("https://sun2.beltelecom-by-minsk.userapi.com/impf/luv_XnGV-TE5xTs0sYoWT2jwwdBz7GsDdG6vIw/NtY7Jln94sQ.jpg?size=300x300&quality=96&sign=e185b6518681b69f565b17b940598caf&type=album");
                            break;
                        }
                    case "!flush":
                        {

                            break;
                        }
                }
            }
            if (message.HasStringPrefix("!setage", ref argpos))
            {
                set_age(user,message.ToString());
            }
            if (message.HasStringPrefix("!setname", ref argpos))
            {
                set_name(user, message.ToString());
            }
            if (message.HasStringPrefix("!setbio", ref argpos))
            {
                set_bio(user, message.ToString());
            }
            if (message.HasStringPrefix("!setsex", ref argpos))
            {
                set_sex(user, message.ToString());
            }
        }
        private void set_sex(SocketGuildUser user, string message)
        {
            int num = search_in_list(user) - 1;
            string line = message.ToString();
            line = line.Remove(0, 7);
            player_massive[num].sex = line;
            update_list();
        }
        private void set_name(SocketGuildUser user, string message)
        {
            int num = search_in_list(user) - 1;
            string line = message.ToString();
            line = line.Remove(0, 8);
            player_massive[num].name = line;
            update_list();
        }
        private void set_bio(SocketGuildUser user, string message)
        {
            int num = search_in_list(user) - 1;
            string line = message.ToString();
            line = line.Remove(0, 7);
            player_massive[num].bio = line;
            update_list();
        }
        private void set_age(SocketGuildUser user, string message)
        {
            int num = search_in_list(user) - 1;
            string line = message.ToString();
            line = line.Remove(0, 7);
            double age = Convert.ToDouble(line);
            player_massive[num].age = age;
            update_list();
        }
        private void load()
        {
            counter = 0;//перезагрузка массива
            
            string nm, id,bf,sx,nn,bi;
            int ex, vc, gl;
            double ag;
            
            StreamReader reader = new StreamReader(path);
            while ((nm = reader.ReadLine()) != null)
            {
                id = reader.ReadLine();
                bf = reader.ReadLine();
                ex = Convert.ToInt32(bf);
                bf = reader.ReadLine();
                vc = Convert.ToInt32(bf);
                bf = reader.ReadLine();
                gl = Convert.ToInt32(bf);
                bf = reader.ReadLine();
                ag = Convert.ToDouble(bf);
                nn = reader.ReadLine();
                sx = reader.ReadLine();
                bi = reader.ReadLine();
                player_massive[counter] = new person(id, nm, ex, vc, gl,ag,sx,nn,bi);
                counter++;               
            }
            reader.Close();
        }
        public int check_id(string id, SocketGuildUser user) 
        {
            if (user.Id.ToString() == id)
                return 1;
            else
                return 0;
        }//совпадает ли id
        public int search_in_list(SocketGuildUser user)
        {
            for (int a = 0; a < counter; a++)
            {
                if (check_id(player_massive[a].id, user) == 1)
                {
                    return a+1;
                }
            }
            return 0;
        }//номер ли id в базе
        public void register_new(SocketGuildUser user, SocketMessage msg)
        {
            
            if (search_in_list(user) == 0)
            {
                
                player_massive[counter] = new person(user.Id.ToString(), "gg", 0, 0, 0,0,"def","def","def");
                counter++;
                update_list();
                msg.Channel.SendMessageAsync($"вы успешно зарегистрированы в системе");
            } 
            else
                msg.Channel.SendMessageAsync($"вы уже зарегистрированы в системе");

        }
        public void update_list()
        {
            StreamWriter writer = new StreamWriter(path, false);//false для перезаписи true для дозаписи
            for (int i = 0; i < counter; i++)
            {
                writer.WriteLine(player_massive[i].nickname);
                writer.WriteLine(player_massive[i].id);
                writer.WriteLine(player_massive[i].exp);
                writer.WriteLine(player_massive[i].voice);
                writer.WriteLine(player_massive[i].gold);
                writer.WriteLine(player_massive[i].age);
                writer.WriteLine(player_massive[i].name);
                writer.WriteLine(player_massive[i].sex);
                writer.WriteLine(player_massive[i].bio);
            }
            writer.Close();
        }
        private int info_out(SocketMessage msg, SocketGuildUser user)
        {
            
            string check = user.Id.ToString();
            for(int a = 0; a < counter; a++)
            {
                if (check_id(player_massive[a].id, user) == 1 )
                {
                    player_massive[a].show_all_info(msg); return 1; 
                }                    
            }
            return 0;
        }
    }
}
