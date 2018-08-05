#include <iostream>
using namespace std;


//基本クラス
class Car
{
	private:
		int num;
		double gas;
	public:
		Car();
		void setCar(int n, double g);
		void show();
};

//派生クラス
class RacingCar:public Car
{
	private:
		int course;
	public:
		RacingCar();
		void setCourse(int c);
};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました．\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバーを" << num
		<< "にガソリン量を" << gas 
		<< "にしました．\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << num << "です．\n";
}

RacingCar::RacingCar()
{
	course = 0;
	cout << "レーシングカーを作成しました．\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "コース番号を" << course << "にしました．\n";
}

int main()
{
	RacingCar rccar1;
	rccar1.setCar(1234, 20.5);
	rccar1.setCourse(5);

	return 0;
}

