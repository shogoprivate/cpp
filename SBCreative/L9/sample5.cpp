/* How to use "pointer" of "array" */

#include<iostream>

using namespace std;

int main(){
	const int num=5;

	int test[num] = {80, 60, 55, 22, 75};

	cout << "test[0]の値は" << test[0] << "です．\n";
	cout << "test[0]のアドレスは" << &test[0] << "です．\n";
	cout << "testの値は" << test << "です．\n";
	cout << "つまり*testの値は" << *test << "です．\n";

	return 0;
}	

