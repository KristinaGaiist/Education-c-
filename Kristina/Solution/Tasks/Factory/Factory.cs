using System;

namespace Factory
{
    static class Factory
    {
        static void Main(string[] args)
        {
            Position builder = new Builder();
            Position director = new Director();
            Position secretary = new Secretary();

            secretary.Status();
            director.Status();
            builder.Status();

            Console.ReadLine();
        }
    }
}
