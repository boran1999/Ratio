#include <iostream>
#include "Rational.h"

using namespace std;

istream& operator>>(istream& in, Rational& r) 
{
	in >> r.numer >> r.denom;
	return in;
}

ostream& operator<<(ostream& out, const Rational& r) 
{
	out << r.numer << "/" << r.denom;
	return out;
}


int main()
{

	Rational a(4,3), b(5), c(3), d;
	d=b*b-a*c*4;
	d=d.sqrtr();

	system("pause");
	return 0;
}
