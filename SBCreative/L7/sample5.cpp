/*How to use "function": Part 2 */

#include<iostream>

using namespace std;

void buy(int x, int y){
	cout << x << "万円の車と" << y << "万円の車を買いました\n";
}

int main(){
	int cost1, cost2;

	cout << "1台目の車の価格は？\n";
	cin >> cost1;

	cout << "2台目の車の価格は？\n";
	cin >> cost2;

	buy(cost1, cost2);

	return 0;
}

