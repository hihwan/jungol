using System;

namespace Abc
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = 10;
            double y = 3.14;
            char z = 'A';

            //x, y, z값 출력
            Console.WriteLine("Number is " + x + y + z); //문자열
            Console.WriteLine($"Number is {x} {y} {z}"); // interpolation 방식 '$' 삽입하면 {변수명}을 써주면 변수값 불러오기 가능
            Console.WriteLine("Number {0} {1}", x, y); // placeholder 방식 {0}, {1} 등은 뒤따르는 변수 중 몇 번째 변수값인지 명시
            Console.WriteLine("{0}, {1}, {2}", x, y, z);
            Console.WriteLine("{0}, {1}, {1}", x, y, z);
        }
    }
}