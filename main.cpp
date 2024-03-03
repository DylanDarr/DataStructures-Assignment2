#include "Linked List.h"
#include "stack.h"


int main(){

	//PART 1
	cout << "============= PART 1 =============" << endl << endl;

	LinkedList list = LinkedList();
	list.push_back("0");
	list.push_back("1");
	list.push_back("2");
	list.push_back("3");
	list.push_back("4");
	
	cout << "Beginning" << endl;
	list.display();
	
	//push front
	list.push_front("front");
	cout << "Push Front:" << endl;
	list.display();

	//push back
	list.push_back("back");
	cout << "Push Back:" << endl;
	list.display();

	//pop front
	list.pop_front();
	cout << "Pop Front:" << endl;
	list.display();

	//pop back
	list.pop_back();
	cout << "Pop Back:" << endl;
	list.display();

	//front
	cout << "Front: " << list.front()->data << endl << endl;

	//back
	cout << "Back: " << list.back()->data << endl << endl;

	//empty
	cout << "Empty (0 for false and 1 for true): " << list.isEmpty() << endl << endl;

	//insert
	list.insert(2, "hello");
	cout << "Insert ('hello' at index 2):" << endl;
	list.display();

	//remove
	list.remove(2);
	cout << "Remove (index 2):" << endl;
	list.display();
	
	//find
	cout << "Find ('3'): \nThe item 3 is at index: " << list.find("3") << endl << endl;

	cout << "End" << endl;
	list.display();



	//PART 2
	cout << "============= PART 2 =============" << endl << endl;

	Stack stack = Stack();

	stack.add(15);
	stack.add(22);
	stack.add(37);
	stack.add(46);
	stack.add(54);
	stack.add(68);

	cout << "Beginning: " << endl;
	stack.display();

	//insert / add
	stack.add(91);
	cout << "Insert/Add (91):" << endl;
	stack.display();

	//remove
	stack.remove();
	cout << "Remove:" << endl;
	stack.display();

	//empty
	cout << "Empty (0 for false and 1 for true): " << stack.isEmpty() << endl << endl;

	//top
	cout << "Check top: \nThe top int is: " << stack.top() << endl << endl;

	//average
	cout << "Average: " << stack.avg() << endl << endl;


}
