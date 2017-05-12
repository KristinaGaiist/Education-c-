using System;

namespace Tasks.Collections.Experiments
{
    public class TryCatchExperiment : IExperiment
    {
        public void Start()
        {
            Console.Write("Введите a: ");
            var a = int.Parse(Console.ReadLine());

            Console.Write("Введите b: ");
            var b = int.Parse(Console.ReadLine());

            Console.Write("Введите c: ");
            var c = int.Parse(Console.ReadLine());

            var result = Computation(a, b, c);
            Console.WriteLine("Результат: " + string.Join(",", result));
        }

        private double[] Computation(int a, int b, int c)
        {
            var d = (b ^ 2) - 4 * a * c;

            if (0 == d)
            {
                var x = (-b) / (2 * a);

                return new[] { (double)x };
            }
            else if (d < 0)
            {
                throw new DiscriminantNotLessZeroException();
            }
            else
            {
                var x1 = ((-b) + Math.Sqrt(d)) / (2 * a);
                var x2 = ((-b) - Math.Sqrt(d)) / (2 * a);

                return new[] { x1, x2 };
            }
        }
    }
}
