#include<iostream>
using namespace std;

int main()
{
	//第一个
	int r1, c1;
	for (r1 = 1; r1 <= 10; r1++)
	{
		for (c1 = 1; c1 <= r1; c1++)
			cout << '*';

		cout << endl;
	}
	cout << endl;

	//第二个
	int r2, c2;
	for (r2 = 10; r2 >= 1; r2--)
	{
		for (c2 = r2; c2 > 0 && c2 <= r2; c2--)
			cout << '*';

		cout << endl;
	}
	cout << endl;

	//第三个
	int r3, b3, c3;
	for (r3 = 10; r3 >= 1; r3--)
	{
		for (b3 = 10 - r3; b3 > 0 ; b3--)
			cout << " ";
		for (c3 = r3; c3 > 0 && c3 <= r3; c3--)
			cout << '*';

		cout << endl;
	}
	cout << endl;

	//第四个
	int r4, b4, c4;
	for (r4 = 1; r4 <= 10; r4++)
	{
		for (b4 = 10 - r4; b4 > 0; b4--)
			cout << " ";
		for (c4 = r4; c4 > 0; c4--)
			cout << '*';

		cout << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}