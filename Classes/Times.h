#pragma once
class Time {
private:

	int hour;
	int min;
	int sec;

public:

	Time();

	void getHour();

	void getMin();

	void getSec();

	void setHour(int numb);

	void setMin(int numb);

	void setSec(int numb);

	void print();

	void setTime(int hour_, int min_, int sec_);

	void nextSecond();
};