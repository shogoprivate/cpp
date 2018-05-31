/* How to call the coustructor of "base class" */

#include<iostream>

using namespace std;

class Car{
	// Access specifier: protected
	protected:
		int num;
		double gas;
	public:
		Car();
		Car(int n, double g);
		void setCar(int n, double g);
		void show();
};

// Definition of the "RacingCar class"
class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		RacingCar(int n, double g, int c);
		void setCourse(int c);
		void newShow();
};

Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "車を作成しました．\n";
}

Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "ナンバー" << num 
		<< "\nガソリン量" << gas 
		<< "\nの車を作成しました．\n";
}

void Car::setCar(int n,double g){
	num = n;
	gas = g;
	cout << "ナンバーを" << num 
		<< "\nガソリン量を" << gas 
		<< "\nにしました．\n";
}

void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

// Definition of the member function of the "derived class"
RacingCar::RacingCar(){
	course = 0;
	cout << "レーシングカーを作成しました．\n";
}
RacingCar::RacingCar(int n, double g, int c) : Car(n, g){
	course = c;
	cout << "コース番号" << course << "のレーシングカーを作成しました．\n";
}

void RacingCar::setCourse(int c){
	course = c;
	cout << "コース番号を" << course << "にしました．\n";
}

void RacingCar::newShow(){
	// This operation can be carried out when the protected member is used
	cout << "レーシングカーのナンバーは" << num << "です．\n";
}

int main(){
	RacingCar rccar1(1240, 20.5, 5);
	rccar1.newShow();

	return 0;
}

