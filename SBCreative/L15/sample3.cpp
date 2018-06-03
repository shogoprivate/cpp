/* How to use the "copy constructor" and the "overloading" of the assignment operator */

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
		~Car();
		Car(const Car& c);
		Car& operator=(const Car& c);
};

Car::Car(char* pN, int n, double g){
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

// Copy constructor
Car::Car(const Car& c){
	cout << c.pName << "で初期化します．\n";
	pName = new char[strlen(c.pName)+strlen("のコピー1")+1];
	strcpy(pName, c.pName);
	strcat(pName, "のコピー1");
	num = c.num;
	gas = c.gas;
}

// Overloading of the assignment operator */
Car& Car::operator=(const Car& c){
	cout << pName << "に" << c.pName << "を代入します．\n";
	if (this != &c){
		delete[] pName;
		pName = new char[strlen(c.pName)+strlen("のコピー2")+1];
		strcpy(pName, c.pName);
		strcat(pName, "のコピー2");
		num = c.num;
		gas = c.gas;
	}
	return *this;
}


int main(){
	Car mycar("mycar", 1234, 25.5);
	
	//Call the copy constructor
	Car car1 = mycar;
	
	Car car2("car2", 0 ,0);
	//Call the member function for overloading
	car2 = mycar;

	return 0;
}
