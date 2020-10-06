#include <iostream>
#include "Times.h"

void main() {
	Time s1;
	s1.getHour();
	s1.getMin();
	s1.getSec();
	s1.setMin(59);
	s1.setHour(23);
	s1.setSec(59);
	s1.nextSecond();
	s1.print();

}