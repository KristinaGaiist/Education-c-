namespace Patterns
{
    public class Sun
    {
        private static Sun instance;

        protected Sun() { }

        public static Sun Instance()
        {
            if (instance == null)
            {
                return new Sun();
            }
            return instance;
        }

        public int FlyTo()
        {
            return 0;
        }
    }
}
