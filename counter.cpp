#include <iostream>

int main() {
  int x = 0;
  auto counter = [&]() { std::cout << ++x << '\n'; };
  // the auto type infers the type of the lambda for us! More on this later.
  for (int i = 0; i < 3; i++) counter();
}