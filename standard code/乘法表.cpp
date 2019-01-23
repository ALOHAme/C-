#include<iostream>
using namespace std;

int main()
{
	int row = 1;
	while (row <= 9)
	{
		int column = 1; //每一行 column都从1开始
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
