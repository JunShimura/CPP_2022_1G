namespace C_Sharp_Variable
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[10];
            int x = -1;
            //Console.WriteLine(a[x]);
            TestClass testClass = new TestClass(100);
            //TestClass testClass(100); //ERROR
            Console.WriteLine(testClass.x);
        }
    }
    class TestClass
    {
        public int x;
        public TestClass(int x) { this.x = x;}
    }
}