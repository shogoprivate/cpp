#include <iostream>
using namespace std;

int main()
{
	const int num = 5;
	int test[num];

	for (int i=0; i<num; i++)
	{
		cout << i+1 << "人目の点数を入力してください．>>";
		cin >> test[i];
	}

	for (int i=0; i<num; i++)
	{
		cout << i+1 << "人目の点数は" << test[i] << "です．\n";
	}

	return 0;
}
