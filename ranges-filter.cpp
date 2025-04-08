// compile using -std=c++20
#include <iostream>
#include <ranges>
#include <vector>

int main() {
  std::vector<int> nums = {1, 2, 3, 4, 5};
  auto even =
      nums | std::ranges::views::filter([](int x) { return x % 2 == 0; });
  for (auto i : even) std::cout << i << '\n';
}