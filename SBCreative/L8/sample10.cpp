/* How to use "const" */
/* When assigning "const" to "dummy argument" in "function",
	 the value of "actual argument" can not be changed */

#include<iostream>

using namespace std;

void func1(const int* pX);
void func2(const int& rX);

int main(){
	int a = 5;
	int* pA = &a;

	func1(pA);
	func2(a);

	return 0;
}

void func1(const int* pX){
	// Error
	// *pX = 10;
	cout << *pX << "を出力します．\n";
}

void func2(const int& rX){
	// Error
	// rX = 10;
	cout << rX << "を出力します.\n";
}
