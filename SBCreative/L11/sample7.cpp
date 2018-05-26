/* How to define "union data type" */
/* The value stored in "members" is only one */

#include<iostream>

using namespace std;

union Year{
	int ad;
	int gengo;
};

int main(){
	Year myyear;

	cout << "西暦を入力 >> ";
	cin >> myyear.ad;

	cout << "西暦は" << myyear.ad << "です．\n";
	cout << "元号も" << myyear.gengo << "です．\n";
	
	cout << "元号を入力 >> ";
	cin >> myyear.gengo;

	cout << "元号は" << myyear.gengo << "です．\n";
	cout << "西暦も" << myyear.ad << "です．\n";

	return 0;
}
