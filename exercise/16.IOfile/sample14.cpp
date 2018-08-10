#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream fin("../test3.txt");
	if (!fin)
	{
		cout << "ファイルをオープンできませんでした．\n";
		return 1;
	}
	else
		cout << "ファイルをオープンしました．\n";

	const int num = 8;
	int test[num];
	for (int i=0; i<num; i++)
	{
		fin >> test[i];
	}
	int max = test[0];
	int min = test[0];
	for (int i=0; i<num; i++)
	{
		if (max < test[i])
			max = test[i];
		if (min > test[i])
			min = test[i];
		cout << "No." << i+1 << setw(5) << test[i] << endl;
	}

	cout << "最高点は" << max << "です．" << endl;
	cout << "最低点は" << min << "です．" << endl;

	fin.close();

	return 0;
}





