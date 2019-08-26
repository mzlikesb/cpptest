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

	// ���ͷ����� ����ؼ� ���� ��ȸ
	//for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	for (auto iter = l.begin(); iter != l.end(); iter++)
	{
		cout << *iter << endl;
	}
	
	// �ڷ������� 1�� ������ iter(������ �ƴ�)�� ��ȸ
	for (auto iter : a) {
		cout << iter << endl;
	}

	return 0;
}