/* How to use "char-type pointer" */

#include<iostream>

using namespace std;

int main(){
	char* str = "Hello";

	// output the warning when compiling	
	// since "Hello" is "const char* type"
	cout << str << '\n';

	str = "Goodbye";

	cout << str << '\n';

	return 0;
}

