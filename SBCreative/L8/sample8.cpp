/* How to use "reference" */

#include<iostream>

using namespace std;

int main(){
	int a = 5;
	int& rA = a; //Initialize by using the target of "reference"
	
	cout << "変数aの値は" << a << "です．\n";
	cout << "参照rAの値は" << rA << "です.\n";

	rA = 50;

	cout << "rAに50を代入しました．\n";
	cout << "参照rAの値は" << rA << "に変更されました．\n";
	cout << "参照aの値も" << a << "に変更されました．\n";
	cout << "参照aのアドレスは" << &a << "です．\n";
	cout << "参照rAのアドレスも" << &rA << "です．\n";

	return 0;
}
