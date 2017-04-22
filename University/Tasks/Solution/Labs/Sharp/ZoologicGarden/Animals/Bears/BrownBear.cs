namespace Labs.Sharp.ZoologicGarden.Animals.Bears
{
    public class BrownBear : BaseBear
    {
        protected override double LengthStep => 3.1;

        public BrownBear(string name, double weight) : base(AnimalType.BrownBear, name, weight, Color.Brown) { }
    }
}