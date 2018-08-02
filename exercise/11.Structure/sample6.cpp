#include <iostream>
using namespace std;

struct Car
{
	int num;
	double gas;
};

void show(Car& rC);

int main()
{
	Car car1 = {0, 0.0};

	cout << "ナンバーを入力してください．>>";
	cin >> car1.num;
	cout << "ガソリン量を入力してください．>>";
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car& rC)
{
	cout << "車のナンバーは" << rC.num << "です．\n";
	cout << "車のガソリン量は" << rC.gas << "です．\n";
}
