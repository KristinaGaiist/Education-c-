using System;

namespace Factory
{
    //TODO: Фабрику я не вижу. Самого метода для генерации объекта нужного типа нет. Видимо им должен был быть Builder.
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
