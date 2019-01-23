#include<iostream>
#include<string>
#include"Invoice.h"

using namespace std;

int main()
{
	string s1, s2; 
	int quantity, pricePerItem;
	cout << "enter the quantity" << "enter the pricePerItem";
	cout << endl;
	cin >> quantity >> pricePerItem;
	Invoice Invoice1(s1, s2, quantity, pricePerItem);

	cout<<Invoice1.getInvoiceAmount();

	system("pause");

}