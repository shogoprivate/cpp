/* shift operator */

#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = -5;
	int c = 5;

	
	a = a << 2;
	b = b << 2;
	c = c >> 2;
	
	cout << "5(0101)を左に2個シフトすると" << a << "\n";
	cout << "-5(1010)を左に2個シフトすると" << b << "\n";
	cout << "5(0101)を右に2個シフトすると" << c << "\n";

	return 0;
}

