#include "array.hpp"
#include "linked-list.hpp"
#include <iostream>

int main() {
  /**
   * manage linked-list
   */
  std::cout << "==============================================" << '\n';
  LinkedList linked_list;
  linked_list.push_node(1);
  linked_list.push_node(2);
  linked_list.push_node(3);
  linked_list.push_node(4);
  linked_list.push_node(5);
  linked_list.push_node(6);
  linked_list.push_node(7);
  linked_list.push_node(8);
  linked_list.print_all_nodes_content();
  std::cout << "==============================================" << '\n';
  linked_list.set_content_at_position(20, 3);
  linked_list.print_all_nodes_content();
  /**
   * manage array
   */
  // {
  //   Array array(30);
  //   array.fill_array_random_int();
  //   std::cout << "==============================================" << '\n';
  //   array.print_capacity();
  //   array.print_number_of_elements();
  //   std::cout << "==============================================" << '\n';
  //   array.push_element(2);
  //   array.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  //   array.print_capacity();
  //   array.print_number_of_elements();
  //   std::cout << "==============================================" << '\n';
  //   array.bubble_sort();
  //   array.insertion_sort();
  //   array.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  // }
  // int found_position = array.linear_search(1);
  // if (found_position > 0) {
  //   std::cout << "FOUND AT: " << found_position << '\n';
  // } else {
  //   std::cout << "NOT FOUND" << '\n';
  // }
  // std::cout << "==============================================" << '\n';
  // int found_position = array.binary_search(150);
  //
  // if (found_position > 0)
  //   std::cout << "FOUND AT: " << found_position << '\n';
  // else
  //   std::cout << "NOT FOUND" << '\n';

  return 0;
}
