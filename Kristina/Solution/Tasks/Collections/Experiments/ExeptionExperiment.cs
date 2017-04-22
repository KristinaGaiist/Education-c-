using System;

namespace Tasks.Collections.Experiments
{
    public class DiscriminantNotLessZeroException : Exception
    {
        public DiscriminantNotLessZeroException() : base("Дискрименант не может быть меньше нуля.") { }
      

    }
}
