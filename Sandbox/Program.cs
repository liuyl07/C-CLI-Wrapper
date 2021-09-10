using System;
using CLI;

namespace Sandbox
{
    class Program
    {
        static void Main(string[] args)
        {
            Entity e = new Entity("The Wallman", 20, 35);
            e.Move(5, -10);
            Console.WriteLine(e.XPosition + " " + e.YPosition);

            GeneralCAPI c = new GeneralCAPI();
            Console.WriteLine("CalculateSums(100) = " + c.CalculateSums(100));
            c.CallMeYunlong();

            Console.Read();
        }
    }
}
