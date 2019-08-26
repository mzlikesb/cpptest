#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {

	int a[5];
	vector<int> v;
	list<int> l;

	for (int i = 0; i < 5; i++)
	{
		a[i] = i;
		v.push_back(i);
		l.push_back(i);
	}

	// 이터레이터 사용해서 벡터 순회
	//for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	for (auto iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter << endl;
	}
	
	// 자료형에서 1개 꺼내서 iter(포인터 아님)로 순회
	for (auto iter : a) {
		cout << iter << endl;
	}

	return 0;
}