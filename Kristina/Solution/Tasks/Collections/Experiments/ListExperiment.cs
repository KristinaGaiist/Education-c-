using System;
using System.Collections.Generic;
using System.Linq;

namespace Tasks.Collections.Experiments
{
    public class ListExperiment : IExperiment
    {
        public void Start()
        {
            var list = new List<string>();
            list = new List<string>()
            {
                 "aye",
                 "bob",
                 "segment"
            };
            list.Add("Alexey");
            list.Insert(2, "bob2");

            Console.WriteLine($"bob == {list[1]}");
            list[4] = "Kristina";

            Console.WriteLine($"Kristina == {list[4]}");

            list.Remove("aye");
            Console.WriteLine(string.Join("; ", list));

            list.RemoveAt(3);
            Console.WriteLine(string.Join("; ", list));

            var ints = new List<int>();
            var random = new Random();

            for (var i = 0; i < 100; i++)
            {
                ints.Add(random.Next(100));
            }

            Console.WriteLine(string.Join("; ", ints));

            ints.Sort();
            Console.WriteLine(string.Join("; ", ints));

            ints.Sort(Compare);
            Console.WriteLine(string.Join("; ", ints));

            Console.WriteLine($"Count = {ints.Count}");

            // Вывести количество чисел > 50;

            var count = ints.Count(element => element > 50);
            Console.WriteLine($"Count>50 = {count}");

            count = ints.Count(Count);
            Console.WriteLine($"Count<=50 = {count}");

            Console.WriteLine(ints.Contains(53));

            Console.WriteLine(ints.IndexOf(53));

            int[] array = ints.ToArray();
            string[] array2 = ints.Select(a => a.ToString()).ToArray();
        }

        private static bool Count(int element)
        {
            return element <= 50;
        }
        private static int Compare(int left, int right)
        {
            if (left < right)
            {
                return 1;
            }
            else if (left > right)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}
