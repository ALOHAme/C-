#include <iostream> 
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std; 

int a,x; 
int b,y;
int result0,result;
int main() {
	const long ROLLS = 36000;  const int SIZE = 13;  
	int expected[SIZE] = {};
	for (a = 1; a <= 6; ++a)
	{
		for (b = 1; b <= 6; ++b)
		{
			result0 = a + b;
			expected[result0]++;
		}
	}   
	int sum[SIZE] = {};
	srand( time( 0 ) );  

	for (int count = 0; count < ROLLS; ++count)
	{
		x = 1 + rand() % 6;
		y = 1 + rand() % 6;
		result = x + y;
		sum[result]++;
	}
	cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )   
		<< "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;  // display results of rolling dice  
	for ( int j = 2; j < SIZE; j++ )   
		cout << setw( 10 ) << j << setw( 10 ) << sum[ j ]   
		<< setprecision( 3 ) << setw( 9 )   
		<< 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 )   << setw( 9 ) 
		<< 100.0 * sum[ j ] / 36000 << "%\n";  
	system("pause");
	return 0; 
    }