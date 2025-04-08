#include <deque>  // double-ended queue
#include <iostream>
#include <set>
#include <vector>

// similar to a generic function in Java
template <typename Iterator>
void iterate(Iterator begin, Iterator end) {
  for (auto it = begin; it != end; it++) {
    std::cout << *it << '\n';
  }
}

int main() {
  std::vector<int> num_vector = {1, 2, 3};
  std::deque<int> num_deque = {4, 5, 6};
  std::set<int> num_set = {7, 8, 9};
  iterate(num_vector.begin(), num_vector.end());
  iterate(num_deque.begin(), num_deque.end());
  iterate(num_set.begin(), num_set.end());
}