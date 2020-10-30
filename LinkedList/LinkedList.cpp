#include "LinkedList.h"
#include<iostream>

int main() {
	LinkedList ll;
	int n;
	cout << ll << endl;
	cout << "n = ";
	cin >> n;
	cout << "Write n numbers :";
	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		ll.push(x);
	}
	ll.push(5,pushed::begin);
	cout << "Push el to the beginning : " << ll << endl;
	ll.pop(1);
	cout <<"After delete first el : "<< ll<<endl;
	ll.pop(pushed::end);
	cout << "After delete last el : " << ll << endl;
	ll.pop(5);
	cout << "After delete 5 el : " << ll << endl;

}