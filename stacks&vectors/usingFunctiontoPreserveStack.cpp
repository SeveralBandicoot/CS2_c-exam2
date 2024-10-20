// Using a Function to preserve the Stack example

/*

OUTPUT: 

theStack.top = 100
theStack.size = 10

10
100
90
80
70
60
50
40
30
20
10

10
100
90
80
70
60
50
40
30
20
10

*/


void display(stack<int>);
int main() {

  stack<int> theStack;

  for (int i = 1; i <= 10; i++) {// fill the stack with #s
    theStack.push(i * 10);
  }

  cout << "\n theStack.top = " << theStack.top();
  cout << "\n theStack.size = " << theStack.size();

  display(theStack);
 
  cout<<"\n\n";

  display(theStack);
  cout << endl;
  return 0;
}

/*REVERSE THE FOR LOOP 

void display(stack<int> q) {
  cout << "\n" << q.size();

  for(int i = q.size(); i >= 1; i--) {
    cout << "\n" << q.top();
    q.pop();
  }
}

*/