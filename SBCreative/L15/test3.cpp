/* How to use the "conversion function" */
/* How to use the "conversion constructor" */

#include<iostream>
#include<typeinfo>

using namespace std;

class Number{
	private:
		int num;
	public:
		Number(){num=0;}
		// Conversion construcor
		Number(int n){num=n;}
		// Conversion function
		operator double(){return num;}
		Number operator++();
		Number operator++(int d);
		Number operator--();
		Number operator--(int d);
};

Number Number::operator++(){
	num++;
	return *this;
}

Number Number::operator++(int d){
	Number tmp = *this;
	num++;
	return tmp;
}

Number Number::operator--(){
	num--;
	return *this;
}

Number Number::operator--(int d){
	Number tmp = *this;
	num--;
	return tmp;
}

int main(){
	Number n1;
	// Cast operator
	double x = (double)n1;
	// Conversion
	int i = 10;
	Number n2(i);
	
	cout << "変数n1のデータ型は" << typeid(n1).name() << "です．\n";
	cout << "変数xのデータ型は" << typeid(x).name() << "です．\n";
	
	cout << "変数n2のデータ型は" << typeid(n2).name() << "です．\n";
	cout << "変数n2の値は" << n2 << "です．\n";
	
	return 0;
}

