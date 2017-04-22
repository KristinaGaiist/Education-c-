using System;
using System.Collections.Generic;

namespace Tasks.Collections.Experiments
{
    public class QueueExperiment : IExperiment
    {
        public void Start()
        {
            var queue = new Queue<int>();
            var run = new Random();

            // Добавление элемента в конец очереди
            for (int i = 0; i < 15; i++)
            {
                queue.Enqueue(run.Next(1, 30));
            }
            Write(queue);

            // Количество элементов в очереди
            var count = queue.Count;
            Console.WriteLine($"Count = {count}");

            // Удаление первого элемента в очереди. Если на момент вызова метода Dequeue() элементов в очереди больше нет, генерируется исключение InvalidOperationException.
            var dequeue = queue.Dequeue();
            Console.Write($"First element in queue: {dequeue}");

            //  Читает элемент из головы очереди, но не удаляет его
            var peek = queue.Peek();
            Console.WriteLine($"First element: {peek}");

            queue.TrimExcess();
            Write(queue);
        }

        // Метод вывода очереди на экран
        private static void Write(Queue<int> queue)
        {
            Console.Write("Queue: ");
            foreach (var element in queue)
            {
                Console.Write(element + "; ");
            }
        }
    }
}
