#include <iostream> 
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int  x;
int  y;

const long ROLLS = 36000;
const int size1 = 6;
const int size2 = 6;
int sum[size1][size2] = {};
int main() {
	
	srand(time(0));

	for (int count = 0; count < ROLLS; ++count)
	{
		x = 1 + rand() % 6;
		y = 1 + rand() % 6;
		++sum[x-1][y-1];
	}
	cout << setw(10) << " " << setw(10) << "1" << setw(10) << "2"
		<< setw(10) << "3" << setw(10) << "4" << setw(10) << "5" << setw(10) << "6"
		<<endl;
	
	for (int i = 0; i < size1; i++)
	{
		cout << setw(10) << i + 1;
		for (int j = 0; j < size2; j++)
			cout << setw(10) << sum[i][j];

		cout << endl;
	}
	system("pause");
	return 0;
}
