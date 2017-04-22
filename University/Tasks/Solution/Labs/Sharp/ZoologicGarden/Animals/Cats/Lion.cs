namespace Labs.Sharp.ZoologicGarden.Animals.Cats
{
    public class Lion : BaseCat
    {
        protected override double LengthStep => 2.7;

        public Lion(string name, double weight) : base(AnimalType.Lion, name, weight, Color.Yellow) { }
    }
}