/* How to define "constructor" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		Car();
		void show();
};

Car::Car(){
	num = 0;
	gas = 0;
	cout << "コンストラクタをコール\n";
}

void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

int main(){
	Car car1;
	
	car1.show();

	return 0;
}


