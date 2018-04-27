/* type conversion (cast operator) */

#include <iostream>
using namespace std;

int main()
{
	double dnum = 160.5;
	int inum;

	cout << "身長は" << dnum << "cmです．\n";
	cout << "int型の変数に代入します．\n";

	inum = dnum;

	cout << "身長は" << inum << "cmです．\n";
	
	double pi = 3.1415;
	
	inum = (int)pi;

	cout << "3.1415をint型に変換すると" << inum << "です．\n";

	return 0;
}
