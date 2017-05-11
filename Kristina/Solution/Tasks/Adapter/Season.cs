using System;

namespace Adapter
{
    public class Season : ISeason
    {
        //TODO: Добавить enum.
        public void Wear (string season)
        {
            if (season == "Winter")
            {
                Console.WriteLine("You should wear a down jacket and winter boots.");
            }
            else if (season == "Summer")
            {
                Console.WriteLine("You should wear shorts and sandals.");
            }
        }
    }
}
