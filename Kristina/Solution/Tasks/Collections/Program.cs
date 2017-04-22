using System;
using Tasks.Collections.Experiments;

namespace Tasks.Collections
{
    public class Program
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                try
                {
                    Console.WriteLine("Enter experiment: ");
                    var experiment = (Experiment)Enum.Parse(typeof(Experiment), Console.ReadLine());

                    var element = ExperimentFactory.Get(experiment);
                    element.Start();
                }
                catch (ArgumentException e)
                {
                    Console.WriteLine($"ArgumentException: {e.Message}");
                }
                catch (DiscriminantNotLessZeroException e)
                {
                    Console.WriteLine($"DiscriminantNotLessZeroException: {e.Message}");
                }
                catch (FormatException e)
                {
                    Console.WriteLine($"FormatException: {e.Message}");
                }
                catch (Exception e)
                {
                    Console.WriteLine($"Exception: {e.Message}");
                }
                finally
                {
                    Console.WriteLine($"Операция закончена.");
                }
            }
        }
    }
}
