namespace Labs.Sharp.Binary
{
    public class BinaryInt
    {
        private int _number;

        public BinaryInt(int number)
        {
            Validate(number);

            _number = number;
        }
        public int[] Get()
        {
            var number = _number;
            var count = Count();

            var binary = new int[count];

            for (var i = count - 1; number > 0; i--)
            {
                binary[i] = number % 2;
                number = number / 2;
            }

            return binary;
        }
        private void Validate(int number)
        {
            if (number < 0)
            {
                throw new NumberLessZeroException();
            }
        }
        private int Count()
        {
            var number = _number;
            var count = 0;

            while (number > 0)
            {
                number /= 2;
                count++;
            }

            return count;
        }

        public override string ToString()
        {
            var ints = Get();
            var chars = new char[ints.Length];

            for (int i = 0; i < ints.Length; i++)
            {
                chars[i] = (char)('0' + ints[i]);
            }

            return new string(chars);
        }
    }
}
