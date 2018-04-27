/* Increment */

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	b = a++;
	d = ++c;

	cout << "代入後にインクリメントしたのでbの値" << b << "です．\n";
	cout << "代入前にインクリメントしたのでdの値" << d << "です．\n";

	return 0;
}
