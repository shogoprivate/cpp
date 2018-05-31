/* How to utilize the "abstract class" */

#include<iostream>

using namespace std;

// Abstract class
class Vehicle{
	protected:
		int speed;
	public:
		void setSpeed(int s);
		// Pure virtual function
		virtual void show() = 0;
};

class Car : public Vehicle{
	protected:
		int num;
		double gas;
	public:
		Car(int n, double g);
		void show();
};

class Plane : public Vehicle{
	private:
		int flight;
	public:
		Plane(int f);
		void show();
};

// Member function of "Vehicle class"
void Vehicle::setSpeed(int s){
	speed = s;
	cout << "速度を" << speed << "にしました．\n";
}

// Constructor of "Car class"
Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "ナンバー" << num 
		<< "\nガソリン量" << gas 
		<< "\nの車を作成しました．\n";
}

// Member function of "Car class"
void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
	cout << "車の速度は" << speed << "です．\n";
}

// Constructor of "Car class"
Plane::Plane(int f){
	flight = f;
	cout << "便" << flight <<"の飛行機を作成しました．\n";
}

void Plane::show(){
	cout << "飛行機の便は" << flight << "です．\n";
	cout << "速度は" << speed << "です．\n";
}

int main(){
	// Set the pointer of "abstract class"
	Vehicle* pVc[2];

	Car car1(1234, 20.5);
	Plane pln1(232);

	pVc[0] = &car1;
	pVc[0] -> setSpeed(60);

	pVc[1] = &pln1;
	pVc[1] -> setSpeed(500);
	
	for (int i=0; i<2; i++){
		pVc[i] -> show();
	}

	return 0;
}

