#include <iostream>
using namespace std;

int main()
{
	for (int i=0; i<=10; i++)
	{
		cout << i;
		cout.width(3);
		cout.fill('-');
	}
	cout << endl;

	return 0;
}
