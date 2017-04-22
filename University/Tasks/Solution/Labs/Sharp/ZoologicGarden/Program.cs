using Labs.Sharp.ZoologicGarden.Animals.Cats;
using System;
using System.Collections.Generic;
using System.Text;

namespace Labs.Sharp.ZoologicGarden
{
    public class Program
    {
        private static List<Animal> _list = new List<Animal>();
        private static AnimalsFactory _factory = new AnimalsFactory();
        private static Animal ab = new Tiger("Alex", 23.2);

        public static void Main(string[] args)
        {
            Console.WriteLine(Menu());

            while (true)
            {

                try
                {
                    Console.Write("Enter command: ");
                    var command = int.Parse(Console.ReadLine());

                    if (0 == command)
                    {
                        Console.WriteLine(Menu());
                    }
                    else if (-1 == command)
                    {
                        break;
                    }
                    else if (1 == command)
                    {
                        Add();
                    }
                    else if (2 == command)
                    {
                        ShowAllAnimals();
                    }
                    else if (3 == command)
                    {
                        MakeSteps();
                    }
                    else if (4 == command)
                    {
                        Says();
                    }
                    else if (5 == command)
                    {
                        Huinya();
                    }
                    else
                    {
                        Console.WriteLine("Please, enter command yet.");
                    }
                }
                catch (Exception e)
                {
                    Console.WriteLine($"Exception: {e.Message}");
                }
            }
        }

        private static string Menu()
        {
            var builder = new StringBuilder("Commands: ");

            builder.AppendLine();
            builder.AppendLine("-1. Exit.");
            builder.AppendLine("0. Get menu.");
            builder.AppendLine("1. Add animal.");
            builder.AppendLine("2. Show all animals.");
            builder.AppendLine("3. Make step.");
            builder.AppendLine("4. Say.");
            builder.AppendLine("5. Huinya.");

            return builder.ToString();
        }
        private static void Add()
        {
            Console.Write("Please, enter type: ");
            var type = (AnimalType)Enum.Parse(typeof(AnimalType), Console.ReadLine());

            Console.Write("Please, enter name: ");
            var name = Console.ReadLine();

            Console.Write("Please, enter weight: ");
            var weight = double.Parse(Console.ReadLine());

            var element = _factory.Get(type, name, weight);

            _list.Add(element);
        }
        private static void ShowAllAnimals()
        {
            for (var i = 0; i < _list.Count; i++)
            {
                Console.WriteLine($"[{i}] = {_list[i]}");
            }
        }

        private static void MakeSteps()
        {
            Console.WriteLine("Please, enter the number of steps");
            var count = int.Parse(Console.ReadLine());

            Console.WriteLine("Please, enter the number of animal, who must to do the step");
            var i = int.Parse(Console.ReadLine());

            var result = _list[i].MakeStep(count);
            Console.WriteLine(result);
        }

        private static void Says()
        {
            Console.WriteLine("Please, enter number animal, who must say");
            var i = int.Parse(Console.ReadLine());

            var result = _list[i].Say();
            Console.WriteLine(result);
        }
        private static void Huinya()
        {
            Console.WriteLine(ab.Hello1());
            Console.WriteLine(((IAnimalA)ab).Hello1());
            Console.WriteLine(((IAnimalB)ab).Hello1());

            Console.WriteLine(ab.Hello2());
            Console.WriteLine(((IAnimalA)ab).Hello2());
            Console.WriteLine(((IAnimalB)ab).Hello2());

            Console.WriteLine(((Tiger)ab).Hello1());
        }
    }
}
