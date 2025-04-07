#include <iostream>

int main() {
  int x = 0;
  auto counter = [&](){
    std::cout << ++x << '\n';
  };
  for (int i = 0; i < 10; i++) counter();
}