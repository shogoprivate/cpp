/* How to utilize the pointer of the "base class" */

#include<iostream>

using namespace std;

class Car{
	protected:
		int num;
		double gas;
	public:
		Car();
		Car(int n, double g);
		void setCar(int n, double g);
		void show();
};

class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		RacingCar(int n, double g, int c);
		void setCourse(int c);
		// Overriding 
		void show();
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

void RacingCar::show(){
	cout << "レーシングカーのナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
	cout << "コース番号は" << course << "です．\n";
}

int main(){
	Car* pCars[2];
	Car car1;
	RacingCar rccar1;

	pCars[0] = &car1;
	pCars[0] -> setCar(1234,20.5);

	pCars[1] = &rccar1;
	pCars[1] -> setCar(4567,30.5);
	
	// Call the "show function" of the base class
	for (int i=0; i<2; i++){
		pCars[i] -> show();
	}

	return 0;
}
