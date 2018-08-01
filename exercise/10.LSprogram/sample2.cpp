#include <iostream>
using namespace std;

void func();

int a = 0; //global

int main()
{
	for (int i=0; i<5; i++)
		func();

	return 0;
}

void func()
{
	int b = 0;
	static int c = 0;

	cout << "変数aの値は" << a << "です．\n";
	cout << "変数bの値は" << b << "です．\n";
	cout << "変数cの値は" << c << "です．\n";

	a++;
	b++;
	c++;
}
