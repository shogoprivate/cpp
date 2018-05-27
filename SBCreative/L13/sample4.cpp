/* How to easily initialize "array" of "class object" */

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

//"constructor" with no arguments
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
	//Call "constructor" with no arguments
	Car mycars[3];

	return 0;
}


