/* How to define "class" */

#include<iostream>

using namespace std;

//Declaration of "class"
class Car{
	public:
		//"data member"
		int num;
		double gas;
		//"member function"
		void show();
};

//Definition of "member function"
void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

int main(){
	//"car1" is called "object" or "instance"
	Car car1;

	car1.num = 123.4;
	car1.gas = 20.5;

	car1.show();

	return 0;
}

