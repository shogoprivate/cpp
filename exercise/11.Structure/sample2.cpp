#include <iostream>
using namespace std;

struct Car
{
	int num;
	double gas;
}; //;を忘れずに

int main()
{
	Car car1;

	cout << "ナンバーを入力してください．>>";
	cin >> car1.num;
	
	cout << "ガソリン量を入力してください．>>";
	cin >> car1.gas;

	cout << "車のナンバーは" << car1.num << "です．\n";
	cout << "車のガソリン量は" << car1.gas << "です．\n";

	return 0;
}
