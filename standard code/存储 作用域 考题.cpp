#include<iostream>
using namespace std;


	int f1(int a)
	{
		static int n = 0;
		n += a;
		return n;
	}

	int f2(int &b)
	{
		b *= 2;
		return b;
	}

	int f3(int c)
	{
		++c;
		return c;
	}

	int main()
	{
		int num = 10, a = 1;
		for (int i = 0; i < num; i += 2)
		{
			cout << f1(i) + f2(a) << " ";
		}
		a += f3(f2(a));
		cout << "\n a=" << a;
	system("pause");
	}
	/*2 6 14 28 52
     a=129
 */