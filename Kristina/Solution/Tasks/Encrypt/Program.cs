using System;

namespace Tasks.Encrypt
{
    public class Program
    {
        private const string _start = "Please, enter strings:";
        private const int _key1 = 7;
        private const int _key2 = 20;

        public static void Main(string[] args)
        {
            Console.Write(_start);
            var str = Console.ReadLine();

            var encoder = new Encoder(_key1, _key2);
            var encode = encoder.Encryption(str);

            Console.WriteLine(encode);

            var result = encoder.Decryption(encode);

            Console.WriteLine(result);

            encoder = new Encoder(_key1, _key2);
            var resultFromServer = encoder.Decryption(encode);

            if (str == result && str == resultFromServer)
            {
                Console.WriteLine("Programm work is good.");
            }
            else
            {
                Console.WriteLine("Programm work is bad.");
            }

            Console.ReadLine();
        }
    }
}
