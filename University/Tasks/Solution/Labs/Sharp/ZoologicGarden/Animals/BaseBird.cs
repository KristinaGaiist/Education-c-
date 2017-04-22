namespace Labs.Sharp.ZoologicGarden.Animals
{
    public abstract class BaseBird : Animal
    {
        public BaseBird(AnimalType type, string name, double weight, Color color) : base(type, name, weight, color, DangerType.NotDangerous) { }

        public override string Say() => Say("Kar");
    }
}