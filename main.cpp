#include "array.hpp"
#include "linked-list.hpp"
#include <iostream>

int main() {
  /**
   * manage linked-list
   */
  // {
  //   std::cout << "==============================================" << '\n';
  //   LinkedList<std::string> linked_list;
  //   linked_list.push_node("hi");
  //   linked_list.push_node("cat");
  //   linked_list.push_node("dog");
  //   linked_list.push_node("music");
  //   linked_list.push_node("amazing");
  //   linked_list.push_node("guitar");
  //   linked_list.push_node("note");
  //   linked_list.push_node("zelda");
  //   linked_list.print_all_nodes_content();
  //   std::cout << "==============================================" << '\n';
  //   linked_list.set_content_at_position("home", 0);
  //   linked_list.swap_two_nodes_elements(3, 5);
  //   linked_list.linear_search("note") >= 0 ? std::cout << "FOUND" << '\n'
  //                                          : std::cout << "NOT FOUND" <<
  //                                          '\n';
  //   std::cout << linked_list.get_number_of_nodes() << '\n';
  //   std::cout << linked_list.get_content_at_position(2) << '\n';
  //   linked_list.print_all_nodes_content();
  // }
  /**
   * manage array
   */
  // {
  //   Array<int> array_int(30);
  //   array_int.fill_array_random_int();
  //   std::cout <<
  //   "=============================================="
  //   << '\n';
  //   array_int.print_capacity();
  //   array_int.print_number_of_elements();
  //   std::cout <<
  //   "=============================================="
  //   << '\n'; array_int.push_element(2);
  //   array_int.print_all_elements();
  //   std::cout <<
  //   "=============================================="
  //   << '\n';
  //   array_int.print_capacity();
  //   array_int.print_number_of_elements();
  //   std::cout <<
  //   "=============================================="
  //   << '\n'; array_int.bubble_sort();
  //   array_int.insertion_sort();
  //   array_int.print_all_elements();
  //   std::cout <<
  //   "=============================================="
  //   << '\n';
  // }
  // {
  //   Array<std::string> array_str(30);
  //   array_str.push_element("hi");
  //   array_str.push_element("bye");
  //   array_str.push_element("coucou");
  //   array_str.push_element("hola");
  //   array_str.push_element("bonjour");
  //   array_str.push_element("salut");
  //   array_str.insertion_sort();
  //   array_str.print_all_elements();
  //   array_str.set_element_at_index(4,
  //   "OMG"); std::cout <<
  //   array_str.get_number_of_elements()
  //   << '\n'; int found_position =
  //   array_str.binary_search("bonjour");
  //   if (found_position > 0) {
  //     std::cout << "FOUND AT: " <<
  //     found_position << '\n';
  //   } else {
  //     std::cout << "NOT FOUND" << '\n';
  //   }
  // }

  return 0;
}
