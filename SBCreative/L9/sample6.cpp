/* How to operate "pointer" of "array" */

#include<iostream>

using namespace std;

int main(){
	const int num=5;

	int test[num] = {80, 60, 55, 22, 75};

	cout << "test[0]の値は" << test[0] << "です．\n";
	cout << "test[0]のアドレスは" << &test[0] << "です．\n";
	cout << "testの値は" << test << "です．\n";
	cout << "つまり*testの値は" << *test << "です．\n";
	cout << "\n";
	cout << "test[1]の値は" << test[1] << "です．\n";
	cout << "test[1]のアドレスは" << &test[1] << "です．\n";
	cout << "test++の値は" << test+1 << "です．\n";
	cout << "つまり*(test+1)の値は" << *(test+1) << "です．\n";

	return 0;
}	

