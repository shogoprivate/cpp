#include <iostream>
using namespace std;

struct Car
{
	int num;
	double gas;
};

void show(Car* pC);

int main()
{
	Car car1 = {0, 0.0};

	cout << "ナンバーを入力してください．>>";
	cin >> car1.num;
	cout << "ガソリン量を入力してください．>>";
	cin >> car1.gas;

	show(&car1);

	return 0;
}

void show(Car* pC)
{
	cout << "車のナンバーは" << pC->num << "です．\n";
	cout << "車のガソリン量は" << pC->gas << "です．\n";
}
