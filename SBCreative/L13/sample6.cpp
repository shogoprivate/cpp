/* How to use "static member" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		//static data member
		static int sum;
		Car();
		void setCar(int n, double g);
		void show();
		//static member function
		static void showSum();
};

Car::Car(){
	num = 0;
	gas = 0.0;
	sum++;
	cout << "コンストラクタをコール．初期の車のナンバーは" << num
		<< "で，ガソリン量は" << gas << "です．\n";
}

void Car::setCar(int n, double g){
	num = n;
	gas = g;
	cout << "車のナンバーを" << num
		<< "に，ガソリン量を" << gas << "にしました\n";
}

void Car::show(){
	cout << "車のナンバーは" << num
		<< "\nガソリン量は" << gas << "\n";
}

void Car::showSum(){
	cout << "車は全部で" << sum << "台です．\n";
}

//"static data member" is initialized in the outside of functions
int Car::sum = 0;

int main(){
	//"static member function" can be call without the object
	Car::showSum();

	Car car1;
	car1.setCar(1234, 20.5);

	Car::showSum();

	Car car2;
	car2.setCar(4567, 30.5);

	Car::showSum();

	return 0;
}


