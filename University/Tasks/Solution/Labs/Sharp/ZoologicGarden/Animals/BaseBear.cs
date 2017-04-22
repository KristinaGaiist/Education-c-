namespace Labs.Sharp.ZoologicGarden.Animals
{
    public abstract class BaseBear : Animal
    {
        public BaseBear(AnimalType type, string name, double weight, Color color) : base(type, name, weight, color, DangerType.Dangerous) { }

        public override string Say() => Say("brr");
    }
}