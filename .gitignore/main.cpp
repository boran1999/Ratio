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
	Rational  a(2,3), b(1,6);
	Rational c=3;
	int n, m;
	Rational  g(4,5), k(5,4), res(n,m);
	setlocale(LC_ALL,"Russian");

	cout << "a =" << a << " b = " << b << " a + b = " << a + b << endl;

	cout << "a(" << a << ") *= b(" << b << ")" <<" a*b= "<< a * b<<endl;

	cout << "a =" << a << " b = " << b << " a - b = " << a - b << endl;
	
	cout << "b = " << b << " c = " << c << " b/c = " << b / c << endl;

	cout<<endl;

	cout<<"введите результат: "<<g<<"+"<<k<<endl;
	cin>>n>>m;
	if(g+k==res)
		cout<<"вы молодец"<<endl;
	else
		cout<<"вы не правы! Правильный ответ- "<<g+k<<endl;

	system("pause");
	return 0;
}
