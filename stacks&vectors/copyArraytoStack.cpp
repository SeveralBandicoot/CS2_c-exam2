// Copy Array to Stack and print values example

#include<stack>
#include <iostream>

using namespace std;
int main() {
  stack<int> theStack;
  int value[10]{2,5,7,3,4,9,8,1,6};
  for (int i = 0; i < 10; i++) { // fill the stack with #s
    theStack.push(value[i]);
  }
  cout << "\n\n";
  for (int i = theStack.size()-1; i >= 0; i--) { // note the stack appears baclwards - reverse unloading
    cout << "\n theStack[" << i << "] = " << theStack.top();
    theStack.pop();
  }
}
