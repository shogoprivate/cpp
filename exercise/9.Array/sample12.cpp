#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str0[20];
	char str1[10];
	char str2[10];

	strcpy(str1, "Hello");
	strcpy(str2, "Goodbye");
	strcpy(str0, str1);
	strcat(str0, str2); //str0の末尾にコピー(追加)

	cout << "配列str1は" << str1 << "です．\n";
	cout << "配列str2は" << str2 << "です．\n";
	cout << "str1とstr2を連結すると" << str0 << "です．\n";

	return 0;
}

