#include <iostream>

void main2()
{
	//You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
	float avgStudentHeight_Programming1 = 66.0f;
	//b) The tax rate for incomes over $65000
	float taxRate_Over = 65000;
	//c) The tax rate for incomes below $5000
	float taxRate_Under = 5000;
	//d) The total cost of all the games on your Steam library
	int steamLibraryCost = 100;


	//2. Select suitable data types to hold the following values :
	//a) 121
	int number;
	//b) 9.4
	float decimal;
	//c) r
	char letter;
	//d) 100000
	int largeNumber;
	//e) False
	bool trueFalse;

	//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
	//and store the result in variables called “a” and “b” print the result to screen.Write code 
	//that swaps the values for these variables, then print the variables “a” and “b” again.
	//You should comment your code.
	{
		int a, b, c;
		std::cout << "Before Swapping" << endl;
		std::cout << "a=" << a << "b=" << b << endl;
		c = a;
		a = b;
		b = c;
		std::cout << "After Swapping" << endl;
		std::cout << "a=" << a << "b=" << b << endl;
		return 0;
	}


    //4. Ask the user for 5 numbers and output the average of these numbers.		
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		int e = 0;
		int f = 5;

		std::cout << "Type in five numbers to be averaged out\n";
		std::cin >> a >> b >> c >> d >> e;
		int(a + b + c + d + e) / f;
		
		system pause;
	}



	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.
	
}