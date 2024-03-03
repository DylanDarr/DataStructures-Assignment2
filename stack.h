#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Stack {

private:
	vector<int> stack;

public:

	//Constructor
	Stack() {};

	//Return true if the stack is empty and false if the stack has something in it
	bool isEmpty();

	//Insert the given int onto the top of the stack
	void add(int item);

	//Remove the top int from the stack
	void remove();

	//Return the int on the top of the stack
	int top();

	//Return the average of all ints in the stack
	double avg();

	//Display the stack
	void display();
};