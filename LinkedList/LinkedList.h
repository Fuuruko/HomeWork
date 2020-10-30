#pragma once
#include<iostream>
using namespace std;

struct Node
{
	double x = NULL;
	Node* next = nullptr;
};
enum class pushed { begin, end };

class LinkedList
{
private:
	Node* first_Node = nullptr;
	Node* last_Node = nullptr;
	int num = 0;
public:
	LinkedList(){}

	LinkedList(double x) {
		this->push(x);
	}

	void push(double x,pushed bnEd = pushed::end) {
		Node* el = new Node;
		el->x = x;

		if (this->empty()) {
			last_Node = el;
			first_Node = el;
			num++;
			return;
		}
		num++;
		if (bnEd == pushed::begin) {
			el->next = first_Node;
			first_Node = el;
		}
		else {
			last_Node->next = el;
			last_Node = el;
		}
	}
	
	double pop(pushed ps = pushed::end) {
		if (ps == pushed::begin) {
			double x = first_Node->x;
			Node* first = first_Node;
			first_Node = first_Node->next;
			delete first;
			--num;
			return x;
		}
		else{
			int i = 2;
			Node* prepop = first_Node;
			while (i++ != num)
				prepop = prepop->next;
			Node* pop = prepop->next;
			prepop->next = pop->next;
			double x = pop->x;
			delete pop;
			last_Node = prepop;
			return x;
		}
	}

	double pop(int k) {
		if (k <= 0 or k > num)
			return NULL;
		if (k == 1)
			return this->pop(pushed::begin);
		if (k == num)
			return this->pop(pushed::end);
		int i = 2;
		Node* prepop = first_Node;
		while (i++ != k)
			prepop = prepop->next;
		Node* pop = prepop->next;
		prepop->next = pop->next;
		double x = pop->x;
		delete pop;
		if (k==num)
			last_Node = prepop;
		return x;
		
	}

	bool empty() const {
		if (this->num == 0)
			return true;
		return false;
	}

	friend ostream& operator<<(ostream& os, const LinkedList& ll) {
		if (ll.empty()) {
			cout << "LinkedList is empty" << endl;
			return os;
		}
		else {
			Node* el = ll.first_Node;
			while (el) {
				os << el->x << ' ';
				el = el->next;
			}
			return os;
		}
	}
};


