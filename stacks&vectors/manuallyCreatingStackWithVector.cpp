#ifndef INTSTACK_H
#define INTSTACK_H
#include<iostream>

using namespace std;

class IntStack {
  public:
    int* stackArray; // Pointer to the stack array
    int stackSize; // The stack size
    int top; // Indicates the top of the stack

    // Constructor for Empty Stack
    IntStack(int size) {
    stackArray = new int[size];
    stackSize = size;
    top = -1;
    }
 
    IntStack(const IntStack & obj) // Constructor {

    if (stackSize > 0) // Create the stack array.
      stackArray = new int[stackSize]; // Dynamically creating the stackArray
    else
      stackArray = nullptr;
      stackSize = stackSize; // Copy the stackSize attribute. Needs obj?

    for (int count = 0; count < stackSize; count++) // Copy the stack contents.
      stackArray[count] = obj.stackArray[count];
      top = obj.top; // Set the top of the stack.
    }

/*
IntStack Methods

void push(int num) {
  if (top == stackSize - 1) {
    cout << "The stack is full.\n";
  }
  else {
    top++;
    stackArray[top] = num;
  }
}

void pop(int& num) {
  if(top == -1) {
    cout << "The stack is empty.\n";
  }
  else {
    num = stackArray[top];
    top--;
  }
  } 
};
#endif


*/