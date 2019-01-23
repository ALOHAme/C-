#include<iostream>
using namespace std;


char character;
int main()
{
	int size;
cout << "Enter a character and size: " << endl;
cin >> character >> size;
int r1, b1, c1;
for (r1 = 1; r1 <= size / 2; r1++)
{
	for (b1 = 5 - r1; b1 >= 1; b1--)
		cout << ' ';

	for (c1 = 2 * r1 - 1; c1 >= 1; c1--)
		cout << '*';

	cout << endl;
}

int r2, b2, c2, d1;
for (r2 = 1; r2 <= size / 2; r2++)
{
	for (c2 = r2; c2 >= 0; c2--)
		cout << ' ';

	for (b2 = 2 * (4 - r2) - 1; b2 >= 1; b2--)
		cout << '*';

	cout << endl;
}
system("pause");
		}