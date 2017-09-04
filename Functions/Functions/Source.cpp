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

}