#include <iostream>

using namespace std;

void helloworld()
{
	cout << "Hello World" << endl;
}

int main()
{
	helloworld();
	return 0;
}

void numberswap()
{
	int a;
	int b;

	cout << "Enter two numbers to be swapped" << endl;
	cin >> a;
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "The value of a is now " << a << endl;
	cout << "The value of b is now " << b << endl;
	return 0;
}

void avgnum()
{
	float a;
	float b;
	float c;
	float d;
	float e;
	float f = 5;

	cout << "Enter five numbers to be averaged out" << endl;
	cin >> a >> b >> c >> d >> e;
	float g = (a + b + c + d + e) / f;

	cout << "The Average of the set is " << g << endl;

	return 0;
}