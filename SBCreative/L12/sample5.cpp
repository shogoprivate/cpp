/* How to use the reference of "class object" as "argument" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		int getNum(){return num;}
		double getGas(){return gas;}
		void show();
		void getNumGas(int n, double g);
};

void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

void Car::getNumGas(int n, double g){
	if (g>0 && g<1000){
		num = n;
		gas = g;
		cout << "ナンバーを" << num << "にガソリン量を"
			<< gas << "に設定しました．\n";
	}
	else{
		cout << g << "は正しいガソリン量ではありません．\n";
		cout << "ガソリン量を変更できませんでした．\n";
	}
}

void buy(Car& c);

int main(){
	Car car1;

	car1.getNumGas(1234, 20.5);

	buy(car1);

	return 0;
}

void buy(Car& c){
	int n = c.getNum();
	double g = c.getGas();
	cout << "ナンバー" << n << "\nガソリン量" 
		<< g << "の車を購入しました．\n";
}
