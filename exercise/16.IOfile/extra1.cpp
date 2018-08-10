#include <iostream>
using namespace std;

class Car
{
	private:
		int num;
		double gas;
	public:
		Car();
		Car(int n, double g);
		friend ostream& operator<<(ostream& out, Car& c);
};

Car::Car(int n=0, double g=0.0)
{
	num = n;
	gas = g;
	cout << "車を作成しました．\n";
}

ostream& operator<<(ostream& out, Car& c)
{
	cout << "ナンバー：" << c.num << ",ガソリン:" << c.gas << endl;
	return out;
}

int main()
{
	Car mycar(1234, 25.5);
	cout << mycar;

	return 0;
}	
