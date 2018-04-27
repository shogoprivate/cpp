/* type conversion */

#include <iostream>
using namespace std;

int main()
{
	int inum = 160;
	double dnum;

	cout << "身長は" << inum << "cmです．\n";
	cout << "double型の変数に代入します．\n";

	dnum = inum;

	cout << "身長は" << dnum << "cmです．\n";

	return 0;
}
