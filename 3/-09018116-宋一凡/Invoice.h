#include<string>
using namespace std;
class Invoice
{
public:
	Invoice(string,string,int,int);
	void setnumber(string);
	void setdescription(string);
	void setquantity(int);
	void setprice(int);
    string getnumber();
	string getdescription();
	int getquantity();
	int getprice();
	int getInvoiceAmount();
	void displayMessage();
private:
	string number;
	string description;
	int quantity;
	int price;
};