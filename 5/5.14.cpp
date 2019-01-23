#include<iostream>
using namespace std;

int main()
{
	cout << "Enter the product(1,2,3,4,5)." << endl 
		 << "Enter the EOF character to end input." << endl;
	int product1 = 0;
	int product2 = 0;
	int product3 = 0;
	int product4 = 0;
	int product5 = 0;
	int product;

	while ((product = cin.get()) != EOF)
	{
		switch (product)
		{
		case '1':
			++product1;
			break;

		case '2':
			++product2;
			break;

		case '3':
			++product3;
			break;

		case '4':
			++product4;
			break;

		case '5':
			++product5;
			break;
		default:
			cout << "Enter a new product." << endl;
			break;
		}
	}
	cout << "\n\nNumber of each product:"  
		<< "\nproduct1: " << product1 
		<< "\nproduct2: " << product2 
		<< "\nproduct3: " << product3 
		<< "\nproduct4: " << product4
		<< "\nproduct5: " << product5
		<< endl;  
	cout << "The total retail value is:" << product1*2.98 + product2*4.50 + product3*9.98 + product4*4.49 + product5*6.87 << endl;
	system("pause");
	return 0;
} 