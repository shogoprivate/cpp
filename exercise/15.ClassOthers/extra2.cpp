#include <iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int a, int b){x=a; y=b;}
		void setX(int a){x=a;}
		void setY(int b){y=b;}
		void show(){cout << "x:" << x << "\ty:" << y << '\n';} //friend関数
		friend Point operator+(int a, Point p);
};

Point operator+(int a, Point p)
{
	Point tmp(a+p.x, a+p.y);
	return tmp;
}

int main()
{
	int a = 3;
	Point p1(1, 3);
	p1.show();

	p1 = a + p1;
	p1.show();

	return 0;
}

