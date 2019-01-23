#include<iostream>
#include"Invoice.h"
using namespace std;
Invoice::Invoice(string number1,string description1,int quantity1,int price1){
	setnumber(number1);
	setdescription(description1);
	setquantity(quantity1);
	setprice(price1);
}
void Invoice::setnumber(string number1){
	number=number1;
}
void Invoice::setdescription(string description1){
	description=description1;
}
void Invoice::setquantity(int quantity1){
	if(quantity1>=0) quantity=quantity1;
	else quantity=0;
}
void Invoice::setprice(int price1){
	if(price1>=0) price=price1;
	else price=0;
}
string Invoice::getnumber(){
    return number;
}
string Invoice::getdescription(){
    return description;
}
int Invoice::getquantity(){
    return quantity;
}
int Invoice::getprice(){
    return price;
}
int Invoice::getInvoiceAmount(){
    return price*quantity;
}
void Invoice::displayMessage(){
	cout<<"The number is "<<getnumber()<<endl;
	cout<<"The description is "<<getdescription()<<endl;
	cout<<"The quantity is "<<getquantity()<<endl;
	cout<<"The price is "<<getprice()<<endl;
	cout<<"The InvoiceAmount is "<<getInvoiceAmount()<<endl;
}