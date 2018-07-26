#include <iostream>
using namespace std;

int main()
{
	int a=0;
	int b=0;
	int c=0;

	b = a++;
	cout << "後置インクリメントなのでbの値は" << b << "です．\n";

	c = ++a;
	cout << "前置インクリメントなのでcの値は" << c << "です．\n";

	return 0;
}

