#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 1, c = 1, a1; 
	double e = 1.0;

	cout << "��������Ҫ�ľ��ȣ� " << endl;
	cin >> a;
	a1 = a;
	while(a > 1)
	{
		e = e + 1.0/(b * c);
		b = b * c;
		++c;
		--a;
	}
	cout << "e�ھ���Ϊ" << a1 << "�Ľ���ֵΪ: " << e << endl;

	system("pause");
	return 0;
}
