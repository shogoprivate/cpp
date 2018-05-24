/* How to use "array" : Part 1 */
/* input & output & sort */

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
	
	int tmp; 
	for (int i=0; i<num; i++){
		for (int j=i+1; j<num; j++){
			tmp = (test[i]>test[j]) ? test[i] : test[j];
			test[j] = (test[i]<test[j]) ? test[i] : test[j];
			test[i] = tmp;
		}
	}
	
	cout << "昇順にソートしました．\n";

	for (int i=0; i<num; i++){
		cout << i+1 << "位の点数は" << test[i] << "点です．\n";
	}

	return 0;
}	

