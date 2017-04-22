using System;
using System.Collections.Generic;

namespace Tasks.Collections.Experiments
{
    public class DictionaryExperiment : IExperiment
    {
        public void Start()
        {
            var dictionary = new Dictionary<int, string>();
            dictionary = new Dictionary<int, string>()
            {
                [1] = "GAIIST",
                [2] = "dance",
                [3] = "GUCCI",
                [5] = "love",
                [6] = "kiss",
                [9] = "gremmi",
                [234] = "OXXXY",
                [547] = "Ohuennyi"
            };

            foreach (var element in dictionary)
            {
                Console.WriteLine($"[{element.Key}] = \"{element.Value}\"");
            }

            // TODO: Использовать каждый метод из моих ответов. Со всем разобраться

            // Вывод по ключу.
            var kiss = dictionary[6];
            Console.WriteLine($"kis == {kiss}");

            // Колличество элементов.
            Console.WriteLine($"Count = {dictionary.Count}");

            // Добавление (ключ, значение)
            dictionary.Add(54, "mama");

            // Цикл вывода в консоль.
            WriteToConsole(dictionary);

            // ContainsKey - есть ли в словаре заданный ключ.
            Console.WriteLine(dictionary.ContainsKey(7));

            // ContainsValue - есть ли в словаре заданное значение.
            Console.WriteLine(dictionary.ContainsValue("OXXXY"));

            // Удаление по ключу.
            dictionary.Remove(9);
            WriteToConsole(dictionary);

            foreach (var key in dictionary.Keys)
            {
                Console.WriteLine(key);
            }
            foreach (var value in dictionary.Values)
            {
                Console.WriteLine(value);
            }
        }
        private static void WriteToConsole(Dictionary<int, string> dictionary)
        {
            foreach (var element in dictionary)
            {
                Console.WriteLine($"[{element.Key}] = \"{element.Value}\"");
            }
        }
    }
}
