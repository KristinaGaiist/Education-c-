using System;
using Tasks.Persons;

namespace Experiments
{
    class Program
    {
        static void Main(string[] args)
        {
            var kristina = new Person("Koreneva", "Kristina", "Victorovna", new DateTime(1997, 08, 18));
            var gaiist = new Person("GAIIST", "Alexey", "Dmitrievich", new DateTime(1997, 02, 11));

            object[] array4 = { 1, 'f', kristina, "GAIIST", gaiist };

            foreach (object element in array4)
            {
                Console.WriteLine(element);
            }

            Console.ReadLine();
        }
    }
}
