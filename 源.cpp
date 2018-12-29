#include<iostream>
using namespace std;

int main()
{
	for (; 1;) {
		cout << "第一个数确定几行，第二个数确定每行几个";
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