/* How to store the address into "pointer" */

#include<iostream>

using namespace std;

int main(){
	int a;
	int* pA;

	a = 5;
	pA = &a;

	cout << "変数aの値は" << a << "です．\n";
	cout << "変数aのアドレス(&a)は" << &a << "です．\n";
	cout << "ポインタpAの値は" << pA << "です．\n";

	return 0;
}
