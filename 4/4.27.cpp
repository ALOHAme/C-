#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	cout << "输入一个二进制数:" << endl;
	
	int  i,i1,a,c,x,  y, z, sum = 0;
	//i为输入的二进制数 
	//a为二进制数中取出的一位数 
	//c用于统计二进制数的位数 
	//x,y用于除法和取余 
	//sum表示对应的十进制数

	cin >> i;

	//统计i的位数
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

	cout << " 该二进制数对应的十进制数为：" << sum << endl;

	system("pause");
	return 0;
}
