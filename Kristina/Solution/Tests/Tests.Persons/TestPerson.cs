using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Tasks.Persons;

namespace Tests.Persons
{
    [TestClass]
    public class TestPerson
    {
        private const string _name = "Alexey";
        private const string _lastName = "GAIIST";
        private const string _patronymic = "Dmitrievich";
        private DateTime _date = DateTime.Now;
        private string[] _intrests = new string[] { "music", "programming" };

        [TestInitialize]
        public void Start()
        {
            Person.Count = 0;
        }

        [TestMethod]
        public void Constructor()
        {
            var result = new Person();
            result = new Person("Kristina", "Koreneva", "Viktorovna");
            result = new Person("Koreneva Kristina Viktorovna");
            result = new Person("Kristina", "Koreneva", "Viktorovna", new DateTime(1997, 8, 18), new string[] { "programming" });
            result = new Person("Kristina", "Koreneva", "Viktorovna", new DateTime(1997, 8, 18), "programming", "");
        }
        [TestMethod]
        public void Initialize()
        {
            var person = new Person();
            person.Initialize(_name, _lastName, _patronymic);

            Assert.AreEqual(_name, person.Name);
            Assert.AreEqual(_lastName, person.LastName);
            Assert.AreEqual(_patronymic, person.Patronymic);

            person.Initialize(dateOfBirth: _date);
            Assert.AreEqual(_date, person.DateOfBirth);

            var alexDate = new DateTime(1997, 2, 11);
            person.Initialize(name: "Kris", dateOfBirth: alexDate);
            Assert.AreEqual(alexDate, person.DateOfBirth);
            Assert.AreEqual("Kris", person.Name);

            person.DateOfBirth = new DateTime();
        }
        [TestMethod]
        public void Count()
        {
            Assert.AreEqual(0, Person.Count);

            new Person();
            new Person(_name, _lastName, _patronymic);
            new Person("Kirinuk Alexey Dmitrievich");
            new Person(_name, _lastName, _patronymic, _date, _intrests);

            Assert.AreEqual(4, Person.Count);

        }

        [TestMethod]
        public void Say()
        {
            var alexey = new Person(_name, _lastName, _patronymic);
            var kristina = new Person("Koreneva Kristina Viktorovna");
            var result = kristina.Say(alexey, "are you ok?");

            Assert.AreEqual($"Kristina: Alexey, are you ok?{Environment.NewLine}{alexey.Answer(kristina)}", result);
        }
        [TestMethod]
        public void Answer()
        {
            var alexey = new Person(_name, _lastName, _patronymic);
            var kristina = new Person("Koreneva Kristina Viktorovna");
            var result = alexey.Answer(kristina);

            Assert.AreEqual($"Alexey: Kristina, yes{Environment.NewLine}", result);
        }
        [TestMethod]
        public void Hello()
        {
            var alexey = new Person(_name, _lastName, _patronymic);
            var kristina = new Person("Koreneva Kristina Viktorovna");
            var result = kristina.Hello(alexey);

            Assert.AreEqual($"Kristina: Alexey, Hello{Environment.NewLine}{alexey.Answer(kristina)}", result);
        }
        [TestMethod]
        public void Age()
        {
            var person = new Person()
            {
                DateOfBirth = new DateTime(1997, 02, 11)
            };
            Assert.AreEqual(20, person.Age);

            person = new Person()
            {
                DateOfBirth = new DateTime(1997, 08, 18)
            };
            Assert.AreEqual(19, person.Age);
        }
    }
}
