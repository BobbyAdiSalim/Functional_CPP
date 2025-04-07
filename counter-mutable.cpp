#include <iostream>

int main() {
  int x = 0;
  auto counter = [=]() mutable { std::cout << ++x << '\n'; };
  counter(); // prints 1
  counter(); // prints 2
  std::cout << x << '\n'; // prints 0
}