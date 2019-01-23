#include<iostream>
using namespace std;

int main()
{
	char character;
	int size, num;

	char judge = 'y';
	while ( judge == 'y')
		{
		cout << "Choose the shape to graph: " << endl;
		cout <<"1 for square" << endl;
		cout << "2 for diamond" << endl;
		cout << "3 for triangle" << endl;
		num = cin.get();

		switch (num)
		{
		case '1':
		{
			cout << "Enter a character and size: " << endl;
			cin >> character >> size;
			for (int r = 1; r <= size; r++)
			{
				for (int i = size; i >= 0; --i)
					cout << character;

				cout << endl;
			}
			break;
		}

		case '2':
		{
			cout << "Enter a character and size: " << endl;
			cin >> character >> size;
			int r1, b1, c1;
			for (r1 = 1; r1 <= size/2; r1++)
			{
				for (b1 = 5 - r1; b1 >= 1; b1--)
					cout << ' ';

				for (c1 = 2 * r1 - 1; c1 >= 1; c1--)
					cout << '*';

				cout << endl;
			}

			int r2, b2, c2;
			for (r2 = 1; r2 <= size/2; r2++)
			{
				for (c2 = r2; c2 >= 0; c2--)
					cout << ' ';

				for (b2 = 2 * (4 - r2) - 1; b2 >= 1; b2--)
					cout << '*';

				cout << endl;
			}
			break;
		}

		case '3':
		{
			cout << "Enter a character and size: " << endl;
			cin >> character >> size;
			for (int r = 1; r <= size; ++r)
			{
				for (int c = size - r; c > 0; --c)
					cout << " ";
				for (int d = 2 * r - 1; d > 0; --d)
					cout << character;

				cout << endl;
			}
			break;
		}
		default:
			cout << "wrong";
			break;
		}
		cout << "Do you want to contiue (y or n)?:" << endl;
		cin >> judge;
	} 
	

	system("pause");
	return 0;
}


