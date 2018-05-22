/* How to use "function": Part 5 */
/* function overload */

#include<iostream>

using namespace std;

int max(int x, int y);
double max(double x, double y);

int main(){
	int in1, in2, ia;
	double dn1, dn2, da;


	cout << "2つの整数を入力してください．\n";
	cin >> in1 >> in2;
	
	cout << "2つの少数を入力してください．\n";
	cin >> dn1 >> dn2;

	ia = max(in1, in2);
	da = max(dn1, dn2);

	cout << "整数値の最大値は" << ia << "です．\n";
	cout << "少数値の最大値は" << da << "です．\n";

	return 0;
}

int max(int x, int y){
	if (x>y)
		return x;
	else
		return y;
}

double max(double x, double y){
	if (x>y)
		return x;
	else
		return y;
}
