/* How to use "dec", "oct", and "hex" */

#include<iostream>

using namespace std;

int main(){
	cout << "30を10進数で表記すると" << dec << 30 << "です．\n";
	cout << "30を8進数で表記すると" << oct << 30 << "です．\n";
	//The value is represented by last formatting
	cout << "12を8進数で表記すると" << 12 << "です．\n"; 
	cout << "30を16進数で表記すると" << hex << 30 << "です．\n";

	return 0;
}
