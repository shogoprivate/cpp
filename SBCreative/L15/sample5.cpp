/* How to use "STL(Standard Template Library): Vector" */

#include<iostream>
#include<vector>

using namespace std;

int main(){
	int num;
	vector<int> vec;

	cout << "いくつ整数を入力しますか？\n";
	cin >> num;

	for (int i=0; i<num; i++){
		int data;
		cout << "整数を入力してください．\n";
		cin >> data;
		vec.push_back(data);
	}

	cout << "表示します．\n";
	vector<int>::iterator it = vec.begin();
	while(it != vec.end()){
		cout << *it;
		cout << "-";
		it++;
	}
	cout << "\n";
}
