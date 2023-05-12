using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using System.Threading.Tasks;

namespace lab
{
    class mass
    {
        static void Main(string[] args)
        {
            int[] arr = { 230, 28, 44, 32, 54 };

            int minim = arr[0];

            Console.Write("---------------Masiv---------------\n");
            for (int i = 0; i <arr.Length; i++)
            {
                Console.WriteLine(arr[i]);
                Console.Write(" ");
            }

            for (int i = 1; i < arr.Length; i++)
            {


                if (arr[i] < minim)
                {
                    minim = arr[i];
                }
                
            }
            Console.Write("----------------------------------");
            Console.Write("\nMinimum: ");
            Console.WriteLine(minim);
            Console.ReadLine();
                
        }
    }
}