using Tasks.Collections.Experiments;

namespace Tasks.Collections
{
    public static class ExperimentFactory
    {
        public static IExperiment Get(Experiment experiment)
        {
            switch (experiment)
            {
                case Experiment.List: return new ListExperiment();
                case Experiment.Dictionary: return new DictionaryExperiment();
                case Experiment.Linq: return new LinqExperiment();
                case Experiment.Extend: return new ExtendExperiment();
                case Experiment.Queue: return new QueueExperiment();
                case Experiment.TryCatch: return new TryCatchExperiment();

                default: return new ListExperiment();
            }
        }
    }
}
