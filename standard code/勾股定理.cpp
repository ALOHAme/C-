#include <iostream>
using std::cout;
using std::endl;
//π¥π…∂®¿Ì
int main()
{
	int count = 0; // number of triples found
	long int hypotenuseSquared; // hypotenuse squared
	long int sidesSquared; // sum of squares of sides

	cout << "Side 1\tSide 2\tSide3" << endl;

	for (int side1 = 1; side1 <= 500; ++side1)
	{
		for (int side2 = side1; side2 <= 500; ++side2)
		{
			for (int side3 = side2; side3 <= 500; ++side3)
			{
				// calculate square of hypotenuse value
				/* Write a statement to calculate hypotenuseSquared */
				hypotenuseSquared = side3 * side3;
				// calculate sum of squares of sides
				/* Write a statement to calculate the sum of the sides Squared */
				sidesSquared = side1 * side1 + side2 * side2;
				// if (hypotenuse)^2 = (side1)^2 + (side2)^2,
				// Pythagorean triple
				if (hypotenuseSquared == sidesSquared)
				{
					// display triple
					cout << side1 << '\t' << side2 << '\t'
						<< side3 << '\n';
					count++; // update count
				} // end if
			} // end for
		} // end for
	} // end for

	// display total number of triples found
	cout << "A total of " << count << " triples were found." << endl;
	system("pause");
	return 0; // indicate successful termination
}