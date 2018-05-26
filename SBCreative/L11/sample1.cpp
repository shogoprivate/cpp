/* Howt to use "typedef" and make the new "type" */

#include<iostream>

using namespace std;

//The instance of "type" is maked by "typedef"
typedef unsigned short int Unsint;

//The new "type" is maked by "enum"
//Return the element number. (ex) SAT = 6
enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main(){
	Unsint a = 10;

	Week w; 
	w	= SAT;

	cout << "typedefで作成された型(Unsint型)の変数aの値は" << a << "です．\n";

	cout << "enumで作成された新しい型(Week型)の変数wの値は" << w << "です．\n";
	switch (w){
		case SUN: cout << "日曜日です．\n";break;
		case MON: cout << "月曜日です．\n";break;
		case TUE: cout << "火曜日です．\n";break;
		case WED: cout << "水曜日です．\n";break;
		case THU: cout << "木曜日です．\n";break;
		case FRI: cout << "金曜日です．\n";break;
		case SAT: cout << "土曜日です．\n";break;
		default: cout << "何曜日かわかりません．\n";
	}

	return 0;
}
