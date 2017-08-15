#include <iostream>

int main()
{
	bool a, b;
	//1.
	a = false
	b = false
	if (a = b)
	{
		std::cout << "A and B are equal\n";
	}

	//2.
	a = true;
	b = !a && true;
	if ((a == b)) || a)
	{
		std::cout << "Condition "
    }

	//3.
	a = true;
	b = a && true;
	if ((a == b)) && !a)
	{
		std::cout << "Condition ((a==b) || a) is true";
	}
	else
	{
		std::cout << "Condition ((a == b) || a) is false";
	}

	//4.
	a = !true || !false;
	b = false;
	if (a == b)
	{
		std::cout << "A is equal to B\n";
	}
	else if (a != b && 1 + 2 == 3)
	{
		std::cout << "(a != b && 1 + 2 = 3) evaluates to true";
	}
	else
	{
		std::cout << "Nothing is true";
	}

	int classSize = 10;
	std::cin >> classSize;

	switch (classSize)
	{
	case 10;
		std::cout << "Class is full\n";
	case 8;
		std::cout << "We are missing some students\n";
		break;
	case 6;
		std::cout << "So many empty seats\n";


	default:
		break;

	}
}