/* The scope of variables */

#include<iostream>

using namespace std;

void func();

// Global variable
int a = 0;

int main(){
	// Local variable of "main function"
	int b = 1;

	cout << "main関数では変数aとbが使えます．\n";
	cout << "グローバル変数aの値は" << a << "です．\n";
	cout << "ローカル変数bの値は" << b << "です．\n";
	//cout << "変数cの値は" << c << "です．\n"; //Error

	func();

	return 0;
}

void func(){
	// Local variable of "func function"
	int a = 10;
	int c = 2;

	cout << "func関数では変数aとcが使えます．\n";
	cout << "ローカル変数aの値は" << a << "です．\n";
	cout << "グローバル変数::aの値は" << ::a << "です．\n";
	//cout << "変数bの値は" << b << "です．\n"; //Error
	cout << "ローカル変数cの値は" << c << "です．\n"; 
}

