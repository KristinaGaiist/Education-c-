using System;

namespace Labs.Sharp.Binary
{
    public class NumberLessZeroException : Exception
    {
        public NumberLessZeroException() : base("The number cannot be less than zero.") { }
    }
}
