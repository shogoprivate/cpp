/* How to output the data to the file with setting the format */

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
	ofstream fout("test2.txt");
	if (fout.fail()){
		cout << "ファイルをオープンできませんでした．\n";
		return 1;
	}
	else
		cout << "ファイルをオープンしました．\n";

	const int num = 5;
	int test[num];
	cout << num << "人の点数を入力してください．\n";
	for (int i=0; i<num; i++){
		cin >> test[i];
	}

	for (int j=0; j<num; j++){
		fout << "No." << j+1 << setw(5) << test[j] << endl;
	}

	fout.close();

	return 0;
}

