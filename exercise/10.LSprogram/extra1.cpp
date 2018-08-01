#include <iostream>
using namespace std;

int a = 0;

int main()
{
	int a = 10;

	cout << "ローカル変数aの値は" << a << "です．\n";
	cout << "ローカル変数aをインクリメントします\n";

	a++;
	cout << "ローカル変数aの値は" << a << "です．\n";
	
	cout << "グローバル変数aの値は" << ::a << "です．\n";
	cout << "グローバル変数aをインクリメントします\n";

	::a++;
	cout << "グローバル変数aの値は" << ::a << "です．\n";

	return 0;
}
