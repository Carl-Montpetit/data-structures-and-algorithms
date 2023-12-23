#include "array.hpp"
#include "linked-list.hpp"
#include <iostream>

int main() {
  /**
   * manage linked-list
   */
  // std::cout << "==============================================" << '\n';
  // LinkedList linked_list;
  // linked_list.push_node(1);
  // linked_list.push_node(2);
  // linked_list.push_node(3);
  // linked_list.push_node(4);
  // linked_list.print_all_elements();
  // std::cout << "==============================================" << '\n';
  /**
   * manage array_1
   */
  Array array_1(30);
  array_1.fill_array_random_int();
  std::cout << "==============================================" << '\n';
  array_1.print_capacity();
  array_1.print_number_of_elements();
  std::cout << "==============================================" << '\n';
  array_1.push_element(2);
  array_1.print_all_elements();
  std::cout << "==============================================" << '\n';
  array_1.print_capacity();
  array_1.print_number_of_elements();
  std::cout << "==============================================" << '\n';
  array_1.bubble_sort();
  array_1.insertion_sort();
  array_1.print_all_elements();
  std::cout << "==============================================" << '\n';
  // int found_position = array_1.linear_search(1);
  // if (found_position > 0) {
  //   std::cout << "FOUND AT: " << found_position << '\n';
  // } else {
  //   std::cout << "NOT FOUND" << '\n';
  // }
  // std::cout << "==============================================" << '\n';
  // int found_position = array_1.binary_search(150);
  //
  // if (found_position > 0)
  //   std::cout << "FOUND AT: " << found_position << '\n';
  // else
  //   std::cout << "NOT FOUND" << '\n';

  return 0;
}
