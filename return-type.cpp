#include <iostream>

int main() {
  bool b = true;
  auto returns_int = [&]() -> int {
    if (b) return b;
    return 4;
  };
  std::cout << returns_int() << '\n'; // prints 1
  b = false;
  std::cout << returns_int() << '\n'; // prints 4
}