using System;

namespace Patterns
{
    //TODO: Модификаторы доступа проверить везде.
    class Program
    {
        static void Main(string[] args)
        {
            //TODO: Почему с нижнего подчёркивания? Это же не поле
            var _planet = new Universe();

            Console.WriteLine("Are you on the planet Sun, where are you going to fly?");
            var name = Console.ReadLine();
            
            var result = _planet.Fly(name);

            var sun = Sun.Instance();

            Console.WriteLine($"Your flight will be {result} days");

            Console.ReadLine();
        }
    }
}
