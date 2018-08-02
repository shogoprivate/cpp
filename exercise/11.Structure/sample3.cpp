#include <iostream>
using namespace std;

struct Car
{
	int num;
	double gas;
};

int main()
{
	Car car1 = {1234, 25.5};
	Car car2 = {4567, 52.5};
	
	cout << "car1のナンバーは" << car1.num << "です．\n";
	cout << "car1のガソリン量は" << car1.gas << "です．\n";
	cout << "car2のナンバーは" << car2.num << "です．\n";
	cout << "car2のガソリン量は" << car2.gas << "です．\n";

	car2 = car1;
	cout << "car1をcar2に代入しました．\n";
	cout << "car2のナンバーは" << car2.num << "です．\n";
	cout << "car2のガソリン量は" << car2.gas << "です．\n";

	return 0;
}
