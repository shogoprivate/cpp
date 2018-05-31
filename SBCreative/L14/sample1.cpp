/* How to inherit the "class" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		Car();
		void setCar(int n, double g);
		void show();
};

// Definition of the "RacingCar class"
class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		void setCourse(int c);
};

Car::Car(){
	num = 0;
	gas = 0.0;
	cout << "車を作成しました．\n";
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

void RacingCar::setCourse(int c){
	course = c;
	cout << "コース番号を" << course << "にしました．\n";
}

int main(){
	RacingCar rccar1;
	// Call the member function of  "base class"
	rccar1.setCar(1240, 20.5);
	// Call the member function of  "derived class"
	rccar1.setCourse(5);

	return 0;
}

