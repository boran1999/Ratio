#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	Rational* a = new Rational(2,3);

	cout << "a =" << a << " b = " << b << " a + b = " << a + b << endl;

	cout << "a(" << a << ") *= b(" << b << ")" << endl;
	a *= b;

	cout << "a =" << a << " b = " << b << " a - b = " << a - b << endl;
	Rational c = 3;

	cout << "b = " << b << " c = " << c << " b/c = " << b / c << endl;

	system("pause");
	return 0;
}
