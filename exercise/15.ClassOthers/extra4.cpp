#include <iostream>
#include <typeinfo>
using namespace std;

class Number
{
	private:
		int num;
	public:
		Number(){num = 0;}
		Number(int n){num = n;}     //変換コンストラクタ
		operator int(){return num;} //変換関数
		Number operator++();
		Number operator++(int d);
		Number operator--();
		Number operator--(int d);
};

Number Number::operator++()
{
	num++;
	return *this;
}

Number Number::operator++(int d)
{
	Number n=*this;
	num++;
	return n;
}

Number Number::operator--()
{
	num++;
	return *this;
}

Number Number::operator--(int d)
{ 
	int n=*this;
	num++;
	return n;
}

int main()
{
	Number n(5);
	int i = (int)n;

	cout << "nの型は" << typeid(n).name() << "です．\n";
	cout << "iの型は" << typeid(i).name() << "です．\n";
	cout << "iの値は" << i << "です．\n";

	return 0;
}
