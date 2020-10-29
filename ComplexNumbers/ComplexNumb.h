#pragma once
#include<iostream>
#include<string>
using namespace std;

class Real {
protected:
	double re;
public:
	Real(double re = 0): re(re) {}

	virtual void print() {
		cout << "x = "<< re << endl;
	}
};

class Complex: public Real {
private: 
	double im;
public:
	Complex(double re = 0, double im = 0);

	double getReal();
	double getImage();

	void setReal(double re);
	void setImage(double im);

	string toString();

	//перегрузка оператора+
	const Complex operator+(const Complex& cl) const;
	const Complex operator+(const double num) const;
	friend const Complex operator+(const double num, const Complex& cl);
	
	const Complex& operator++();
	const Complex& operator--();

	//перегрузка оператора == и !=
	bool operator==(const Complex& cl) const;
	bool operator!=(const Complex& cl) const;

	//перегрузка ввода/вывода
	friend ostream& operator<<(ostream& out, Complex c);
	friend istream& operator>>(istream& in, Complex& c);
	
	//методы
	friend double arg(Complex cl);
	friend double abs(Complex cl);
	friend Complex sqrt(Complex& cl);

};