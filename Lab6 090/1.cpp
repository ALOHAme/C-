#include<iostream>
#include<iomanip>
using namespace std;
//¸Ä£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡



int sales = 0;
inline double salary(int sales);
int counter[11] = {};
int main()
{
	cout<< setprecision(2) << fixed;
	while (sales != -1)
	{
		cout << "Enter emploryee gross sales(-1 to quit):" << endl;
		cin >> sales;
		cout << "Employee commission is:" <<salary(sales)
			<<endl;
		
	}
	cout << "Employees in the range:\n";
	for (int i = 2;i<10;++i)
	cout <<i<<"00 - "<<i<<"99 :"<< counter[i]<<endl;
	cout <<"Over 1000 :"<< counter[10] << endl;
	system("pause");
	return 0;
}

 double salary(int sales)
{
	return 200 + sales*0.09;
}
 void count(int sales)
 {
	 int s = static_cast<int>(sales) / 100;
	 if (s < 10)
		 s = s;
	 else
		 s = 10;
	 switch (s)
	 {
	 case '2':
		 ++counter[2];
		 break;

	 case '3':
		 ++counter[3];
		 break;

	 case '4':
		 ++counter[4];
		 break;

	 case '5':
		 ++counter[5];
		 break;

	 case '6':
		 ++counter[6];
		 break;

	 case '7':
		 ++counter[7];
		 break;

	 case '8':
		 ++counter[8];
		 break;

	 case '9':
		 ++counter[9];
		 break;

	 case '10':
		 ++counter[10];
		 break;
	 }

 }
