/* How to use "array" : Part 1 */
/* input & output */

#include<iostream>

using namespace std;

int main(){
	const int num = 5;
	int test[num];

	cout << num << "人の点数を入力してください．\n";

	for (int i=0; i<num; i++){
		cout << i+1 << "人目の点数を入力 >";
		cin >> test[i];
	}
	
	cout << "\n";

	for (int i=0; i<num; i++){
		cout << i << "人目の点数は" << test[i] << "点です．\n";
	}

	return 0;
}	


