#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	cout << "����һ����������:" << endl;

	int  Binary, a, digit, x, y, sum = 0;
	//BinaryΪ����Ķ�������
	//aΪ����������ȡ����һλ�� 
	//digit����ͳ�ƶ���������λ�� 
	//x,y���ڳ�����ȡ�� 
	//sum��ʾ��Ӧ��ʮ������

	cin >> Binary;
	int Binary1 = Binary;
	for (digit = 0; Binary1 > 0; ++digit)
	{
		Binary1 = Binary1 / 10;
	}
	y = digit - 1;
	while (Binary > 0)
	{
		//ȡ��λ
		x = pow(10, y);
		a = Binary / x;

		Binary = Binary % x;
		sum = sum + (a * pow(2, y));
		y--;
	}
	cout << " �ö���������Ӧ��ʮ������Ϊ��" << sum << endl;
	system("pause");
	return 0;
}