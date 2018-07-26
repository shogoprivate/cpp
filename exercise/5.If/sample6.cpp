#include <iostream>
using namespace std;

int main()
{
	char res;

	cout << "あなたは男性ですか？\n";
	cout << "YまたはNで入力してください．\n";
	cout << "Ans.>>";
	cin >> res;

	if (res=='Y'||res=='y'){
		cout << "あなたは男性ですね．\n";
	}
	else if (res=='N'||res=='n'){
		cout << "あなたは女性ですね．\n";
	}
	else{
		cout << "YまたはNで入力してください．\n";
	}

	return 0;
}
