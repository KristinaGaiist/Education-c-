using System;

namespace Factory
{
    public class Secretary : Position
    {
        public override void Status()
        {
            Console.WriteLine("Secretary");
        }
    }
}
