using System;

namespace Factory
{
    public class Builder : Position
    {
        public override void Status ()
        {
            Console.WriteLine("Builder");
        }
    }
}
