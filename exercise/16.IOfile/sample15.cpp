#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char* argv[])
{
	if (argc !=2)
	{
		cout << "パラメータ数が違います．\n";
		return 1;
	}

	ifstream fin(argv[1]);
	if (!fin)
	{
		cout << "ファイルをオープンできませんでした．" << endl;
		return 1;
	}

	char ch;
	
	fin.get(ch);
	while (!fin.eof()) //ファイルの最後まで到達したらTrueを返す
	{
		cout.put(ch);
		fin.get(ch);
	}

	fin.close();

	return 0;
}
