#include "Rational.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void Rational::Display()
{
	cout << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
}
void Rational::Init(double A, double B)
{
	a = A;
	b = B;
}
void Rational::Read()
{
	double A, B;
	cout << "Input complex value:" << endl;
	cout << " a = "; cin >> A;
	cout << " b = "; cin >> B;
	Init(A, B);
}
double Rational::getA() 
{
	return a;
}
double Rational::getB() 
{
	return b;
}
void Rational::setA(double value)
{
	a = value;
}
void Rational::setB(double value)
{
	b = value;
}
double Rational::value()
{
	return 1. * a / b;
}

double Rational::div(Rational& l, Rational& r)
{
	double tmp = (l.a * r.b)/(r.a * l.b);
	return tmp;
}

bool Rational::equal(Rational& l, Rational& r)
{
	
	if (l.a == r.a && l.b == r.b)
		return true;
	else
		return false;
}

bool Rational::great(Rational& l, Rational& r)
{

	if ((l.a * r.b) > (l.b * r.a))
		return true;
	else
		return false;

}
bool Rational::less(Rational& l, Rational& r)
{
	
	if ((l.a * r.b) < (l.b * r.a))
		return true;
	else
		return false;

}
