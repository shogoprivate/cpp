#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "万円の車を購入します．\n";
}

int main()
{
	int num;

	cout << "1台目はいくらの車を購入しますか?>>";
	cin >> num;

	buy(num);

	cout << "2台目はいくらの車を購入しますか?>>";
	cin >> num;

	buy(num);

	return 0;
}
