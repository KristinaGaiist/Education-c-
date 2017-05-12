namespace Patterns
{
    public class Sun
    {
        private static Sun _instance;

        protected Sun() { }

        public static Sun Instance()
        {
            if (_instance == null)
            {
                _instance = new Sun();
            }

            return _instance;
        }

        public int FlyTo()
        {
            return 0;
        }
    }
}
