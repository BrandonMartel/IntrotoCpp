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
	std::cout << Double(4) << std::endl;

	system("pause");
}






int Double(int a)
{
	return a * 2;
}




void DoubleArray(int SomeArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		Double(SomeArray[i]);
	}




	char name[] = "Matthew";

	int BackIter = 6;
	for (int i = 0; i < 7 / 2; i++)
	{
		char helper = name[i];
		name[i] = name[BackIter];
		name[BackIter] = helper;
		BackIter--;
	}
	std::cout << name << std::endl;




	void ReverseString(char arrayName[], char len)
	{
		int backIter = len;
		for (int i = 0; i < 7; i++)
		{
			char helper = arrayName[i];
			arrayName[i] = arrayName[backIter];
			arrayName[backIter] = helper;
			backIter--;
		}
		std::cout << arrayName << std::endl;
	}