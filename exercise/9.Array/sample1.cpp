#include <iostream>
using namespace std;

int main()
{
	int test[5];
	test[0] = 10;
	test[1] = 20;
	test[2] = 30;
	test[3] = 40;
	test[4] = 50;
	//int test[] = {10, 20, 30, 40, 50};

	for (int i=0; i<5; i++)
	{
		cout << i+1 << "番目の人の点数は" << test[i] << "です．\n";
	}

	return 0;
}
