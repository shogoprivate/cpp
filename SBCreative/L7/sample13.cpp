/* How to use "function": Part 6 */
/* function template */

#include<iostream>

using namespace std;

template <class T>
T maxt(T x, T y){
	if (x>y)
		return x;
	else
		return y;
}

int main(){
	int in1, in2, ia;
	double dn1, dn2, da;


	cout << "2つの整数を入力してください．\n";
	cin >> in1 >> in2;
	
	cout << "2つの少数を入力してください．\n";
	cin >> dn1 >> dn2;

	ia = maxt(in1, in2);
	da = maxt(dn1, dn2);

	cout << "整数値の最大値は" << ia << "です．\n";
	cout << "少数値の最大値は" << da << "です．\n";

	return 0;
}

