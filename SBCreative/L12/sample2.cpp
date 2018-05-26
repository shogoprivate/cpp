/* How to limit the access to "member" */

#include<iostream>

using namespace std;

class Car{
	private:
		int num;
		double gas;
	public:
		int getNum(){return num;} //inline function
		double getGas(){return gas;} //inline function
		void show();
		void setNumGas(int n, double g);
};

void Car::show(){
	cout << "車のナンバーは" << num << "です．\n";
	cout << "ガソリン量は" << gas << "です．\n";
}

void Car::setNumGas(int n, double g){
	if (g>0 && g<1000){
		num = n;
		gas = g;
		cout << "ナンバーを" << num << "にガソリン量を" 
			<< gas << "にしました．\n";
	}
	else{
		cout << g << "は正しいガソリン量ではありません．\n";
		cout << "ガソリン量を変更できませんでした．\n";
	}
}

int main(){
	Car car1;
	
	//このようなアクセスできません．
	//car1.num = 1234;
	//car1.gas = 20.5;

	car1.setNumGas(1234, 20.5);
	car1.show();

	cout << "正しくないガソリン量を(-10.0)を指定してみます・・・．\n";
	car1.setNumGas(1234, -10.0);
	car1.show();
	
	return 0;
}

