/* How to call the member funciton with the same name */

#include<iostream>

using namespace std;

class Base1{
	protected:
		int bs1;
	public:
		Base1(int b1 = 0){bs1 = b1;}
		// The same name as that of the member function of "Base2"
		void showBs();
};

class Base2{
	protected:
		int bs2;
	public:
		Base2(int b2 = 0){bs2 = b2;}
		// The same name as that fo the member function of "Base1"
		void showBs();
};

class Derived : public Base1,public Base2{
	protected:
		int dr;
	public:
		Derived(int d=0){dr = d;}
		void showDr();
};

void Base1::showBs(){
	cout << "bs1は" << bs1 << "です．\n";
}

void Base2::showBs(){
	cout << "bs2は" << bs2 << "です．\n";
}

void Derived::showDr(){
	cout << "drは" << dr << "です．\n";
}

int main(){
	Derived drv;
	
	// How to call the member function "showBs()"
	drv.Base1::showBs();
	drv.Base2::showBs();
	drv.showDr();

	return 0;
}

