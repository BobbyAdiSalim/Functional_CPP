#include <iostream>

int main() {
  void (*hello)() = []() { std::cout << "hello\n"; };
  hello();  // prints "hello\n"
}