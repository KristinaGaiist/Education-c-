using System;
using System.Text;

namespace Tasks.Persons
{
    public class Person
    {
        private const string _answer = "yes";

        public static int Count { get; set; } = 0;
        public string Name { get; private set; }
        public string LastName { get; private set; }
        public string Patronymic { get; private set; }
        public DateTime DateOfBirth
        {
            get
            {
                return _date;
            }
            set
            {
                if (DateTime.Now.AddYears(-100) < value)
                {
                    _date = value;
                }
            }
        }
        public int Age
        {
            get
            {
                var now = DateTime.Now;
                var age = now.Year - DateOfBirth.Year;

                if (now < DateOfBirth.AddYears(age))
                {
                    age--;
                }

                return age;
            }
        }
        public string[] Intrests { get; private set; }
        public bool StartsWith { get; set; }

        private DateTime _date;

        public void Initialize(string name = null, string lastName = null, string patronymic = null, DateTime? dateOfBirth = null, string[] intrests = null)
        {
            if (name != null)
            {
                Name = name;
            }
            if (lastName != null)
            {
                LastName = lastName;
            }
            if (patronymic != null)
            {
                Patronymic = patronymic;
            }
            if (dateOfBirth.HasValue)
            {
                DateOfBirth = dateOfBirth.Value;
            }
            if (intrests != null)
            {
                Intrests = intrests;
            }
        }

        public Person()
        {
            DateOfBirth = DateTime.Now;

            Name = string.Empty;
            LastName = string.Empty;
            Patronymic = string.Empty;
            Intrests = new string[0];

            Count++;
        }
        public Person(string name, string lastName, string patronymic) : this()
        {
            Name = name;

            LastName = lastName;
            Patronymic = patronymic;
        }
        public Person(string fullName) : this()
        {
            var split = fullName.Split(' ');

            Name = split[1];
            LastName = split[0];
            Patronymic = split[2];
        }
        public Person(string name, string lastName, string patronymic, DateTime dateOfBirth, params string[] intrests) : this(name, lastName, patronymic)
        {
            DateOfBirth = dateOfBirth;
            Intrests = intrests;
        }
        
        public string Say(Person person, string ask)
        {
            var builder = new StringBuilder($"{Name}: {person.Name}, {ask}");

            builder.AppendLine();
            builder.Append(person.Answer(this));

            return builder.ToString();
        }
        public string Answer(Person person)
        {
            return $"{Name}: {person.Name}, {_answer}{Environment.NewLine}";
        }

        public static void Kill()
        {
            Count = 0;
        }

        public override string ToString()
        {
            var now = DateTime.Now;

            return $"{Name} {LastName} {Patronymic} {Age} years.";
        }
    }
}
