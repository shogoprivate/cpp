#include <iostream>
using namespace std;

class Car
{
	private:
		int num;
		double gas;
	public:
		static int sum;
		Car();
		void setCar(int n, double g);
		void show();
		static void showSum();
};

int Car::sum = 0; //staticデータメンバの初期化

Car::Car()
{
	num = 0;
	gas = 0.0;
	sum++;
	cout << "車を作成しました";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "メンバーを" << num << "，ガソリン量を" 
		<< gas << "にしました．\n";
}

void Car::showSum()
{
	cout << "車は全部で" << sum << "台あります．\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

int main()
{
	Car::showSum();

	Car car1;
	car1.setCar(1234, 20.5);

	Car::showSum();
	
	Car car2;
	car2.setCar(4567, 30.5);

	Car::showSum();

	return 0;
}

