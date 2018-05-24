/* How to use "array" as "argument" */

#include<iostream>

using namespace std;

// Prototype declaration of "avg funcution"
//double avg(int t[]);
double avg(int* pT);

int main(){
	const int num = 5;
	int test[num];

	cout << "5人のテストの点数を入力してください．\n";
	for (int i=0; i<5; i++){
		cout << i+1 << "人目の点数を入力 >>";
		cin >> test[i];
	}

	double ans = avg(test);
	cout << "5人の平均点は" << ans << "点です．\n";

	return 0;
}

//double avg(int t[]){
//	double sum = 0;
//	for (int i=0; i<5; i++){
//		sum += t[i];
//	}
//
//	return sum/5;
//}

// Other method
//double avg(int* pT){
//	double sum = 0;
//	for (int i=0; i<5; i++){
//		sum += *(pT+i);
//	}
//
//	return sum/5;
//}

// Other method 
// This method can be used only when using "array"
double avg(int* pT){
	double sum = 0;
	for (int i=0; i<5; i++){
		sum += pT[i];
	}

	return sum/5;
}
