#include <iostream>
using namespace std;

int main()
{
	const int num = 5;
	int tmp;
	int test[num];

	for (int i=0; i<num; i++)
	{
		cout << i+1 << "人目の点数を入力してください．>>";
		cin >> test[i];
	}
	
	for (int i=0; i<num; i++)
	{
		for (int j=i+1; j<num; j++)
		{
			tmp = test[j];
			test[j] = (test[i]>tmp)?test[i]:tmp;
			test[i] = (test[i]>tmp)?tmp:test[i];
		}
	}

	cout << "昇順で表示します\n";
	for (int i=0; i<num; i++)
	{
		cout << test[i] << '\n';
	}

	return 0;
}
