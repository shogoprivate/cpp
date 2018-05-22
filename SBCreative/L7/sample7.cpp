#include<iostream>

using namespace std;

int sum(int x, int y){
	return x+y;
}

int main(){
	int num1, num2, ans;

	cout << "1つ目の整数を入力してください．\n";
	cin >> num1;

	cout << "2つ目の整数を入力してください．\n";
	cin >> num2;

	ans = sum(num1, num2);

	cout << "2つの整数の合計は" << ans << "です．\n";

	return 0;
}

// The name of "function" must not be same as that of "variable" for a return value


