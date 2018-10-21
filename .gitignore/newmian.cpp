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
	setlocale(LC_ALL, "Russian");
	int n1, d1, n2, d2, n3, d3;
	cout << "Введите коэффициенты квадратного уравнения" << endl;
	cin >> n1 >> d1 >> n2 >> d2 >> n3 >> d3;
	Rational a(n1,d1),  b(n2,d2), c(n3,d3), d, zero, x1, x2;
	d = b * b - a * c * 4;

	if (d < zero)
	{
		cout << "Дискриминант меньше 0" << endl;
	}

	if (d == zero)
	{
		x1 = (b*-1) / (a * 2);
		cout << "x = " << x1 << endl;
	}

	
	if (d > zero) 
	{
		d.sqrtr();
		x1 = ((b*-1) + d) / (a * 2);
		x2 = ((b*-1) - d) / (a * 2);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	
	system("pause");
	return 0;
}
