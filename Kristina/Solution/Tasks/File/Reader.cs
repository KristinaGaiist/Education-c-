using System;
using System.IO;

namespace File
{
    public class Reader
    {
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
                while ((line = file.ReadLine()) != null)
                {
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

                Console.WriteLine(array);
            }
        }
    }
}
