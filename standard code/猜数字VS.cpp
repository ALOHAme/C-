#include <iostream>
using namespace std;

/*int main()
{
	//* ￥￥ unsigned 加减后出现负数的处理结果
	//unsigned u1 = 42, u2 = 10;
	//cout << u2 - u1 << endl;//4294967264

	//unsigned u1 = 42, u2 = -10;
	//cout << u2 - u1 << endl;//4294967244*/

	
#include<iostream>
#include<ctime>
#include <cstdlib> 
using namespace std;

int number;
int yournumber;
int count = 1;
char contne;
void judgement(int &number, int &yournumber)
{
	
}



int main()
{

	cout << "I have a number between 1 and 1000." << endl
		<< "Can you guess my number?" << endl
		<< "Please type your first guess." << endl;


		int count = 1;
		srand(time(0));
		number = (1 + rand() % 1000);
		yournumber = 10000;
		
		while (number != yournumber) {
			cin >> yournumber;
			if (yournumber == number)
				cout << "Excellent!You guessed the number!" << endl;
			else
			{
				if (yournumber > number)
					cout << "Too high!" << endl;
				else
				{
					cout << "Too low!" << endl;
				}
			}
			++count;
		}
			
		

	system("pause");
}