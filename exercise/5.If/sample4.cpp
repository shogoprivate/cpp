#include <iostream>
using namespace std;

int main()
{
	int res;

	cout << "整数を入力してください．>>";
	cin >> res;

	if (res==1){
		cout << "1が入力されました．\n";
	}
	else if (res==2){
		cout << "2が入力されました．\n";
	}
	else{
		cout << "1, 2以外が入力されました．\n";
	}

	return 0;
}
