/* How to deal with the file */

#include<iostream>
#include<fstream>

using namespace std;

int main(){
	// Class: ofstream, Object: fout
	ofstream fout("test0.txt");
	if (!fout){
		cout << "ファイルをオープンできませんでした．\n";
		return 1;
	}
	else
		cout << "ファイルをオープンしました．\n";

	fout.close();
	cout << "ファイルをクローズしました．\n";

	return 0;
}
