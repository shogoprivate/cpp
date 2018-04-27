#include <iostream>
using namespace std;

int main()
{
	double weight = 0,height = 0;

	cout << "身長の値[cm]はいくつですか？\n";
	cin >> height;
	cout << "体重の値[kg]はいくつですか？\n";
	cin >> weight;
	cout << "身長は" << height << "cmです．\n";
	cout << "体重は" << weight << "kgです．\n";

	return 0;
}

