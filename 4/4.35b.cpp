#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 1, c = 1, a1; 
	double e = 1.0;

	cout << "输入你想要的精度： " << endl;
	cin >> a;
	a1 = a;
	while(a > 1)
	{
		e = e + 1.0/(b * c);
		b = b * c;
		++c;
		--a;
	}
	cout << "e在精度为" << a1 << "的近似值为: " << e << endl;

	system("pause");
	return 0;
}
