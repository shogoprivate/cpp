/* How to set the default arguments of "constructor" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		//set the default arguments of "constructor" 
		Car(int n=0, double g=0);
		void show();
};

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


