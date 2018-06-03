/* How to define the "destructor" */

#include<iostream>
#include<cstring>

using namespace std;

class Car{
	private:
		int num;
		double gas;
		char* pName;
	public:
		Car(char* pN, int n, double g);
		// Destructor
		~Car();
		void show();
};

Car::Car(char* pN, int n, double g){
	// The memory is dynamically allocated 
	pName = new char[strlen(pN)+1];
	strcpy(pName, pN);
	num = n;
	gas = g;
	cout << pName << "を作成しました．\n";
}

Car::~Car(){
	cout << pName << "を破棄します．\n";
	delete[] pName;
}

void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
	cout << "名前は" << pName << "です．\n";
}

int main(){
	Car car1("mycar", 1234, 25.5);
	car1.show();

	return 0;
}


