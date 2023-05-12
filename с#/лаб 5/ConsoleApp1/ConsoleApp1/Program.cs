using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace lab5
{
    class matrixA
    {

        private float[,] A = new float[3, 3];
        /// <summary>
        /// Заповнення матриці 3х3 рандомно 
        /// </summary>
        public virtual void randoms()
        {
            Random random = new Random();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    A[i, j] = (float)random.Next(-10, 100);
                }
            }

        }
        /// <summary>
        /// Ввід матриці 3х3
        /// </summary>
        public virtual void GetInfo()
        {

            Console.Write("----- Введтіть елементи матриці 3x3 -----");
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
        public virtual void ShowInfo()
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
        public virtual void min()
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
            Console.WriteLine("\nМінімальний елемент матриці :" + min);


        }


    }
    class matrixB : matrixA
    {

        private float[,,] B = new float[3, 3, 3];
        /// <summary>
        /// Заповнення матриці 3х3х3 рандомно 
        /// </summary>
        public override void randoms()
        {
            Random random = new Random();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        B[i, j, k] = (float)random.Next(-10, 100);
                    }

                }
            }

        }
        /// <summary>
        /// Вивід матриці 3х3х3
        /// </summary>
        public override void ShowInfo()
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
        public override void min()
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
            Console.WriteLine("\nМінімальний елемент матриці :" + min);
        }
        /// <summary>
        /// Ввід матриці 3х3х3
        /// </summary>
        public override void GetInfo()
        {

            Console.Write("----- Введіть елементи матирці 3x3x3 -----");
            Console.WriteLine();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        Console.Write($" [{i}][{j}][{k}] = ");
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

            int userSelect;
            matrixA baseobj = new matrixA();
            do
            {
                Console.WriteLine("Введіть '0' - якщо ви хочете створити матрицю 3х3 або '1' - якщо хочетестворити матрицю 3х3х3");
                userSelect = Convert.ToInt32(Console.ReadLine());
                if (userSelect == 0)
                {
                    baseobj = new matrixA();
                    Console.WriteLine("Матриця 3х3 створена");
                    Console.WriteLine("Введіть '0' - якщо хочете заповнити матрицю рандомними числами або '1' - якщо хочете використати самостійний ввід");
                    int userSelectA;
                    userSelectA = Convert.ToInt32(Console.ReadLine());

                    if(userSelectA == 0)
                    {
                        baseobj.randoms();
                        
                    }
                    else if (userSelectA == 1)
                    {
                        baseobj.GetInfo();
                        
                    }
                }


                else if (userSelect == 1)
                {
                    baseobj = new matrixB();

                    Console.WriteLine("Матриця 3х3x3 створена");
                    Console.WriteLine("Введіть '0' якщо хочете заповнити матрицю рандомними числами або '1' якщо хочете використати самостійний ввід");
                    int userSelectB;
                    userSelectB  = Convert.ToInt32(Console.ReadLine());

                    if (userSelectB == 0)
                    {
                        baseobj.randoms();
                        
                    }
                    else if (userSelectB == 1)
                    {
                        baseobj.GetInfo();
                        
                    }
                    else
                    {
                        return;
                    }
                }
    
              baseobj.ShowInfo();
              baseobj.min();

            } while (true);

        }
    }
}