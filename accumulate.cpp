#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> nums = {1, 5, 2, 9};
  int sum = std::accumulate(nums.begin(), nums.end(), 0);
  int product = std::accumulate(nums.begin(), nums.end(), 1,
                                [](int x, int y) { return x * y; });
  std::cout << "sum = " << sum << '\n';
  std::cout << "product = " << product << '\n';
}