/*How to use "function": Part 2 */

#include<iostream>

using namespace std;

void buy(int x){
	cout << x << "万円の車を買いました\n";
}

int main(){
	int cost;
	
	cout << "購入した車の価格を入力してください．\n";
	cin >> cost;

	buy(cost);

	return 0;
}

