#include <iostream>
#include <type_traits>

int main() {
  int x = 0;
  auto counter = [=]() mutable { std::cout << ++x << '\n'; };
  auto different_counter = [=]() mutable { std::cout << ++x << '\n'; };
  counter();  // prints 1
  auto counter1 = counter;
  auto counter2 = counter;
  counter1();  // prints 2
  counter1();  // prints 3
  counter2();  // prints 2
  counter2();  // prints 3

  // counter1 and counter2 are of the same class
  std::cout << "counter1 is the same type as counter2? "
            << std::is_same<decltype(counter1), decltype(counter2)>::value
            << '\n';

  // counter and different_counter are of different classes
  std::cout
      << "counter is the same type as different_counter? "
      << std::is_same<decltype(counter), decltype(different_counter)>::value
      << '\n';
  std::cout << "x = " << x << '\n';  // prints 'x = 0'
}