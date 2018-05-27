/* How to use "overload" of  "constructor" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		Car();
		Car(int n, double g);
		void show();
};

Car::Car(){
	num = 0;
	gas = 0;
	cout << "コンストラクタをコール\n車のナンバーは" << num
		<< "\nガソリン量は" << gas << "\n";
}

//Overload 
Car::Car(int n, double g){
	num = n;
	gas = g;
	cout << "コンストラクタをコール\n車のナンバーは" << num
		<< "\nガソリン量は" << gas << "\n";
}

void Car::show(){
	cout << "車のナンバーは" << num
		<< "\nガソリン量は" << gas << "\n";
}

int main(){
	Car car1;
	Car car2(1234, 20.5);

	return 0;
}
