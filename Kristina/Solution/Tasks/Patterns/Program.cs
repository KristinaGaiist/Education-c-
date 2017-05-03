﻿using System;

namespace Patterns
{
    class Program
    {
        static void Main(string[] args)
        {
            var _planet = new Universe();

            Console.WriteLine("Are you on the planet Sun, where are you going to fly?");
            var name = Console.ReadLine();
            
            var result = _planet.Fly(name);

            var sun = Sun.Instance();

            Console.WriteLine($"1 == {Sun.Count}");

            Console.WriteLine($"Your flight will be {result} days");

            Console.ReadLine();
        }
    }
}
