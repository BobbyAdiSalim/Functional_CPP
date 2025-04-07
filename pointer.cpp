#include <iostream>

void increment(int *x) { (*x)++; }

int main() {
  int x = 0;
  increment(&x);
  std::cout << x << '\n';  // printing to stdout in C++; prints 1
  increment(&x);
  std::cout << x << '\n';  // prints 2
}