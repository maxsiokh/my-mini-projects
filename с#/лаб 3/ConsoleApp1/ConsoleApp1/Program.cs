using System;
using System.Collections.Generic;
using System.Reflection.Emit;
using System.Text;

namespace lab4
{
    class Massiv
    {
        double a;
        double b;
        double c;

       public double MaxEl;

        public Massiv(double a, double b, double c)
        {
            this.a = a;
            this.b = b;
            this.c = c;
    
        }
        public void InputCoordinates(double va, double vb, double vc)
        {
            a = va;
            b = vb;
            c = vc;
   
        }

        public void Max()
        {
            MaxEl = 0;

            if (a>b && a > c)
            {
                MaxEl = a;
            }
            else if (b>c && b > a)
            {
                MaxEl = b;
            }
            else if (c > a && c > b)
            {
                MaxEl = c;
            }
         //   Console.WriteLine("Max element: "+MaxEl);

        }
        public void showinfo()
        {
            Console.WriteLine(a);
            Console.WriteLine(b);
            Console.WriteLine(c);
        }

    }
    class Program
    {
        static void Main(string[] args)
        {
            Massiv[] arr = new Massiv[5];
            double a = 0, b = 0, c = 0;
            double va, vb, vc;
            int count = 5;


            for (int i = 0; i < count; i++)
            {
                arr[i] = new Massiv(a, b, c);
            }

            for (int i = 0; i < count; i++)
            {
                Console.WriteLine("Input leght Massiv:" + (i + 1));
                Console.WriteLine("input a:");
                va = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("input b:");
                vb = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("input c:");
                vc = Convert.ToInt32(Console.ReadLine());
                arr[i].InputCoordinates(va, vb, vc);

                
            }

            

            double[] maxelements = new double[count]; 
  
            for (int i = 0; i < count; i++)
            {

            //    Console.WriteLine("\n");
              //  Console.WriteLine("Massiv " + (i + 1));
                arr[i].Max();

                maxelements[i] = arr[i].MaxEl;



            }
           // Console.WriteLine("\n");
          //  Console.WriteLine("\n");
            double min = maxelements[0];

            int minindex = 1;

            for(int i = 0; i < count; i++)
            {
                if(min > maxelements[i])
                {
                    min = maxelements[i];
                     minindex ++;

                }
                
            }
                Console.WriteLine("Min max element: " + min);
                Console.WriteLine(" Masiva № "+ minindex);


            Console.WriteLine("\n");
            
        }
    }
}
