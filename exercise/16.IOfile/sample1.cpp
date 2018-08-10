#include <iostream>
using namespace std;

int main()
{
	int i;
	double d;
	char* str;
	int num = 100;
	str = new char[num];

	cout << "整数を入力してください．>>";
	cin >> i;

	cout << "小数値を入力してください．>>";
	cin >> d;
	
	cout << "文字列を入力してください．>>";
	cin >> str;

	cout << "入力した整数値は" << i << "です．\n";
	cout << "入力した少数値は" << d << "です．\n";
	cout << "入力した文字列は" << str << "です．\n";

	delete[] str;

	return 0;
}
