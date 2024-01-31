//
//  stackArray.h
//
//  Header file for stackArray class, an array implementation for stacks
//
//  Created by Joshua Panchana Cedeño on 1/28/24.
//

#ifndef stackArray_h
#define stackArray_h

const int arrSize = 10;

class StackArray {
	private:
		std::string arr[arrSize];
		int top;
	
	public:
		StackArray() {
			top = -1; // empty stack
		}
		
		void push(std::string initials) {
			if (top < arrSize - 1) {
			++top;
			arr[top] = initials;
			std::cout << "Pushed: " << initials << "\n";
			} else {
				std::cout << "FULL STACK ARRAY!" << "\n";
			}
		}
		
		void pop() {
			if (top >= 0) {
				std::cout << "Popped: " << arr[top] << "\n";
				top--;
			} else {
				std::cout << "EMPTY STACK ARRAY" << "\n";
			}
		}
		
		void status() {
			std::cout << "StackArray contains: \n";
			int temp = top;
			while(temp != -1) {
				std::cout << arr[temp] << "\n";
				temp--;
			}
		}
		
		void isFull() {
			if (top == arrSize - 1) {
				std::cout << "STACK ARRAY IS FULL\n";
			} else {
				std::cout << "Stack array is not full\n";
			}
		}
};

#endif /* stackArray_h */
