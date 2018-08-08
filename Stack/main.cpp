#include <iostream>
#include "stack.h"
#include "stack.cpp"

using namespace std;

int main() {
  stack s(10);

  s.push(5);
  s.push(10);
  s.push(15);
  s.push(20);

  cout << "The top element is: " << s.peek() << endl;

  cout << "You just popped: " << s.pop() << endl;

  cout << "The top element is: " << s.peek() << endl;

  cout << "You just popped: " << s.pop() << endl;

  cout << "The size of the stack is: " << s.size() << endl;

  cout << "You just popped: " << s.pop() << endl;
  cout << "You just popped: " << s.pop() << endl;
  cout << "You just popped: " << s.pop() << endl;
}
