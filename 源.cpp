#include<iostream>
using namespace std;

int main()
{
	for (; 1;) {
		cout << "��һ����ȷ�����У��ڶ�����ȷ��ÿ�м���";
		int x, y;
		cin >> x >> y;
		for (int i = 1; i <= y; ++i)
		{
			for (int j = 1; j <= x; ++j)
				cout << '@';

			cout << endl;
		}
	}
	system("pause");
}