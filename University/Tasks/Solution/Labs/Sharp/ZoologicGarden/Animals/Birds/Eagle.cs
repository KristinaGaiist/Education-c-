namespace Labs.Sharp.ZoologicGarden.Animals.Birds
{
    public class Eagle : BaseBird
    {
        protected override double LengthStep => 0.6;

        public Eagle(string name, double weight) : base(AnimalType.Eagle, name, weight, Color.Brown) { }

        public override string Say() => Say("crumbs");
    }
}