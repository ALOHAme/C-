#include<iostream>
using namespace std;

int encrypt(int x){
	int a,b,c,d;
	a=((x/1000)+7)%10;
	b=(((x/100)%10)+7)%10;
	c=(((x/10)%10)+7)%10;
	d=((x%10)+7)%10;
	return c*1000+d*100+a*10+b;
}

int decrypt(int x){
	int a,b,c,d;
	a=((x/1000)+3)%10;
	b=(((x/100)%10)+3)%10;
	c=(((x/10)%10)+3)%10;
	d=((x%10)+3)%10;
	return c*1000+d*100+a*10+b;
}

int main(){
	int n,m;
	
	cout<<"Enter a four-digit integer:";
	cin>>n;
	cout<<"The ENCRYPTED integer is:"<<encrypt(n)<<endl<<endl;
	
	cout<<"Enter an encrypted four-digit integer:";
	cin>>m;
	cout<<"The DECRYPTED integer is:"<<decrypt(m);
}
