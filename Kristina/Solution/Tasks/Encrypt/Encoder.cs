namespace Tasks.Encrypt
{
    public class Encoder
    {
        private int _keyPlus;
        private int _keyXor;

        public Encoder()
        {
            _keyPlus = 1;
            _keyXor = 1;
        }
        public Encoder(int key1, int key2)
        {
            _keyPlus = key1;
            _keyXor = key2;
        }

        public string Encryption(string str)
        {
            var encode = new char[str.Length];

            for (var i = 0; i < str.Length; i++)
            {
                encode[i] = (char)((str[i] ^ _keyXor) + _keyPlus);
            }

            return new string(encode);
        }

        public string Decryption(string str)
        {
            var encode = new char[str.Length];

            for (var i = 0; i < str.Length; i++)
            {
                encode[i] = (char)((str[i] - _keyPlus) ^ _keyXor );
            }

            return new string(encode);
        }
    }
}
