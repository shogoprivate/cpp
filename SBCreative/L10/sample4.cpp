/* How to dynamically determine the size of "array" */

#include<iostream>

using namespace std;

int main(){
	int num;
	int* pT;

	cout << "何人のテストの点数を入力しますか？ >>";
	cin >> num;

	pT = new int[num];

	cout << "人数分の点数を入力してください．\n";

	for (int i=0; i<num; i++){
		cout << i+1 << "人目の点数 >>";
		cin >> pT[i];
	}
	
	for (int j=0; j<num; j++){
		cout << j+1 << "人目の点数は" << pT[j] << "点です．\n";
	}
	
	// Release memories
	delete[] pT;
	cout << "メモリを解放しました．\n";

	return 0;
}

