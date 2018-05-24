/* How to use "2D-array" */

#include<iostream>

using namespace std;

int main(){
	const int sub=2;
	const int num=5;

	int test[2][5];

	for (int i=0; i<num; i++){
		for (int j=0; j<sub; j++){
			switch(j){
				case 0:{cout << i+1 << "人目の国語の点数を入力 >>";
								 cin >> test[j][i];
								 break;
							 }
				case 1:{cout << i+1 << "人目の算数の点数を入力 >>";
								 cin >> test[j][i];
								 break;
							 }
			}
		}
	}

	cout << "\n";

	for (int i=0; i<num; i++){
		for (int j=0; j<sub; j++){
			switch(j){
				case 0:cout << i+1 << "人目の国語の点数は" << test[j][i] << "点です．\n";break;
				case 1:cout << i+1 << "人目の算数の点数は" << test[j][i] << "点です．\n";break;
			}
		}
	}

	return 0;
}	

// Initialize "2D-array"
// int test[][] = {{80,60,22,50,75},{90,55,68,72,58}}
