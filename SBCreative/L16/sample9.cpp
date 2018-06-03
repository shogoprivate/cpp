/* How to use "setw() manipulator" and "setfill() manipulator" */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	for (int i=0; i<=10; i++){
		cout << setw(3) << setfill('-') << i;
	}
	cout << endl;

	return 0;
}
