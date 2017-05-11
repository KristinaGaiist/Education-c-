using System;
using System.IO;

//TODO: Что с namespace?
namespace File
{
    public class Reader
    {
        //TODO: Путь советую задавать из конструктора.
        private string _way = "README.txt";

        public void Read()
        {
            using (StreamReader file = new StreamReader(_way))
            {
                Console.WriteLine(file.ReadToEnd());
            }
        }
        public void ReadLineByLine()
        {
            using (StreamReader file = new StreamReader(_way, System.Text.Encoding.Default))
            {
                var line = string.Empty;

                //TODO: Константы у нас слева.
                while ((line = file.ReadLine()) != null)
                {
                    //TODO: Возвращай строку из метода и выводи в консоль снаружи.
                    Console.WriteLine(line);
                }
            } 
        }
        public void ReadBlocks()
        {
            using (StreamReader file = new StreamReader(_way, System.Text.Encoding.Default))
            {
                var array = new char[4];
                file.Read(array, 0, 4);

                //TODO: Возвращай строку из метода и выводи в консоль снаружи.
                Console.WriteLine(array);
            }
        }
    }
}
