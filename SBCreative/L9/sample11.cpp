/* How to use "standard library" related to "char-type operation" */

#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char str[100];
	char str0[100];
	char str1[50];
	char str2[50];

	cout << "文字列（英数字）を入力してください．\n";
	cin >> str;
	
	// strlen('str') : Return the number of characters except '\0'
	cout << "文字列の長さは" << strlen(str) << "です．\n";

	cout << "文字列1（英数字）を入力してください．\n";
	cin >> str1;
	cout << "文字列2（英数字）を入力してください．\n";
	cin >> str2;
	
	/* When using the function shown as follow, 
		 the large enouph size of "array" is needed. */
	// strcpy('str0', 'str1') : Copy 'str1' to 'str0'
	strcpy(str0, str1);
	// strcat('str0', 'str2') : Add 'str2' to the end of 'str0'
	strcat(str0, str2);

	cout << "連結すると" << str0 << "です．\n";
	
	return 0;
}
