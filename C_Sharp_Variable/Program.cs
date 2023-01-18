namespace C_Sharp_Variable
{
    internal class Program
    {
        static void Main(string[] args)
        {
            TestClassB testClassB = new TestClassB(456);
            TestClassA testClass01= new TestClassA(123);
            testClass01.testClassB= testClassB; 
            TestClassA testClass02 = new TestClassA(100);
            testClass02.testClassB= testClassB;
            testClass02.testClassB = testClass01.testClassB;
            Console.WriteLine($"{testClass01.x},{testClass01.testClassB.x},{testClass02.x},{testClass02.testClassB.x}");
            testClassB.x = -2;
            Console.WriteLine($"{testClass01.x},{testClass01.testClassB.x},{testClass02.x},{testClass02.testClassB.x}");

            TestStruct testStruct01 = new TestStruct(456);
            TestStruct testStruct02 = testStruct01;
            Console.WriteLine($"{testStruct01.x},{testStruct02.x}");
            testStruct01.x = -2;
            Console.WriteLine($"{testStruct01.x},{testStruct02.x}");

        }
    }
    class TestClassA
    {
        public int x;
        public TestClassA(int x) { this.x = x;}
        public TestClassB testClassB;
    }
    class TestClassB
    {
        public int x;
        public TestClassB(int x) { this.x = x; }
    }

    struct TestStruct
    {
        public int x;
        public TestStruct(int x) { this.x = x; }
    }
}