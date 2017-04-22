namespace Labs.Sharp.ZoologicGarden.Animals.Cats
{
    public class Tiger : BaseCat
    {
        protected override double LengthStep => 2.1;

        public Tiger(string name, double weight) : base(AnimalType.Tiger, name, weight, Color.Orange) { }

        public new string Hello1()
        {
            return "Hello, Tiger.";
        }
    }
}