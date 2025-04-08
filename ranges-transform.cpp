// compile using -std=c++20
#include <iostream>
#include <ranges>
#include <vector>

int main() {
  std::vector<int> nums = {1, 2, 3};
  auto mult2 =
      nums | std::ranges::views::transform([](int x) { return 2 * x; });
  for (auto i : mult2) std::cout << i << '\n';
}