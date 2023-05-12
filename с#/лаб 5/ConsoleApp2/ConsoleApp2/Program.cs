class Program
{
    static void Main(string[] args)
    {
        Console.Write(A.B);
        var a1 = new A();
        Console.Write(A.B);
        a1.Write();
        Console.ReadLine();
    }
}
public class A {
    public static int B;

    public A(){
        B=3;
    }
    
public void Write()
{
    Console.Write(B);
}
static A()
{
    B = 5;
}
}
