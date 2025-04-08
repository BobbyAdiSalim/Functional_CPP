#include <algorithm>
#include <iostream>
#include <vector>

template <typename Iterator>
void iterate(Iterator begin, Iterator end) {
  for (auto it = begin; it != end; it++) {
    std::cout << *it << '\n';
  }
}

int main() {
  std::vector<int> nums = {1, 2, 3};
  std::for_each(nums.begin(), nums.end(), [](int &x) { x++; });
  std::cout << "elements of nums: \n";
  iterate(nums.begin(), nums.end());
}