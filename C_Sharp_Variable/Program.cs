namespace C_Sharp_Variable
{
    internal class Program
    {
        static void Main(string[] args)
        {
            TestClass testClass01= new TestClass(123);
            TestClass testClass02 = testClass01;
            Console.WriteLine($"{testClass01.x},{testClass02.x}");
            testClass01.x = -2;
            Console.WriteLine($"{testClass01.x},{testClass02.x}");

            TestStruct testStruct01 = new TestStruct(456);
            TestStruct testStruct02 = testStruct01;
            Console.WriteLine($"{testStruct01.x},{testStruct02.x}");
            testStruct01.x = -2;
            Console.WriteLine($"{testStruct01.x},{testStruct02.x}");

        }
    }
    class TestClass
    {
        public int x;
        public TestClass(int x) { this.x = x;}
    }
    struct TestStruct
    {
        public int x;
        public TestStruct(int x) { this.x = x; }
    }
}