#pragma once
#include<iostream>
#include<string>
using namespace std;

class Complex {
private: 
	double re;
	double im;

public:
	Complex(double re = 0, double im = 0);

	double getReal();
	double getImage();

	void setReal(double re);
	void setImage(double im);

	string toString();

	//���������� ���������+
	const Complex operator+(const Complex& cl) const;
	const Complex operator+(const double num) const;
	friend const Complex& operator+(const double num, const Complex& cl);
	const Complex& operator++();

	//���������� ��������� == � !=
	bool operator==(const Complex& cl) const;
	bool operator!=(const Complex& cl) const;

	//���������� �����/������
	friend ostream& operator<<(ostream& out, Complex& c);
	friend istream& operator>>(istream& in, Complex& c);
	
	//������
	friend double arg(Complex cl);
	friend double abs(Complex cl);
	friend double sqrt(Complex cl);

};