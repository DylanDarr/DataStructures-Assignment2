#include "Linked List.h"

LinkedList::LinkedList() {
	
	headptr = nullptr;
	tailptr = nullptr;
	numItems = 0;
}

void LinkedList::push_front(string& item) {

	//Create newNode with the data provided
	Node* newNode = new Node;
	newNode->data = item;
	newNode->nextptr = nullptr;
	
	//If headptr is null, this means the list is empty so this is the first and only node
	if (headptr == nullptr) {
		headptr = newNode;
		tailptr = newNode;
	}

	//Else add newNode to the front and make it the headptr
	else {
		newNode->nextptr = headptr;
		headptr = newNode;
	}
	numItems++;
}

void LinkedList::push_back(string& item) {

	//Create newNode with the data provided
	Node* newNode = new Node;
	newNode->data = item;
	newNode->nextptr = nullptr;

	//If headptr is null, this means the list is empty so this is the first and only node
	if (headptr == nullptr) {
		headptr = newNode;
		tailptr = newNode;
	}

	//Else add newNode to the back and make it the tailptr
	else {
		tailptr->nextptr = newNode;
		tailptr = newNode;
	}
	numItems++;
}


void LinkedList::pop_front() {

	//Make a new node that can be deleted without losing necessary data
	Node* delnode;

	//Set delnode to headptr then make headptr the next ptr
	delnode = headptr;
	headptr = headptr->nextptr;

	//Delete delnode, which is the old headptr
	delete delnode;
	delnode = nullptr;
	numItems--;
}


void LinkedList::pop_back() {

	//Make a new node that can be deleted without losing necessary data
	Node* delnode;
	Node* tempNode = headptr;

	//Iterate through the list to find the second to last node so we can make it the tailptr
	while (tempNode->nextptr->nextptr != nullptr) {
		tempNode = tempNode->nextptr;
	}
	
	delnode = tailptr;
	tailptr = tempNode;

	//Delete delnode, which is the old tailptr
	delete delnode;
	delnode = nullptr;
	numItems--;
}


Node* LinkedList::front() {

	return headptr;
}


Node* LinkedList::back() {

	return tailptr;
}


bool LinkedList::isEmpty() {

	if (numItems == 0) {return true;}
	return false;
}


void LinkedList::insert(int index, string& item) {

	Node* newNode = new Node;
	newNode->data = item;
	newNode->nextptr = nullptr;

	//If list is empty
	if (headptr == nullptr) {
		
		headptr = newNode;
		tailptr = newNode;
		numItems++;
	}

	else {

		//If we're trying to add the node to the front of the list
		if (index == 0) {

			newNode->nextptr = headptr;
			headptr = newNode;
			numItems++;
		}

		else {
			
			Node* tempNode = headptr;
			int counter = 1;

			//Finds the place in the list where we're trying to add our node
			while (tempNode->nextptr != nullptr ||
				counter == index-1) {
				tempNode = tempNode->nextptr;
				counter++;
			}

			//Adds node to list
			newNode->nextptr = tempNode->nextptr;
			tempNode->nextptr = newNode;

			//If the node is at the end of the list, make it the tailptr
			if (newNode->nextptr == nullptr) {
				tailptr = newNode;
			}
		}
	}
}


bool LinkedList::remove(int index) {


}


int LinkedList::find(string& item) {


}


