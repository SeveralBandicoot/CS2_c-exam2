/*

OUTPUT:

theStack top = 9

theStack top = 5

theStack top = 3

theStack top = 4

the Stack top = 7

theStack top = 2





*/

#include <iostream>
#include<stack>// needed for STL Stack

using namespace std;

int main() {
  stack<int> stk;
  stk.push(9);
  cout << "\n\ntheStack top = " << stk.top();
  
  stk.push(7);
  stk.push(5);

  cout << "\n\ntheStack top = " << stk.top();
  
  stk.push(3);
  
  cout << "\n\ntheStack top = " << stk.top();
  cout << "\n\ntheStack size = " << stk.size();
  
  stk.pop();
  stk.pop();
  cout << "\n\ntheStack top = " << stk.top();
  cout << "\n\ntheStack size = " << stk.size();
}
