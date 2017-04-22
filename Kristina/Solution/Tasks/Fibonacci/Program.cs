using System;
using System.Diagnostics;

namespace Tasks.Fibonacci
{
    public class Program
    {
        private const string _start = "Please, enter a number: ";

        public static void Main(string[] args)
        {
            var swatch = new Stopwatch();
            var fibonacci = new Fibonacci();

            while (true)
            {
                Console.Write(_start);
                var number = long.Parse(Console.ReadLine());

                swatch.Start();
                var result = fibonacci.Calculate(number);
                swatch.Stop();

                Console.WriteLine(result);
                Console.WriteLine(swatch.Elapsed);

                swatch.Reset();
            }
        }
    }
}
