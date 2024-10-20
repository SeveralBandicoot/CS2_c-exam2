#ifndef TemplateSTACK_H
#define TemplateSTACK_H
#include<iostream>

using namespace std;

template <typename T>
class TemplateStack {

public:
  T value;
  DynIStack* next;
  DynIStack* top;

  // Constructor for Empty Stack
  TemplateStack() {
    top = nullptr;
  }
  
  ~TemplateStack() { // Destroy Dynamic creations
  TemplateStack * nodePtr = nullptr, *nextNode = nullptr;

  // Position nodePtr at the top of the stack.
  nodePtr = top;

  // Traverse the list deleting each node.
  while (nodePtr != nullptr) {
    nextNode = nodePtr-> next;
    delete nodePtr;
    nodePtr = nextNode;
  }
}
  
