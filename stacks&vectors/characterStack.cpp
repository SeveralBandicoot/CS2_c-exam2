// Character Stack – casting ascii code example

#include <iostream>
#include<vector>
#include<stack>

using namespace std;

int main() {
  stack<char> theStack;
  vector<char> letters{ 'A','B','C','D','E','F','G','H','I' };

  for (int i = 0; i < 9; i++) {// fill the stack with #s
    theStack.push(letters[i]);
  }

  for (int i = theStack.size()-1; i >= 0; i--) {
    cout << "\n theStack[" << i << "] = " << theStack.top() << " and casting the ascii code = " << static_cast<int>(theStack.top());
    theStack.pop();
  }
  cout << endl;
  
  return 0;
}