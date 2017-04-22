using System.Collections.Generic;

namespace Tasks.Fibonacci
{
    public class Fibonacci
    {
        private Dictionary<long, long> _dictionary;

        public long Calculate(long number)
        {
            _dictionary = new Dictionary<long, long>();

            return Iter(number);
        }
        private long Iter(long number)
        {
            var result = 0L;
            if (_dictionary.TryGetValue(number, out result))
            {
                return result;
            }

            if (number < 2)
            {
                return number;
            }
            else
            {
                var value = Iter(number - 1) + Iter(number - 2);
                _dictionary.Add(number, value);

                return value;
            }
        }
    }
}