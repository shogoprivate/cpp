/* How to make "array" of "class object" */

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
	Car mycars[3] = {
		Car(),
		Car(1234,25.5),
		Car(4567,52.2)
	};
	// * It is difficult to initialize the array with the large number of elements 
	// >> sample4.cpp

	return 0;
}


