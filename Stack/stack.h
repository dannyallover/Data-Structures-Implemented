#ifndef stack_H
#define stack_H

class stack {
  int *arr;
  int top;
  int capacity;

public:
  stack(); // default constructor
  stack(int size); // constuctor

  void push(int num);
  int pop();
  int peek();

  int size();
  bool isEmpty();
  bool isFull();
};

#endif
