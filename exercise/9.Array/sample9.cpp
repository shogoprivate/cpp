#include <iostream>
using namespace std;

int main()
{
	const char* str="Hello";
	str = "Goodbye";

	cout << str << '\n';

	return 0;
}
