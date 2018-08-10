#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("test0.txt"); //file open
	if (!fout) //if (fout.fail()) も同値
	{
		cout << "ファイルをオープンできませんでした．\n";
		return 1;
	}
	else
		cout << "ファイルをオープンしました．\n";

	fout.close(); //file close
	cout << "ファイルをクローズしました．\n";

	return 0;
} 
