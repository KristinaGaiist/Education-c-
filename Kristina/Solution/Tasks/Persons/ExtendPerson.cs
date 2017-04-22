namespace Tasks.Persons
{
    public static class ExtendPerson
    {
        public static string Hello(this Person from, Person to) => from.Say(to, "Hello");
    }
}
