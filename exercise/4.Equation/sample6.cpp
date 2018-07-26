#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int num = 0;

	cout << "1番目の整数を入力してください>>";
	cin >> num;
	sum += num;

	cout << "2番目の整数を入力してください>>";
	cin >> num;
	sum += num;

	cout << "3番目の整数を入力してください>>";
	cin >> num;
	sum += num;

	cout << "3つ目の数の合計は" << sum << "です．\n";

	return 0;
}
