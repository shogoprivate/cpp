/* How to make sure of memories dynamically */

#include<iostream>

using namespace std;

int main(){
	int* pA;
	pA = new int;

	cout << "動的にメモリを確保しました．\n";
	*pA = 10;

	cout << "動的に確保したメモリを使って" << *pA <<
		"を出力します．\n";
	
	// It is necessary to release memories dynamically allocated.
	delete pA;
	cout << "確保したメモリを解放しました．\n";

	return 0;
}
