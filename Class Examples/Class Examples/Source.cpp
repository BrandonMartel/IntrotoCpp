#include <iostream>

int AddTwoNumbers(int a, int b)
{
	int sum = a + b;
	return sum;
}




int SubtractThreeNumbers(int a, int b, int c)
{
	int remainder = a - b - c;
	return remainder;
}



int MultiplyByTen(int a)
{
	int product = a * 10;
	return product;
}




float Halfer(float a)
{
	float half = a / 2;
	return half;
}



int main()
{
	std::cout << AddTwoNumbers(10, 15) << std::endl;
	std::cout << SubtractThreeNumbers(15, 5, 3) << std::endl;
	std::cout << MultiplyByTen(2) << std::endl;
	std::cout << Halfer(8) << std::endl;
	system("pause");
}
