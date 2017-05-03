using System;

namespace Adapter
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Hello. Enter the temperature in your city and I'll tell you what to wear: ");

            while (true)
            {
                var temperature = int.Parse(Console.ReadLine());

                if (temperature < 0)
                {
                    var person = new Person("Winter");
                    var season = new Season();
                    person.Wear(season);
                }
                else if (temperature > 17)
                {
                    var person = new Person("Summer");
                    var season = new Season();
                    person.Wear(season);
                }
                else if (temperature >= 0 && temperature <= 17)
                {
                    var person = new Person("Spring");
                    var autumn = new Different();
                    ISeason spring = new DifferentToSeason(autumn);
                    person.Wear(spring);
                }
                Console.Write("Are you mistake? Enter the temperature again: ");
            }
        }
    }
}
