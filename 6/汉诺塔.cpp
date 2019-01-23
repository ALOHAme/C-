#include<iostream>
using namespace std;

void hanoi(int n, char from, char other, char to);
void move(char from, char to);

int main()
{

	int i;
	cout << "Enter the number of diskes:" << endl;
	cin >> i;
	cout << "the step to moving " << i<< " diskes:" << endl;
	hanoi(i, 'from', 'other', 'to');
	system("pause");
	return 0;
}
void hanoi(int n, char from, char other, char to)
{
	if (n == 1)
		move(from, to);
	else
	{
		hanoi(n - 1, from, to, other);//把n-1个盘子由from移到other，借助于to，
		move(from, to);
		hanoi(n - 1, other, from, to);//再把n-1个盘子由other移到to，借助于from
	}
}
void move(char from, char to)
{
	cout << from << "-->" << to << endl;
}
/*打印全排列问题：给定一个数n，要求打印123...n的所有全排列.例如n=4，则所有的全排列为：

1 2 3 4

1 2 4 3

1 3 2 4

1 3 4 2

1 4 2 3

1 4 3 2

......

4 1 2 3

一共4!=24个.
*/