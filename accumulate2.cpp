#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> nums = {1, 5, 2, 9};
  // calculates ((((6 - 1) - 5) - 2) - 9) = -11
  int sub = std::accumulate(nums.begin(), nums.end(), 6,
                            [](int x, int y) { return x - y; });
  std::cout << "sub = " << sub << '\n';
}