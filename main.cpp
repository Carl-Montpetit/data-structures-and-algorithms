#include "array.hpp"
#include <iostream>

int main() {
  // create new array in the heap of length x with smart pointer
  std::unique_ptr<Array> array_1 = std::make_unique<Array>(4);

  /**
   * manage array_1
   */
  array_1->fill_array_random_int();
  std::cout << "==============================================" << '\n';
  array_1->print_capacity();
  array_1->print_number_of_elements();
  std::cout << "==============================================" << '\n';
  array_1->print_all_elements();
  array_1->push_element(2);
  std::cout << "==============================================" << '\n';
  array_1->print_capacity();
  array_1->print_number_of_elements();
  std::cout << "==============================================" << '\n';
  array_1->bubble_sort();
  array_1->print_all_elements();
  std::cout << "==============================================" << '\n';
  // int found_position = array_1->linear_search(1);
  // if (found_position > 0) {
  //   std::cout << "FOUND AT: " << found_position << '\n';
  // } else {
  //   std::cout << "NOT FOUND" << '\n';
  // }
  // std::cout << "==============================================" << '\n';
  // int found_position = array_1->binary_search(150);
  //
  // if (found_position > 0)
  //   std::cout << "FOUND AT: " << found_position << '\n';
  // else
  //   std::cout << "NOT FOUND" << '\n';

  return 0;
}
