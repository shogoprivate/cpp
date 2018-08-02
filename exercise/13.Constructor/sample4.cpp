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
		void show();
};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "車を作成しました．\n";  
}

Car::Car(int n, double g)
{
	num = n;
	gas = g;
	cout << "ナンバー" << num << 
		"ガソリン量" << gas << "の車を作成しました．\n";
}

void Car::show()
{
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

int main()
{
	Car cars[3]; //デフォルトコンストラクタで初期化

	for (int i=0; i<3; i++)
		cars[i].show();
	
	return 0;
}
