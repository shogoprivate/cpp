/* How to use "break statement" */

#include<iostream>

using namespace std;

int main(){
	int res;

	cout << "何番目のループを中止しますか？\n";
	cin >> res;

	for (int i=1; i<=10; i++){
		cout << i << "番目の処理です．\n";
		if (i==res)
			break;
	}

	return 0;
}
