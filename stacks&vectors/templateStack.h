void push(T thing) {
  TemplateStack * newNode = nullptr; // Pointer to a new nod

  // Allocate a new node and store num there.
  newNode = new TemplateStack();
  newNode-> value = thing;.

  if (!top) {
    cout << "The stack is empty.\n";
    top = newNode;
    newNode-> next = nullptr;
  } else // pop value off top of stack 
  {
    newNode-> next = top;
    top = newNode;
  }
}

void pop(T& num) {
  TemplateStack* temp = nullptr; // Pointer to a new node

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
