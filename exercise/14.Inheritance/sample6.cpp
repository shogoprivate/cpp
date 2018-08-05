#include <iostream>
using namespace std;

class Vehicle
{
	protected:
		int speed;
	public:
		void setSpeed(int s);
		virtual void show() = 0; //純粋仮想関数
};

class Car : public Vehicle
{
	private:
		int num;
		double gas;
	public:
		Car(int n, double g);
		void show();
};

class Plane : public Vehicle
{
	private:
		int flight;
	public:
		Plane(int f);
		void show();
};

void Vehicle::setSpeed(int s)
{
	speed = s;
	cout << "速度を" << speed << "にしました．\n";
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << "ガソリン量" << gas
		<< "の車を作成しました．\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
	cout << "速度は" << speed << "です．\n";
}

Plane::Plane(int f)
{
	flight = f;
	cout << "便" << flight << "の飛行機を作成しました．\n";
}

void Plane::show()
{
	cout << "飛行機の便は" << flight << "です．\n";
	cout << "速度は" << speed << "です．\n";
}

int main()
{
	Vehicle* pVc[2];

	Car car1(1234, 20.5);
	pVc[0] = &car1;
	pVc[0] -> setSpeed(60);
	pVc[0] -> show();

	Plane pln1(232);
	pVc[1] = &pln1;
	pVc[1] -> setSpeed(500);
	pVc[1] -> show();
	
	return 0;
}

