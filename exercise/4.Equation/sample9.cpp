#include <iostream>
using namespace std;

int main()
{
	double dnum = 160.5;
	int inum;

	cout << "身長は" << dnum << "センチです．\n";
	cout << "int型の変換に代入します．\n";

	inum = (int)dnum;

	cout << "身長は" << inum << "センチです．\n";

	return 0;
}

