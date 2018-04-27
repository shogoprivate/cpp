#include <iostream>
using namespace std;

int main()
{
	int point;
	int num = 0;
	int sum = 0;
	double avg;

	cout << "--5科目の総合点と平均点--\n";
	
	cout << "科目1の点数を入力してください．\n";
	cin >> point;
	num++;
	sum += point ;
	
	cout << "科目2の点数を入力してください．\n";
	cin >> point;
	num++;
	sum += point ;

	cout << "科目3の点数を入力してください．\n";
	cin >> point;
	num++;
	sum += point ;

	cout << "科目4の点数を入力してください．\n";
	cin >> point;
	num++;
	sum += point ;

	cout << "科目5の点数を入力してください．\n";
	cin >> point;
	num++;
	sum += point ;
	
	avg = (double)sum/(double)num;

	cout << num << "科目の総合点は" << sum << "です．\n";
	cout << num << "科目の平均点は" << avg << "です．\n";

	return 0;
}




