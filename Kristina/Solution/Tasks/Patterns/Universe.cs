using System.Collections.Generic;

namespace Patterns
{
    public class Universe
    {
        private Sun _sun = Sun.Instance();

        public int Fly(string Name)
        {
            if (Name == "Mercury")
            {
                return 387;
            }
            else if (Name == "Venus")
            {
                return 393;
            }
            else if (Name == "Earth")
            {
                return 240;
            }
            else if (Name == "Mars")
            {
                return 408;
            }
            else if (Name == "Jupiter")
            {
                return 1380;
            }
            else if (Name == "Saturn")
            {
                return 2160;
            }
            else if (Name == "Uranus")
            {
                return 3480;
            }
            else if (Name == "Neptune")
            {
                return 3840;
            }
            else if (Name == "Pluto")
            {
                return 4350;
            }
            else if (Name == "Sun")
            {
                return _sun.FlyTo();
            }
            else
            {
                return 0;
            }
        }
    }
}
