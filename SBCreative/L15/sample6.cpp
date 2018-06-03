/* How to use the "algorithm" */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> vec;
	for (int i=0; i<10; i++){
		vec.push_back(i);
	}

	cout << "並び替え前は";
	vector<int>::iterator it = vec.begin();
	while(it != vec.end()){
		cout << *it;
		it++;
	}
	cout << "です．\n";

	cout << "逆順にすると";
	reverse(vec.begin(), vec.end());
	it = vec.begin();
	while(it != vec.end()){
		cout << *it;
		it++;
	}
	cout << "です．\n";

	cout << "並び替え後は";
	sort(vec.begin(), vec.end());
	it = vec.begin();
	while(it != vec.end()){
		cout << *it;
		it++;
	}
	cout << "です．\n";
}

