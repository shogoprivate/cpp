#include <iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int a=0, int b=0){x=a; y=b;}
		void show(){cout << "x:" << x << "\ty:" << y << "\n";}
		void setX(int a){x=a;}
		void setY(int b){x=b;}
		Point operator+(Point p);
};

Point Point::operator+(Point p)
{
	Point tmp(x+p.x, y+p.y);
	return tmp;
}

int main()
{
	Point p1(1,2);
	Point p2(3,6);
	
	p1.show();
	p2.show();
	
	p1 = p1 + p2;
	p1.show();

	return 0;
}

