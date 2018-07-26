#include <iostream>
using namespace std;

int max(int x, int y)
{
	if (x >= y)
		return x;
	else
		return y;
}

int main()
{
	int num1, num2, ans;

	cout << "1つ目の整数を入力してください．>>";
	cin >> num1;
	
	cout << "2つ目の整数を入力してください．>>";
	cin >> num2;

	ans = max(num1, num2);

	cout << "最大値は" << ans << "です．\n";

	return 0;
}

