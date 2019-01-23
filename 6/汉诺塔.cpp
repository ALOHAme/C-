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
		hanoi(n - 1, from, to, other);//��n-1��������from�Ƶ�other��������to��
		move(from, to);
		hanoi(n - 1, other, from, to);//�ٰ�n-1��������other�Ƶ�to��������from
	}
}
void move(char from, char to)
{
	cout << from << "-->" << to << endl;
}
/*��ӡȫ�������⣺����һ����n��Ҫ���ӡ123...n������ȫ����.����n=4�������е�ȫ����Ϊ��

1 2 3 4

1 2 4 3

1 3 2 4

1 3 4 2

1 4 2 3

1 4 3 2

......

4 1 2 3

һ��4!=24��.
*/