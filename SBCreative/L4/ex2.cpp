#include <iostream>
using namespace std;

int main()
{
	double height, bottom;
	double area;

	cout << "--三角形の面積を求めるプログロム--\n";
	
	cout << "三角形の高さを入力してください．\n";
	cin >> height;

	cout << "三角形の底辺を入力してください．\n";
	cin >> bottom;

	area = height*bottom/2;

	cout << "三角形の面積は" << area << "です．\n";

	return 0;
}




