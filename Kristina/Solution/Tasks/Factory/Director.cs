using System;

//TODO: Что с namespace?
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
