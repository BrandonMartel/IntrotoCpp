#include <iostream>

int main1()
{
	//1. What is the out put of the following code samples?
	//a. 
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
	}
	// the numbers 0-99
	//b. 
	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
	}
	// the numbers 100-2 all even numbers
	//c. 
	int iter = 0;
	while (iter != 25)
	{
		std::cout << iter << std::endl;
		iter += 5;
	}
	// 0, 5, 10, 15, 20
	//d. 
	int counter = 0;
	do
	{
		counter++;
		if (counter == 1)
			break;
		else
			std::cout << counter << std::endl;
	} while (counter < 10);
	//0, 2, 4, 6, 8, 10


	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print �Fizz�
	//- For multiples of 5 print �Buzz�
	//- For multiples of 3 and 5 print �FizzBuzz�
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)
	for ((int i = 0); i <= 100; i++)
	{
		if ()
	}

	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop


	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
	for (int a = 2; a >= 2 && a <= 98; a += 2)
	{
		std::cout << a << std::endl;
	}
	
	system("pause");
	return 0;
}