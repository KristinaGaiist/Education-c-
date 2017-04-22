using System;

namespace Labs.Sharp.ZoologicGarden
{
    public abstract class Animal : IAnimalA, IAnimalB
    {
        public string Name { get; private set; }
        public double Weight { get; private set; }
        public Color Color { get; private set; }
        public DangerType Danger { get; private set; }
        public AnimalType Type { get; private set; }

        public abstract string Say();

        protected abstract double LengthStep { get; }

        public Animal(AnimalType type, string name, double weight, Color color, DangerType danger)
        {
            Name = name;
            Weight = weight;
            Color = color;
            Type = type;
            Danger = danger;
        }

        public string MakeStep(int count)
        {
            var length = count * LengthStep;

            return $"{Name} сделал {count} шаг(ов). При этом прошёл {length} метров.";
        }
        public override string ToString()
        {
            return $"Type: {Type}; Name: {Name}; Weight: {Weight}; Color: {Color}; Length of step: {LengthStep}, Type of danger {Danger}.";
        }
        public string Say(string @string)
        {
            return $"{Name}: {@string}";
        }

        public string Hello1()
        {
            return "AB: Hello1";
        }

        public string Hello2()
        {
            var a = ((IAnimalA)this).Hello2();
            var b = ((IAnimalB)this).Hello2();
            return a + b;
        }
        string IAnimalA.Hello2()
        {
            return "A: Hello2";
        }
        string IAnimalB.Hello2()
        {
            return "B: Hello2";
        }
    }
}