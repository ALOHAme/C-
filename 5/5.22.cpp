#include<iostream>
using namespace std;

/* a) !(x < 5) && !(y >= 7)    相当于    !((x < 5) || (y >= 7))
   b) !(a == b ) || !(g != 5)  相当于    !((a == b) && (g != 5))
   c) !((x <= 8) && (y > 4))   相当于    !(x <= 8) || !(y > 4)
   d) !((i > 4) || (j <= 6))   相当于    !(i > 4) && !(j <= 6)
*/
int main()
{
	cout << "Enter x, y" << endl;
	int x, y;
	cin >> x >> y;

	cout <<( !(x < 5) && !(y >= 7) )<< endl;
	cout << !((x < 5) || (y >= 7)) << endl;

	cout << !((x <= 8) && (y > 4)) << endl;
	cout << (!(x <= 8) || !(y > 4)) << endl;

	cout << "Enter a, b, g" << endl;
	int a, b, g;
	cin >> a >> b >> g;
	cout << ( !(a == b ) || !(g != 5) )<< endl;
	cout << !((a == b) && (g != 5)) << endl;

	
	cout << "Enter i,j" << endl;
	int i, j;
	cin >> i >> j;
	cout << !((i > 4) || (j <= 6)) << endl;
	cout <<( !(i > 4) && !(j <= 6) )<< endl;
}