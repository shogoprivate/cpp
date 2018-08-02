#include <iostream>
using namespace std;

class Car
{
	private:
		int num;
		double gas;
	public:
		int getNum(){return num;} 		//inline
		double getGas(){return gas;} 	//inline
		void show();
		void setNumGas(int n, double g);
};

void Car::show()
{
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

void Car::setNumGas(int n, double g)
{
	if (g>0 && g <1000)
	{
		num = n;
		gas = g;
		cout << "ナンバーを" << num << "に設定\n";
		cout << "ガソリン量を" << gas << "に設定\n";
	}
	else
	{
		cout << "ガソリン量が正しくありません．\n";
		cout << "ガソリン量を変更できませんでした．\n";
	}
}

int main()
{
	Car car1;
	
	car1.setNumGas(1234, 20.5);
	car1.show();

	int n = car1.getNum();
	double g = car1.getGas();
	cout << n << '\n';
	cout << g << '\n';

	cout << "間違ったガソリン量を設定してみます．\n";
	car1.setNumGas(1234, -10.0);
	car1.show();

	return 0;
}
