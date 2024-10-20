//Creating a stack with Class – Main( ) example

#include "IntStack.h"

using namespace std;

int main() {
  int catchVar; // To hold values popped off the stack
  
  // Define a stack object to hold 6 values.
  IntStack stack(6);
  cout << "Pushing 33\n"; // manual push(#)
  stack.push(33);

  for (int i = 1; i <= 5; i++) {
    cout << "Pushing "<<i*5<<"\n";
    stack.push(i*5);
  }
  
  cout << "\n\nPop values and display \n";

  for (int j = stack.stackSize-1; j >= 0; j--) {
    stack.pop(catchVar); // catching and printing pop values
    cout << catchVar << endl;
  }
}
