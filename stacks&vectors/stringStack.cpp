// String stack – loading with vector example

#include <stack>
#include <iostream>


int main() {
  stack<string, vector<string> > theStack;
  vector<string> names{ "Moe", "Larry", "Curly", "Shemp", "Joe" };

  for (int i = 0; i < names.size(); i++) {// fill the stack with #s
    theStack.push(names[i]);
  }

  string x = theStack.top();
  cout << "\n\t the stack = “<< x";

  for (int i = theStack.size() - 1; i >= 0; i--) {
    cout << "\n theStack[" << i << "] = " << theStack.top();
    theStack.pop();
  }
}