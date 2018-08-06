#include <iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int a, int b){x=a; y=b;}
		void show(){cout << "x:" << x << "\ty:" << y << '\n';}
		void setX(int a){x=a;}
		void setY(int b){x=b;}
		Point operator++();
		Point operator++(int d);
};

Point Point::operator++()
{
	x++;
	y++;
	return *this;
}

Point Point::operator++(int d)
{
	Point p = *this;
	x++;
	y++;
	return p;
}

int main()
{
	Point p1(1, 3);
	Point p2(1, 3);
	Point p3(0, 0);
	Point p4(0, 0);

	p3 = ++p1;
	p1.show();
	p3.show();

	p4 = p2++;
	p2.show();
	p4.show();

	return 0;
}
