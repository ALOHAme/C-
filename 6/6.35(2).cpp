#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int r1, r2;
int result;
void right();
void fault();


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
		right();
	else
	{
		fault();
		while (result != r1 * r2) {
			cin >> result;
			if (result == r1 * r2)
				right();
			else
				fault();
		}
	}
}
void right() {
	switch (1 + rand() % 4)
	{
	case'1':
		cout << "Very good\n";
		break;

	case'2':
		cout << " Excellent! \n";
		break;

	case'3':
		cout << " Nice work! \n";
		break;

	case'4':
		cout << "Keep up the good work! \n";
		break;

	default:
		break;
	}
}
void fault() {
	switch (1 + rand() % 4)
	{
	case'1':
		cout << "  No. Please try again.\n";
		break;

	case'2':
		cout << "  Wrong. Try once more. \n";
		break;

	case'3':
		cout << " Don't give up! \n";
		break;

	case'4':
		cout << "No. Keep trying. \n";
		break;

	default:
		break;
	}
}