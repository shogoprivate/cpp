/* How to use "function": Part 3 */

#include<iostream>

using namespace std;

int buy(int x, int y){
	int z;

	cout << x << "万円と" << y << "万円の車を買いました．\n";

	z = x+y;

	return z;
}

int main(){
	int num1, num2, sum;

	cout << "いくらの車を買いますか？\n";
	cin >> num1;

	cout << "いくらの車を買いますか？\n";
	cin >> num2;

	sum = buy(num1, num2);

	cout << "合計で" << sum << "万円です．\n";

	return 0;
}




