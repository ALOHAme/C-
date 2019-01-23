#pragma once

#include<iostream>
#include<string>
using namespace std;

class Invoice
{
public:
	Invoice(string number, string partDescription, int quantity, int pricePerItem)
	{
		SetNumber(number);
		SetPartDescription(partDescription);
		SetQuantity(quantity);
		SetPricePerItem(pricePerItem);
	}


	 void SetNumber(string number)
	 {
		 Number = number;
	 }
	 void SetPartDescription(string partDescription)
	 {
		 PartDescription = partDescription;
	 }
	 void SetQuantity(int quantity)
	 {
		Quantity = quantity;
	}
	 void SetPricePerItem(int pricePerItem)
	 {
		 PricePerItem = pricePerItem;

		 if (PricePerItem <= 0)
			 PricePerItem = 0;

	}

	 string getNumber()
	 {
		 return Number;
	}
	 string getPartDescription()
	 {
		 return  PartDescription;
	}
	 int getQuantity()
	 {
		 return Quantity;
	}
	 int getPricePerItem()
	 {
		 return PricePerItem;
	}

	 int getInvoiceAmount()
	 {
		 InvoiceAmount = Quantity * PricePerItem;
		 return  InvoiceAmount;
	 }

	 


private:
	string Number;
	string PartDescription;
	int Quantity;
	int PricePerItem;
	int InvoiceAmount;
};