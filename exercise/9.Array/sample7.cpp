#include <iostream>
using namespace std;

double avg(int t[]);

int main()
{
	int test[5];

	cout << "5人のテストの点数を入力してください\n";
	for (int i=0; i<5; i++)
	{
		cout << i+1 << "目の点数を入力>>";
		cin >> test[i];
	}
	double ans = avg(test);
	cout  << "5人の平均値は" << ans << "点です．\n";

	return 0;
}

double avg(int t[])
{
	double sum = 0;
	for (int i=0; i<5; i++)
	{
		sum += t[i];
	}
	return sum/5;
}
		
