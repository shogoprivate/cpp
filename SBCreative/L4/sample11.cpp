/* operation between same types) */

#include <iostream>
using namespace std;

int main()
{
	int num1 = 5;
	int num2 = 4;
	double div;
	
	// wrong result 
	//div = num1/num2;
	div = (double)num1/(double)num2;
	
	cout << "5/4は" << div << "です．\n";

	return 0;
}
