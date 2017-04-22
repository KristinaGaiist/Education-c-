using Labs.Sharp.ZoologicGarden.Animals.Bears;
using Labs.Sharp.ZoologicGarden.Animals.Birds;
using Labs.Sharp.ZoologicGarden.Animals.Cats;

namespace Labs.Sharp.ZoologicGarden
{
    public class AnimalsFactory
    {
        public Animal Get(AnimalType type, string name, double weight)
        {
            switch (type)
            {
                case AnimalType.BrownBear: return new BrownBear(name, weight);
                case AnimalType.WhiteBear: return new WhiteBear(name, weight);

                case AnimalType.Duck: return new Duck(name, weight);
                case AnimalType.Eagle: return new Eagle(name, weight);

                case AnimalType.Lion: return new Lion(name, weight);
                case AnimalType.Tiger: return new Tiger(name, weight);

                default: return new BrownBear(name, weight);
            }
        }
    }
}
