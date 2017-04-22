using System;
using System.Collections.Generic;
using System.Linq;
using Tasks.Persons;

namespace Tasks.Collections.Experiments
{
    public class LinqExperiment : IExperiment
    {
        public void Start()
        {
            var list = CreateList();

            // Вывести всех с фамилией GAIST
            var where = list.Where(GetGaiist);
            Console.WriteLine($"All GAIIST: {string.Join("; ", where)}");

            // Найти первого с фамилией GAIST
            var first = list.First(GetGaiist);
            Console.WriteLine($"First GAIIST: {first}");

            // Найти последнего с фамилией GAIST
            var last = list.LastOrDefault(GetGaiist);
            Console.WriteLine($"Last GAIIST: {last}");

            // Посчитать колличество людей с фамилией GAIST
            var count = list.Count(GetGaiist);
            Console.WriteLine($"Count of GAIIST: {string.Join("; ", count)}");

            // Создать переменную (список), в которой будут храниться все имена из списка людей
            var names = list.Select(element => element.Name);
            Console.WriteLine($"Name list: {string.Join("; ", names)}");

            // Создать переменную (список), в которой будут храниться все возрасты из списка людей
            var ages = list.Select(element => element.Age);
            Console.WriteLine($"Age list: {string.Join("; ", ages)}");

            // Вывести всех старше 18 лет
            var over = list.Where(element => 18 <= element.Age);
            Console.WriteLine($"All who older than 18 year: {string.Join("; ", over)}");

            // Вывести всех младше 17 лет
            var under = list.Where(element => 17 > element.Age);
            Console.WriteLine($"All who younger than 17 year: {string.Join("; ", under)}");

            // Пробежаться по всем элементам и вывести в консоль
            list.ForEach(person => Console.WriteLine(person));

            // Найти самого младшего 
            var min = list.Min(person => person.Age);
            var youngest = list.First(element => min == element.Age);
            Console.WriteLine($"The youngest person: {youngest}");

            // Найти самого старшего 
            var max = list.Max(element => element.Age);
            var oldest = list.First(element => min == element.Age);
            Console.WriteLine($"The oldet person: {oldest}");

            // Вывести массив char
            var chars = ages.Select(age => (char)age);

            foreach (var element in chars)
            {
                Console.WriteLine(element);
            }
        }
        private bool GetGaiist(Person person) => "GAIIST" == person.LastName;

        private static List<Person> CreateList()
        {
            return new List<Person>()
            {
                new Person("Kristina", "Koreneva", "Viktorovna", new DateTime(1997, 08, 18)),
                new Person("Alexey", "GAIIST", "Dmitrievich", new DateTime(1997, 02, 11)),
                new Person("Mary", "Rusakova", "Andreeva", new DateTime(1990, 09, 22)),
                new Person("Yakov", "Vins", "Yakovich", new DateTime(1994, 12, 21)),
                new Person("Alina", "GAIIST", "Alexeevna", new DateTime(2000, 10, 05)),
                new Person("Margarita", "Borisova", "Sergeevna", new DateTime(2001, 11, 07)),
                new Person("Arina", "Demonova", "Vladimirovna", new DateTime(2005, 03, 17)),
                new Person("Ivan", "GAIIST", "Romanovich", new DateTime(1992, 04, 28)),
                new Person("Andrey", "Slastenko", "Mihailovich", new DateTime(2010, 05, 01)),
                new Person("Vlad", "GAIIST", "Ilina", new DateTime(1989, 07, 05))
            };
        }
    }
}
