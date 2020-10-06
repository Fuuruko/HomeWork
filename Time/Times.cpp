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
void Time::setHour(int hour) {
	hour %= 24;
	this->hour = hour;
	print();
}

void Time::setMin(int min) {
	min %= 60;
	this->min = min;
	print();
}

void Time::setSec(int sec) {
	sec %= 60;
	this->sec = sec;
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