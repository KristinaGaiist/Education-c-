//TODO: Что с namespace?
namespace Adapter
{
    class DifferentToSeason : ISeason
    {
        private Different _spring;

        public DifferentToSeason(Different autumn)
        {
            _spring = autumn;
        }
        public void Wear(string _name)
        {
            _spring.Dress();
        }
    }
}
