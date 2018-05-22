#include<iostream>

using namespace std;

int main(){
	int num;
	cout << "何個*を入力しますか？\n";
	cin >> num;

	for (int i=1; i<=num; i++){
		cout << '*';
	}

	cout << "\n";	

	return 0;
}
