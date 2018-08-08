#include <iostream>
#include "stack.h"

using namespace std;

stack::stack() {
  arr = new int[INT_MAX];
  top = 0;
  capacity = INT_MAX;
}

stack::stack(int size) {
  arr = new int[size];
  top = 0;
  capacity = size;
}

void stack::push(int num) {
  if(isFull()) {
    cout << "The stack is full. It cannot add any more elements." << endl;
    exit(EXIT_FAILURE);
  }
  else {
    arr[++top] = num;
  }
}

int stack::pop() {
  if(isEmpty()) {
    cout << "The stack is empty. There are no elements to pop." << endl;
    exit(EXIT_FAILURE);
  }
  else {
    return arr[top--];
  }
}

int stack::peek() {
  return arr[top];
}

int stack::size() {
  return top + 1;
}

bool stack::isFull() {
  if(top + 1 == capacity)
    return true;
  else
    return false;
}

bool stack::isEmpty() {
  if(top == 0)
    return true;
  else
    return false;
}
