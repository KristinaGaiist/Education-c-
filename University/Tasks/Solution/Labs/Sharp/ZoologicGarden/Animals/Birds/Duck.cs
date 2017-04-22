namespace Labs.Sharp.ZoologicGarden.Animals.Birds
{
    public class Duck : BaseBird
    {
        protected override double LengthStep => 0.5;

        public Duck(string name, double weight) : base(AnimalType.Duck, name, weight, Color.Green) { }

        public override string Say() => Say("quacks");
    }
}