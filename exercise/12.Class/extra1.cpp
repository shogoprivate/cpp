#include <iostream>
using namespace std;

class Car
{
	public:
		int num;
		double gas;
		void show();
};

void Car::show()
{
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

int main()
{
	Car* pCar;
	pCar = new Car;

	pCar -> num = 1234;
	pCar -> gas = 22.2;

	pCar -> show();

	delete pCar;

	return 0;
}
