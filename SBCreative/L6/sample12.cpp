/* How to use "cotinue satement" */

#include<iostream>

using namespace std;

int main(){
	int res;

	cout << "何番目の処理を飛ばしますか．\n";
	do{
		cin >> res;
		if (res>5){
			cout << "1~5の中から選択してください．\n";
			continue;
		}
		else
			break;
	}while (res);

	for (int i=1; i<=5; i++){
		if (i==res)
			continue;
		cout << i << "番目の処理です．\n";
	}

	return 0;
}

