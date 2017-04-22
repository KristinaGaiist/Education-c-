using System;
using System.Text;

namespace Tasks.Strings
{
    public class Program
    {
        private const string _start = "Please, enter strings";
        private const string _end = "end";
        private const string _enterKey = "Please, enter any key.";

        public static void Main(string[] args)
        {
            Console.WriteLine(_start);

            var builder = new StringBuilder();
            var str = string.Empty;

            while (!str.Contains(_end))
            {
                str = Console.ReadLine();
                builder.Append(str);
                builder.Append(" ");
            }
            
            var result = builder.ToString().Trim();
            var words = result.Split(' ');
            Array.Reverse(words);

            Console.WriteLine($"Number of words: {words.Length}");
            Console.WriteLine($"All words: {string.Join("; ", words)}");
            Console.WriteLine($"Number of simbol: {result.Length}");

            Console.Write(_enterKey);
            Console.ReadLine();
        }
    }
}
