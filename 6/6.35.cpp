#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int r1, r2;
int result;

void check(int result);

int main()
{
	while (1) {
		srand(time(0));
		r1 = 1 + rand() % 9;
		r2 = 1 + rand() % 9;
		cout << "How much is" << r1 << "times" << r2 << "?" << endl;
		cin >> result;
		check(result);
	}
	system("pause");
	return 0;
}


void check(int result)
{
	if (result == r1 * r2)
		cout << "Very good\n";
	else
	{
		cout << "NO.Please try again.\n";
		while (result != r1 * r2) {
			cin >> result;
			if (result == r1 * r2)
				cout << "Very good\n";
			else
				cout << "NO.Please try again.\n";
		}
	}
}
