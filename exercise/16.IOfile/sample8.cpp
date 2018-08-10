#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	cout << "10を10進数で表記すると" << dec << 10 << "です．\n";
	cout << "10を2進数で表記すると" << bitset<4>(10) << "です．\n"; //要：#include <bitset>
	cout << "12を8進数で表記すると" << oct << 12 << "です．\n";
	cout << "10を16進数で表記すると" << hex << 10 << "です．\n";

	return 0;
}
