using System;

namespace Factory
{
    public class Director : Position
    {
        public override void Status()
        {
            Console.WriteLine("Director");
        }
    }
}
