#include <iostream>
using namespace std;

int* func()
{
	static int a = 10; //int a = 10;ではダメ
	int* pA = &a; 
	return pA;
}

int main()
{
	int* pRes = func();

	cout << "pResの値は" << pRes << "です．\n";

	return 0;
}
