#include<iostream>
#include<ctime>
#include <cstdlib> 
using namespace std;

int number ;
int yournumber;
int count = 1;
char contne;
void judgement(int &number, int &yournumber)
{
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
}

int main()
{
	
	cout << "I have a number between 1 and 1000." << endl 
		 << "Can you guess my number?" << endl
		 << "Please type your first guess." << endl;

	do {
		int count = 0;
		unsigned int srand(time(0));
		number = (1 + rand() % 1000);
		
		do {
			cin >> yournumber;
			judgement(number, yournumber);
			++count;
		} while (number != yournumber);
		if (count == 10)
			cout << "Ahak!You know the secrete!" << endl;
		else
		{
			if (count < 10)
				cout << "Either you know the secret or you got lucky!" << endl;
			else
				cout << "You should be able to do better!" << endl;
		}
		cout << "Would you like to play again(y or n)?" << endl;
		cin>> contne;
	} while (contne == 'y');
	
		
	system("pause");
}