#include<string>
#include<iostream>
#include"Times.h"
using namespace std;

Time::Time() {
	hour = 0;
	min = 0;
	sec = 0;
}

//get
void Time::getHour() {
	cout <<"Hour : "<< hour << endl;
}

void Time::getMin() {
	cout << "Min : " << min << endl;
}

void Time::getSec() {
	cout << "Sec : " << sec << endl;
}

//set
void Time::setHour(int numb) {
	numb %= 24;
	hour = numb;
	print();
}

void Time::setMin(int numb) {
	numb %= 60;
	min = numb;
	print();
}

void Time::setSec(int numb) {
	numb %= 60;
	sec = numb;
	print();
}

//hh.mm.ss
void Time::print() {
	cout <<"Time : "<< hour << (min < 10 ? ":0" : ":") << min << (sec < 10 ? ":0" : ":") << sec << endl;
}


void Time::setTime(int hour_, int min_, int sec_) {
	hour = hour_;
	min = min_;
	sec = sec_;
}

void Time::nextSecond() {
	cout << "Before : ";
	print();
	++sec;
	if (sec == 60) {
		sec = 0;
		++min;
	}
	if (min == 60) {
		min = 0;
		++hour;
	}
	if (hour == 24)
		hour = 0;
	cout << "After : ";
	print();
}