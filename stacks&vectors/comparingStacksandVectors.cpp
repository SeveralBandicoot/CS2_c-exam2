// Comparing Stacks & Vectors example.

/*

OUTPUT:

theStack top = 7

theStack top = 3

vect front() = 8
vect.back() = 6

vect front() = 8
vect.back() = 2

theStack top = 7

vect front() = 8
vect.back() = 6
*/

stack<int> stk;
vector<int> vect{ 8 };
stk.push(9);
stk.push(7);
cout << "\n\ntheStack top = " << stk.top();
stk.push(5);
stk.push(3);
cout << "\n\ntheStack top = " << stk.top();

vect.push_back(6);
cout << "\n\nvect front() = " << vect.front();
cout << "\nvect.back() = " << vect.back();
vect.push_back(4);
vect.push_back(2);
cout << "\n\nvect front() = " << vect.front();
cout << "\nvect.back() = " << vect.back();

stk.pop();
stk.pop();

vect.pop_back();
vect.pop_back();

cout << "\n\ntheStack top = " << stk.top();
cout << "\n\nvect front() = " << vect.front();
cout << "\nvect.back() = " << vect.back();
