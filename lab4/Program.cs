using System.Security.Cryptography;
using System.Text;

public class lab4
{
    public static byte[] signaturebytes;
    public static RSAParameters createsigntxt(string text,string oid)
    {
        //перегоняем текст в битовый формат
        byte[] messagebytes = Encoding.UTF8.GetBytes(text);

        //делаем хеш код по мд5
        MD5 md5 = new MD5CryptoServiceProvider();
        byte[] hashbytes = md5.ComputeHash(messagebytes);

        //перегонка в 16ричный формат
        var hexString = BitConverter.ToString(hashbytes);
        //hexString = hexString.Replace("-", "");
        Console.WriteLine("хэш код : " + hexString + "\n");
        Console.WriteLine("длина хэш кода : " + md5.HashSize + "\n");

        //шифруем по рса
        RSACryptoServiceProvider rsa = new RSACryptoServiceProvider();
        signaturebytes = rsa.SignHash(hashbytes,oid);
        
        //значение эцп
        hexString = BitConverter.ToString(signaturebytes);
        Console.WriteLine("значение эцп : " + hexString + "\n");
        
        
        RSAParameters ndparams = rsa.ExportParameters(true);
        Console.WriteLine("размер ключа : " + rsa.KeySize + "\n");
        Console.WriteLine("открытый ключ : " + BitConverter.ToString(ndparams.Exponent)  + "\n");
        Console.WriteLine("закрытый ключ : " + BitConverter.ToString(ndparams.D) + "\n");
        Console.WriteLine("N : " + BitConverter.ToString(ndparams.Modulus) + "\n");
        Console.WriteLine("P : " + BitConverter.ToString(ndparams.P) + "\n");
        Console.WriteLine("Q : " + BitConverter.ToString(ndparams.Q) + "\n");


        //сохраняем параметры шифрования
        RSAParameters rsaparams = rsa.ExportParameters(false);
        return rsaparams;
    }
    public static bool verifysigntxt(string text,string oid, RSAParameters rsaparams)
    {
        //перегоняем текст в битовый формат
        byte[] messagebytes = Encoding.UTF8.GetBytes(text);

        //делаем хеш код по мд5
        MD5 md5 = new MD5CryptoServiceProvider();
        byte[] hashbytes = md5.ComputeHash(messagebytes);

        RSACryptoServiceProvider rsa = new RSACryptoServiceProvider();

        //вводим параметры из прошлого шифрования
        rsa.ImportParameters(rsaparams);
        
        //сверяем результаты
        bool match = rsa.VerifyHash(hashbytes, oid, signaturebytes);
        return match;
    }

    public static void Main()
    {
        string oid = "1.2.840.113549.2.5";
        string text = "i love security";      
        RSAParameters rsaparam = createsigntxt(text, oid);
        bool match = verifysigntxt(text, oid, rsaparam);
        if (match)
            Console.WriteLine("результат : верифицировано");
        else
            Console.WriteLine("результат : не верифицировано");
    }
}