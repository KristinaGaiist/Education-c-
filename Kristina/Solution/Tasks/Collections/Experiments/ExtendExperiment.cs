using System;
using System.Text;

namespace Tasks.Collections.Experiments
{
    public class ExtendExperiment : IExperiment
    {
        public void Start()
        {
            var builder = new StringBuilder();
            builder.AppendBeautifull("hello");

            Console.WriteLine(builder);
        }
    }

}
