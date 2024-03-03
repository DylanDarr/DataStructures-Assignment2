#pragma once
#include <string>
#include <iostream>

using namespace std;

//Maybe make string data into a template struct, however this requires everything to be template functions
struct Node {

	string data;
	Node* nextptr;
};

class LinkedList {

protected:
	Node* headptr;
	Node* tailptr;
	int numItems;

public:
	
	//Constructor
	LinkedList();
	
	//Add node to front of the list
	void push_front(string);

	//Add node to back of the list
	void push_back(string);

	//Remove node from front of the list
	void pop_front();

	//Remove node from back of the list
	void pop_back();

	//Return node at the front of the list
	Node* front();

	//Return node at the back of the list
	Node* back();

	//Return true if the list is empty (head and tail are nullptr and numItems = 0)
	bool isEmpty();

	//Insert item at the specified index
	void insert(int index, string item);

	//Remove item at the specified index
	bool remove(int index);

	//Return index of specified item in list (return -1 if not present in the list)
	int find(string item);

	//Displays the list to the console
	void display();

};