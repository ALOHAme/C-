#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	cout << "����һ����������:" << endl;
	
	int  i,i1,a,c,x,  y, z, sum = 0;
	//iΪ����Ķ������� 
	//aΪ����������ȡ����һλ�� 
	//c����ͳ�ƶ���������λ�� 
	//x,y���ڳ�����ȡ�� 
	//sum��ʾ��Ӧ��ʮ������

	cin >> i;

	//ͳ��i��λ��
	i1 = i;
	for (c = 0; i1 > 0; ++c)
	{
		i1 = i1 / 10;
	}
	y = c - 1;
	while (c > 0)
	{
		x = pow(10, y);
		a = i / x;
		i = i % x;
		z = pow(2, y);
		sum = sum + a * z;
			y--;
			c--;
	}

	cout << " �ö���������Ӧ��ʮ������Ϊ��" << sum << endl;

	system("pause");
	return 0;
}
