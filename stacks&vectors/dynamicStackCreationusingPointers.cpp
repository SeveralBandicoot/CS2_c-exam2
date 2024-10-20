//Dynamic Stack creation – Using Pointers example

#ifndef DynISTACK_H
#define DynISTACK_H
#include<iostream>

using namespace std;

class DynIStack {
  public:
  
  int value;
  DynIStack* next;
  DynIStack* top;
  DynIStack(int size) {
  top = nullptr;
  }

  ~DynIStack() // Destroy Dynamic creations
  {
  DynIStack * nodePtr = nullptr, *nextNode = nullptr;

  // Position nodePtr at the top of the stack.
  nodePtr = top;

  // Traverse the list deleting each node.
  while (nodePtr != nullptr) {
    nextNode = nodePtr-> next;
  delete nodePtr;
    nodePtr = nextNode;
  }
}

/*

void push(int num) {
  DynIStack * newNode = nullptr; // Pointer to a new node
newNode = new DynIStack(9);
  newNode-> value = num;
  if (!top) {
    cout << "The stack is empty.\n";
    top = newNode;
    newNode-> next = nullptr;
  }
  else // pop value off top of stack {
    newNode-> next = top;
    top = newNode;
  }
}
void pop(int& num) {
  DynIStack* temp = nullptr; // Pointer to a new node
  if(!top) {
    cout << "The stack is empty.\n";
  }
  else {
    num = top->value;
    temp = top->next;
    delete top;
    top = temp;
  } 
} 
};
#endif


*/

