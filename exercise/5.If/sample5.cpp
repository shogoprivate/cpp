#include <iostream>
using namespace std;

int main(){
	int res;

	cout << "整数を入力してください．>>";
	cin >> res;

	switch(res){
		case 1:
			cout << "1が入力されました．\n";
			break;
		case 2:
			cout << "2が入力されました．\n";
			break;
		default:
			cout << "1か2を入力してください．\n";
			break;
	}

	return 0;
}
