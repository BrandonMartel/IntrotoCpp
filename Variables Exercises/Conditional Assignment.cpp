#include <iostream>

int main()
{
	//1. What do the following conditionals evaluate to if "A = true and B = false"
	// A || B
	//true
	// A || B
	//true
	// !A
	//false
	// !(A && A)
	//false
	// B && A
	//false
	//(!B || A)
	//true

	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero
	
	int x, y;
	y = -1;
	if (y == 0)
	{
		x = 100;
	}



	//3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement

	int month = 1;
	std::cout << "Enter a month\n";
	std::cin >> month;
	switch (month)
	{
	case 1:
		std::cout << "January has 31 days";
		break;
	case 2:
		std::cout << "Febuary has 28 days";
		break;
	case 3:
		std::cout << "March has 31 days";
		break;
	case 4:
		std::cout << "April has 30 days";
		break;
	case 5:
		std::cout << "May has 31 days";
		break;
	case 6:
		std::cout << "June has 30 days";
		break;
	case 7:
		std::cout << "July has 31 days";
		break;
	case 8:
		std::cout << "August has 31 days";
		break;
	case 9:
		std::cout << "September has 30 days";
		break;
	case 10:
		std::cout << "October has 31 days";
		break;
	case 11:
		std::cout << "November has 30 days";
		break;
	case 12:
		std::cout << "December has 31 days";
		break;

	}


	//4. Redo problem 3 using if statements

	int month = 1;
	{
		std::cout << "Enter a month\n";
		bool month;
		if (Days == 31)
		{
			You are in either January, March, May, July, August, October, or December;
		}
		else if (Days == 30)
		{
			You are in either April, June, September, or November;
		}
		else (Day == 28)
		{
			You are in Feburary;
		}
	}






	//5. Convert problem 2 into a ternary operator

	int x = (y == 0) ? x = 100 : 8;
}