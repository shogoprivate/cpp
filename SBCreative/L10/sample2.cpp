/* Storage life of variables */

#include<iostream>

using namespace std;

void func();
int* address();

int a = 0;

int main(){
	
	for (int i=0; i<5; i++){
		func();
	}
	
	int* pRes = address();
	cout << "staticローカル変数dのアドレスは" << pRes << "です．\n";

	return 0;
}

void func(){
	int b = 0;
	static int c = 0;

	cout << "変数aの値は" << a << "変数bは" << b << "変数cは" << c << "です．\n";

	a++;
	b++;
	c++;
}

int* address(){
	//"int d = 10;" is the error.
	static int d = 10;
	int* pD = &d;

	return pD;
}

