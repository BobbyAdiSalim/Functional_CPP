#include <iostream>

int main() {
  int x = 3;
  auto mult_by_3 = [x](int arg) { return x * arg; };
  std::cout << mult_by_3(5) << '\n';  // prints 15
}