using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
namespace lab4
{
    class matrixA
    {

        private float[,] A = new float[3, 3];
        /// <summary>
        /// Заповнення матриці 3х3 рандомно 
        /// </summary>
        public void randoms()
        {
            Random random = new Random();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    A[i, j] = (float)random.Next(1,100);
                }
            }

        }
        /// <summary>
        /// Ввід матриці 3х3
        /// </summary>
        public void GetInfo()
        {

            Console.Write("----- enter the elements  matrix 3x3 -----");
            Console.WriteLine();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write($"[{i}][{j}] = ");
                    A[i, j] = int.Parse(Console.ReadLine());
                }

                Console.WriteLine();
            }


        }
        /// <summary>
        /// Вивід матриці 3х3
        /// </summary>
        public void ShowInfo()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Console.Write(A[i, j] + " ");
                }
                Console.WriteLine();
            }


        }
        /// <summary>
        /// Знаходження мінімального елемента матриці 3х3
        /// </summary>
        public void min()
        {
            float min = A[0, 0];

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (min > A[i, j])
                    {
                        min = A[i, j];
                    }
                }
            }
            Console.WriteLine("Minimal element :" + min);
        }


    }
    class matrixB : matrixA
    {

        private float[,,] B = new float[3, 3, 3];
        /// <summary>
        /// Заповнення матриці 3х3х3 рандомно 
        /// </summary>
        public void randoms()
        {
            Random random = new Random();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        B[i, j, k] = (float)random.Next(1, 100);
                    }

                }
            }

        }
        /// <summary>
        /// Вивід матриці 3х3х3
        /// </summary>
        public void ShowInfo()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        Console.Write(B[i, j, k] + " ");
                    }
                    Console.WriteLine();
                }
                Console.WriteLine("");
            }


        }
        /// <summary>
        /// Знаходження мінімального елемента матриці 3х3х3
        /// </summary>
        public void min()
        {
            float min = B[0, 0, 0];

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {

                        if (min > B[i, j, k])
                        {
                            min = B[i, j, k];
                        }
                    }

                }
            }
            Console.WriteLine("Minimal element :" + min);
        }
        /// <summary>
        /// Ввід матриці 3х3х3
        /// </summary>
        public void GetInfo()
        {

            Console.Write("----- enter the elements matrix 3x3x3 -----");
            Console.WriteLine();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        Console.Write($" [{i}][{j}][{k}] = ") ;
                        B[i, j, k] = int.Parse(Console.ReadLine());
                    }

                }

                Console.WriteLine();
            }
        }
    }
    class Program
    {
        static void Main(string[] args)
        {

            matrixA MatA = new matrixA();
           // MatA.randoms();
            MatA.GetInfo();
            MatA.ShowInfo();
            MatA.min();

            Console.WriteLine("\n");
         
            matrixB MatB = new matrixB();
          //  MatB.randoms();
            MatB.GetInfo();
            MatB.ShowInfo();
            MatB.min();

        }
    }
}