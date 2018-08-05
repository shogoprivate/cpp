#include <iostream>
using namespace std;

class Car
{
	protected:
		int num;
		double gas;
	public:
		Car();
		Car(int n, double g);
		void show();
		void setCar(int n, double);
};

class RacingCar:public Car
{
	private:
		int course;
	public:
		RacingCar();
		RacingCar(int n, double g, int c);
		void setCourse(int c);
		void show();
};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました．\n";
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
	cout << "ナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num << "，ガソリン量を" << gas 
		<< "にしました．\n";
}

RacingCar::RacingCar()
{
	course = 0.0;
	cout << "レーシングカーを作成しました．\n";
}

RacingCar::RacingCar(int n, double g, int c):Car (n, g)
{
	course = c;
	cout << "コース番号" << course << "のレーシングカーを作成しました．\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました．\n";
}

void RacingCar::show()
{
	cout << "レーシングカーのナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
	cout << "コース番号は" << course << "です．\n";
}

int main()
{
	Car* pCar[2];

	Car car1(1234, 20.5);
	RacingCar rccar1(4567, 30.5, 5);

	pCar[0] = &car1;
	pCar[0] -> show();
	
	pCar[1] = &rccar1;
	pCar[1] -> show();

	return 0;
}
