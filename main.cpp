#include "array.hpp"
#include "hash-table.hpp"
#include "key-value-pair.hpp"
#include "linked-list.hpp"
#include <functional>
#include <iostream>
#include <string>

int main() {
  {
    HashTable<int> hash_table(10);
    hash_table.insert_key_value_pair("minou", 2);
    hash_table.insert_key_value_pair("michelle", 8);
    hash_table.insert_key_value_pair("carl", 7);
    hash_table.insert_key_value_pair("pascal", 1);
    hash_table.insert_key_value_pair("cashew", 0);
    hash_table.insert_key_value_pair("naruto", 2);
    std::cout << hash_table.get_key(2, 0) << '\n';
  }
  /**
   * manage linked-list
   */
  // {
  //   std::cout << "==============================================" << '\n';
  //   LinkedList<std::string> linked_list;
  //   linked_list.push("hi");
  //   linked_list.push("cat");
  //   linked_list.push("dog");
  //   linked_list.push("music");
  //   linked_list.push("amazing");
  //   linked_list.push("guitar");
  //   linked_list.push("note");
  //   linked_list.push("zelda");
  //   // std::cout << linked_list.get_element_at_position(1) << '\n';
  //   linked_list.print_all_nodes_content();
  //   std::cout << "==============================================" << '\n';
  //   // linked_list.set_content_at_position("home", 0);
  //   linked_list.swap_two_nodes_elements(3, 5);
  //   // linked_list.linear_search("note") >= 0 ? std::cout << "FOUND" << '\n'
  //                                          // : std::cout << "NOT FOUND" <<
  //                                          // '\n';
  //   // std::cout << linked_list.get_number_of_nodes() << '\n';
  //   // std::cout << linked_list.get_element_at_position(2) << '\n';
  //   std::cout << "==============================================" << '\n';
  //   linked_list.print_all_nodes_content();
  // }
  /**
   * manage array
   */
  // {
  //   Array<int> array_int(30);
  //   array_int.fill_array_random_int();
  //   std::cout << "==============================================" << '\n';
  //   array_int.print_capacity();
  //   array_int.print_number_of_elements();
  //   std::cout << "==============================================" << '\n';
  //   array_int.push_element(2);
  //   array_int.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  //   array_int.print_capacity();
  //   array_int.print_number_of_elements();
  //   std::cout << "==============================================" << '\n';
  //   array_int.bubble_sort();
  //   array_int.insertion_sort();
  //   array_int.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  // }
  // {
  //   Array<std::string> array_str(30);
  //   array_str.push_element("hi");
  //   array_str.push_element("bye");
  //   array_str.push_element("coucou");
  //   array_str.push_element("hola");
  //   array_str.push_element("bonjour");
  //   array_str.push_element("salut");
  //   array_str.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  //   array_str.insertion_sort();
  //   array_str.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  //   array_str.set_element_at_index(4, "OMG");
  //   array_str.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  //   array_str.bubble_sort();
  //   array_str.print_all_elements();
  //   std::cout << "==============================================" << '\n';
  //   std::cout << "NUMBER OF ELEMENTS: " << array_str.get_number_of_elements()
  //   << '\n'; int found_position = array_str.binary_search("asfasds"); if
  //   (found_position >= 0) {
  //     std::cout << "FOUND AT: " << found_position << '\n';
  //   } else {
  //     std::cout << "NOT FOUND" << '\n';
  //   }
  // }

  return 0;
}
