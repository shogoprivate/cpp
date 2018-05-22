/* How to use "function": Part 4 */
/* function prototype declaration */
/* This is effective when we want to make a large-scale program */

#include<iostream>

using namespace std;

int max(int x, int y);

int main(){
	int num1, num2, ans;

	cout << "1番目の整数を入力してください．\n";
	cin >> num1;
	
	cout << "2番目の整数を入力してください．\n";
	cin >> num2;

	ans = max(num1, num2);

	cout << "最大値は" << ans << "です．\n";

	return 0;
}

int max(int x, int y){
	if (x>y)
		return x;
	else
		return y;
}
