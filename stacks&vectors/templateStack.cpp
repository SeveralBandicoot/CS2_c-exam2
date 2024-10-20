// /TemplateStack.cpp main example

#include "TemplateStack.h"
using namespace std;

int main() {
  char c = 'd';
  char catchVar;// To hold values popped off the stack

  // Define a stack object to hold 6 values.
  TemplateStack<char> stack;
  cout << "Pushing 10\n";
  stack.push('a');

  for (int i = 1; i <= 5; i++) {
    cout << "Pushing "<<i<<"\n";
    stack.push(c);
    c++;
  }

  cout << "\n\nPop values and display \n";

  for (int j = 5; j >= 0; j--) {
    stack.pop(catchVar);
    cout << catchVar << endl;
  }
