/* operator overloading (by using the member function) */

#include<iostream>

using namespace std;

class Point{
	public:
		int x;
		int y;
		Point(int a=0, int b=0){x=a; y=b;}
		Point operator+(Point p);
};

Point Point::operator+(Point p){
	Point tmp;
	tmp.x = x+p.x;
	tmp.y = y+p.y;
	return tmp;
}

int main(){
	Point p1(1, 2);
	Point p2(3, 6);

	cout << "p1の座標は(" << p1.x << "," << p1.y << ")です．\n";
	cout << "p2の座標は(" << p2.x << "," << p2.y << ")です．\n";

	p1 = p1+p2;
	cout << "p1+p2の座標は(" << p1.x << "," << p1.y << ")です．\n";

	return 0;
}

