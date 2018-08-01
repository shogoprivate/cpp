#include <iostream>
using namespace std;

int main()
{
	const int sub = 2;
	const int num = 4;

	int test[sub][num];
	test[0][0] = 80;
	test[0][1] = 60;
	test[0][2] = 22;
	test[0][3] = 50;
	test[1][0] = 90;
	test[1][1] = 55;
	test[1][2] = 68;
	test[1][3] = 72;
	//int test[][num] = {{80,60,22,50},{90,55,68,72}};

	for (int i=0; i<sub; i++)
	{
		for (int j=0; j<num; j++)
		{
			if (i==0)
				cout << j+1 << "番目の人の国語の点数は" << test[i][j] << "です．\n";
			else
				cout << j+1 << "番目の人の数学の点数は" << test[i][j] << "です．\n";
		}
	}

	return 0;
}

