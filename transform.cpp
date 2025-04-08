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
  std::vector<int> doublenums(nums.size());  // allocate size = nums1.size()
  // doubles every element of nums and store in doublenums
  std::transform(nums.begin(), nums.end(), doublenums.begin(),
                 [](int x) { return 2 * x; });
  std::cout << "elements of doublenums: \n";
  iterate(doublenums.begin(), doublenums.end());

  std::vector<int> triplenums(nums.size());
  // add elements of nums and doublenums by index, store in triplenums
  std::transform(nums.begin(), nums.end(), doublenums.begin(),
                 triplenums.begin(), [](int x, int y) { return x + y; });
  std::cout << "elements of triplenums: \n";
  iterate(triplenums.begin(), triplenums.end());
}