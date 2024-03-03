#include "stack.h"


bool Stack::isEmpty() {
	
	if (stack.size() == 0) {
		return true;
	}

	return false;
}


void Stack::add(int item) {

	stack.insert(stack.begin(), item);
}


void Stack::remove() {

	stack.erase(stack.begin());
}


int Stack::top() {

	return stack.front();
}


double Stack::avg() {

	int sum = 0;

	for (auto i : stack) {
		sum += i;
	}

	double size = stack.size();
	return sum / size;
}


void Stack::display() {

	for (auto i : stack) {
		cout << i << ", ";
	}

	cout << endl << endl;
}
