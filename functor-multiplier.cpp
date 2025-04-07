#include <iostream>

struct mult_by_x {
  int x;
  // Constructor; x(val) is equivalent to x = val
  mult_by_x(int value) : x(value) {}
  int operator()(int arg) { return x * arg; }
};

int main() {
  mult_by_x mult_by_3(3);
  std::cout << mult_by_3(5) << '\n';  // prints 15
}