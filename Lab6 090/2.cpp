#include<iostream>
using namespace std;

int num;
int i = 0;
int a = 0;
int main()
{
	int count[90] = {};
   cout << "Enter 20 numbers, each of which is between 10 and 100:" << endl;
   while ( a < 23){
		cin >> num;
		if (num >= 10 && num <= 100) {
			count[i] = num;
			for (int n = 0; n < i; ++n)
			{
				if (count[n] == count[i])
				{
					count[i] = 0;
					cout << "Duplicate number\n";
				}
			}
			++i;
		}
		else
			cout << "Invalid number\n";
		++a;
	}
   cout << endl;
   for (int c = 0; c <= i; ++c)
	   if (count[c] != 0)
		   cout << count[c] << endl;

   system("pause");
   return 0;
}
