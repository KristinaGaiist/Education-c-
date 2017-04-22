namespace Labs.Sharp.ZoologicGarden.Animals
{
    public abstract class BaseCat : Animal
    {
        public BaseCat(AnimalType type, string name, double weight, Color color) : base(type, name, weight, color, DangerType.CanBight) { }

        public override string Say() => Say("meow");
    }
}