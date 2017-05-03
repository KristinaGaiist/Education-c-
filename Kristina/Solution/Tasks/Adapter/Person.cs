namespace Adapter
{
    public class Person
    {
        private string _name;
        public Person(string name)
        {
           _name = name;
        }
        public void Wear(ISeason season)
        {
            season.Wear(_name);
        }
    }
}


