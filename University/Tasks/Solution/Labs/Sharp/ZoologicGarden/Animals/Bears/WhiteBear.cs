namespace Labs.Sharp.ZoologicGarden.Animals.Bears
{
    public class WhiteBear : BaseBear
    {
        protected override double LengthStep => 3.1;

        public WhiteBear(string name, double weight) : base(AnimalType.WhiteBear, name, weight, Color.White) { }
    }
}