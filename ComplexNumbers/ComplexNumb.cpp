#include "ComplexNumb.h"
#include <cmath>

Complex::Complex(double re, double im)
{
	this->re = re;
	//(*this).re = re;
	this->im = im;
}

//сеттеры/геттеры
double Complex::getReal() {
	return re;
}

double Complex::getImage() {
	return im;
}

void Complex::setReal(double re)
{
	this->re = re;
}

void Complex::setImage(double im)
{
	this->im = im;
}


string Complex::toString() {
	string result = "";

	// x + iy, x, iy, -iy, x - iy

	result = to_string(re) + (im < 0 ? " - " : " + ") + "i * " + to_string(abs(im));
	return result;
}

//сравнение
bool Complex::operator==(const Complex& rhs) const
{
	return re == rhs.re && im == rhs.im;
}

bool Complex::operator!=(const Complex& rhs) const
{
	return re != rhs.re || im != rhs.im;
}

//перегрузка оператора+
const Complex Complex::operator+(const Complex& rhs) const
{
	return Complex(this->re + rhs.re, this->im + rhs.im);
}

const Complex Complex::operator+(const double rhs) const
{
	return Complex(re + rhs, im);
}

const Complex operator+(const double lhs, const Complex& rhs)
{
	return Complex(lhs + rhs.re, rhs.im);
}


const Complex& Complex::operator++()
{
	++re;
	return *this;
}

const Complex& Complex::operator--()
{
	--re;
	return *this;
}

//оперторы ввода/вывода
ostream& operator<<(ostream& out, Complex c)
{
	return out << c.toString();
}

istream& operator>>(istream& in, Complex& c)
{
	cout << "Enter real and image: ";
	in >> c.re >> c.im;
	return in;
}

//дружественные ф-ции
double arg(Complex cl) {
	return acos(cl.re / abs(cl));
}

double abs(Complex cl) {
	return sqrt(pow(cl.re, 2) + pow(cl.im, 2));
}

Complex sqrt(Complex& cl) {
	return Complex(sqrt(abs(cl)) * cos(arg(cl) / 2), sqrt(abs(cl)) * sin(arg(cl) / 2));
}