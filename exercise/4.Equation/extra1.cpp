#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int a = 5;
	
	cout << "aの値は" << a << "です．\n";
	cout << "aの2進数表記は" << bitset<7>(a) << "です．\n";
	
	a = a<<2;
	cout << "aを左に2シフトした値は" << a << "です．\n";
	cout << "aの2進数表記は" << bitset<7>(a) << "です．\n";
	
	a = a>>1;
	cout << "aを右に1シフトした値は" << a << "です．\n";
	cout << "aの2進数表記は" << bitset<7>(a) << "です．\n";

	return 0;
}
