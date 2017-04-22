using System;

namespace Labs.Sharp.Binary
{
    public class Program
    {
        private const string _exit = "For exit, please, enter 'Ctrl + C'.";
        private const string _start = "Please, enter number: ";
        private const string _incorrect = "Please, enter correct number.";

        public static void Main(string[] args)
        {
            Console.WriteLine(_exit);
            Console.WriteLine();

            while (true)
            {
                try
                {
                    Console.Write(_start);

                    var number = int.Parse(Console.ReadLine());
                    var binary = new BinaryInt(number);
                    Console.WriteLine($"Result: {binary}");
                }
                catch (NumberLessZeroException error)
                {
                    Console.WriteLine(error.Message);
                }
                catch (FormatException)
                {
                    Console.WriteLine(_incorrect);
                }
            }
        }
    }
}
