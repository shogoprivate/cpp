#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("test1.txt");
	if (fout.fail())
	{
		cout << "ファイルをオープンできませんでした．\n";
		return 1;
	}
	else
		cout << "ファイルをオープンしました．\n";

	fout << "Hello!\n";
	fout << "Goodbye!\n";
	cout << "ファイルに書き込みました．\n";

	fout.close();
	cout << "ファイルをクローズしました．\n";
	
	return 0;
}
