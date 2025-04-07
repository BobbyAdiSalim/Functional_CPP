#include <iostream>

int main() {
  auto adder = [](int x) { return [=](int y) { return x + y; }; };
  auto add_by_5 = adder(5);
  auto add_by_3 = adder(3);
  std::cout << add_by_5(3) << '\n'; // prints 8
  std::cout << add_by_3(3) << '\n'; // prints 6
}