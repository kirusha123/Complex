#include <iostream>
#include "Complex.h"

int main()
{
	complex c1(2.5, 0.0);

	complex c2(2.0, 5.0);

	cout << Complex_calc::plus(c1, c2) << endl;
	cout << Complex_calc::minus(c1, c2) << endl;
	cout << Complex_calc::mult(c1, c2) << endl;
	cout << Complex_calc::div(c1, c2) << endl;

	cout << c1 + c2 << endl;
	cout << c1 - c2 << endl;
	cout << c1 * c2 << endl;
	cout << c1 / c2 << endl;

}
