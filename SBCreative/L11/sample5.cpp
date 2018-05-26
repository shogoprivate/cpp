/* How to use the pointer of "structure data type" as "argument" of functions. */

#include<iostream>

using namespace std;

struct Car{
	int num;
	double gas;
};

//pass by reference
void show(Car* pC);

int main(){
	Car car1 = {0, 0.0};

	cout << "ナンバーを入力してください．\n";
	cin >> car1.num;

	cout << "ガソリン量を入力してください．\n";
	cin >> car1.gas;

	show(&car1);

	return 0;
}

void show(Car* pC){
	//"arrow operator"
	cout << "車のナンバーは" << pC->num << 
		"ガソリン量は" << pC->gas << "です．\n";
}



