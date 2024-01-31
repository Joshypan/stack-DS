//
//  main.cpp
//
//	Displays the called functions of a Dynamic Stack and Stack Array and the status
//
//  Created by Joshua Panchana Cedeño on 1/28/24.
//

#include <iostream>
#include "stackArray.hpp"
#include "dynStack.hpp"

int main() {

	// Array Stack
	StackArray stackArray;
	
	stackArray.push("AB");
	stackArray.push("CD");
	stackArray.push("EF");
	stackArray.push("GH");
	stackArray.push("IJ");
	
	stackArray.pop();
	
	stackArray.status();
	std::cout << "\n";
	
	// Dynamic Stack w/ pointers
	DynStack dynStack;
	
	dynStack.push("AB");
	dynStack.push("CD");
	dynStack.push("EF");
	dynStack.push("GH");
	dynStack.push("IJ");
	dynStack.push("K ");
	dynStack.push(" N");
	dynStack.push("O.");
	dynStack.push(".Q");
	
	dynStack.pop();
	
	dynStack.displayStack();
}
