#pragma once
class Rational
{
private:
	double a, b;
public:
	double Geta() const { return a; }
	double Getb() const { return b; }
	void Seta(double value) { a = value; }
	void Setb(double value) { b = value; }

		friend Rational add(Rational & l, Rational & r);

		void Init(double a, double b);
		void Read();
		void Display();
		double getA();
		double getB();
		void setA(double value);
		void setB(double value);

		double value();
		double div(Rational& l, Rational& r);
		bool equal(Rational& l, Rational& r);
		bool great(Rational& l, Rational& r);
		bool less(Rational& l, Rational& r);

};

