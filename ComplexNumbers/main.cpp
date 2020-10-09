#include <iostream>
#include "ComplexNumb.h"
using namespace std;

int main()
{
	Complex c1(12, 42);
	Complex c2(23, -100);

	cout << c1.toString() << endl;



	Complex c3 = c1.operator+(c2);
	cout << c3.toString() << endl;
	c3 = c1 + c2;
	cout << c3.toString() << endl;
	Complex c4 = c3 + 3;
	c4 = 123 + c3;
	cout << c4 << endl;
	cout << (c3 == c3) << endl;
	cin >> c4;
	cout << "entered complex = " << c4 << endl;
	cout << "Argument = " << arg(c4) << endl;
	cout << "Abs = " << abs(c4) << endl;
	cout << "Sqrt = " << sqrt(c4) << endl;
	cout << "(c4 != c3) = " << (c4 != c3) << endl;
}