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
  std::vector<int> num = {1, -4, 4, 7, -2};
  std::vector<int> positive(num.size());
  std::vector<int> even(num.size());
  auto end_positive = std::copy_if(num.begin(), num.end(), positive.begin(),
                                   [](int x) { return x > 0; });
  auto end_even = std::copy_if(num.begin(), num.end(), even.begin(),
                               [](int x) { return x % 2 == 0; });
  std::cout << "positive: \n";
  iterate(positive.begin(), end_positive);
  std::cout << "even: \n";
  iterate(even.begin(), end_even);
}