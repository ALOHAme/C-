#include<iostream>
using namespace std;

int main()
{
	int row = 1;
	while (row <= 9)
	{
		int column = 1; //ÿһ�� column����1��ʼ
		while (column <= row)
		{
			cout << column << "*" << row << "=" << row * column << " ";
			++column;
		}
		++row;
		cout << endl;
	}
	system("pause");
	return 0;
}
