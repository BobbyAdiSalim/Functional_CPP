#include <iostream>

int main() {
  int x = 0;
  auto print_x = [](){std::cout << x << '\n';}; // Doesn't compile.
}