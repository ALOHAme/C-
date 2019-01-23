#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int r1, r2;
int result;

void check(int result);

int main()
{
	int count = 0;
	for (int i =0; i < 10; ++i)
	{
		srand(time(0));
		r1 = 1 + rand() % 9;
		r2 = 1 + rand() % 9;
		cout << "How much is" << r1 << "times" << r2 << "?" << endl;
		cin >> result;

		if (result == r1 * r2)
			count++;
	}
	if (count > 7)
		cout << "Nice work!\n";
	else
		cout << "Please ask your instructor for extra help\n";

	system("pause");
	return 0;
}
