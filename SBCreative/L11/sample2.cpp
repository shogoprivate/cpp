/* How to use "struct data type" */

#include<iostream>

using namespace std;

// Declaration of "struct data type"
// Don't forget ';' on the end of brackets
struct Car{
	int num;
	double gas;
};

int main(){
	Car car1;

	cout << "車のナンバーを入力してください．>> ";
	cin >> car1.num;

	cout << "ガソリンの量を入力してください．>> ";
	cin >> car1.gas;

	cout << "車のナンバーは" << car1.num << "です．\n";
	cout << "ガソリンの量は" << car1.gas << "です．\n";

	return 0;
}

