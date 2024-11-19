using System;

namespace chocol{
    class Program
    {
        static void Main()
        {
            string[] input = Console.ReadLine().Split();
            int N = int.Parse(input[0]);
            int M = int.Parse(input[1]);

            System.Console.WriteLine(N*M-1);
        }
    }
}