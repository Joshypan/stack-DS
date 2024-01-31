//
//  dynStack.h
//
//  Header file for DynStack class, a dynamic implementation for stacks
//
//  Created by Joshua Panchana Cedeño on 1/28/24.
//

#ifndef dynStack_h
#define dynStack_h

class DynStack {
	private:
		//structure for stackNode
		struct StackNode
		{
			std::string value;	//value in the node
			StackNode *next; //pointer to the next node
		};
		StackNode *top; //pointer to the stack top

	public:
		DynStack()
		{	top = nullptr;	}
		~DynStack();
		void push(std::string);
		void pop();
		bool isEmpty() const;
		void displayStack() const;
};

DynStack::~DynStack() {
	StackNode *nodePtr = nullptr, *nextNode = nullptr;
	//position nodePtr at the top of the stack
	nodePtr = top;
	//traverse the list deleting each node
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

void DynStack::push(std::string initials) {
	StackNode *newNode = nullptr; //Pointer to a new Node

	//Allocate a new node and store num there
	newNode = new StackNode;
	newNode->value = initials;

	//if there are no nodes in the list, make newNode the first node
	if (isEmpty()) {
		std::cout << "Created a list -> inserting " << initials << "\n";
		
		top = newNode;
		newNode -> next = nullptr;
	} else {//otherwise, insert newnode before top
		//std::cout << "before insertion, value of top is " << top->value << "\n";
		std::cout << "inserting " << initials << "\n";
		newNode -> next = top;
		top = newNode;
		//std::cout << "after insertion, value of top is " << top->value << "\n";
	}
}

void DynStack::pop() {
	if(isEmpty()) {
		std::cout << "stack is empty, nothing to pop out\n";
	} else {
	    //pop value off top of stack
		StackNode *temp = top;
		top = top->next;
		std::cout << "Popped " << temp->value << "\n";
		delete temp;
	}
}

bool DynStack::isEmpty() const {
	bool status;
	if(!top) {
		status = true;
	} else {
		status = false;
	}
	return status;
}

void DynStack::displayStack() const {
	StackNode *temp;
	temp = top;
	if(isEmpty()) {
		std::cout << "IT'S EMPTY\n";
	} else {
		std::cout << "\nDynStack contains: \n";
		 while (temp != nullptr) {
			// Replace period with space
			std::string displayValue = temp->value;
			std::size_t found = displayValue.find(".");
			if (found != std::string::npos)
			{
				displayValue = displayValue.replace(found, 1, " ");
			}
			std::cout << displayValue << "\n";
			temp = temp->next;
		}
	}
}

#endif /* dynStack_h */
