using System;

namespace File
{
    class Program
    {
        static void Main(string[] args)
        {
            var reader = new Reader();

            reader.Read();

            Console.WriteLine();
            reader.ReadLineByLine();

            Console.WriteLine();
            reader.ReadBlocks();

            Console.ReadLine();
        }
    }
}
