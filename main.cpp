#include "hash-table.hpp"
#include <iostream>
#include <string>

int main() {
  {
    // load factor = _number_of_elements / _number_of_buckets, optimal =>
    // load_factor = 0.7
    HashTable<int> hash_table(10);
    std::cout << "==============================================" << '\n';
    // unsigned int i = 0;
    // while (i < 7) {
    //   hash_table.insert_random();
    //   i++;
    // }
    std::cout << "==============================================" << '\n';
    hash_table.insert("bye", 0);
    hash_table.insert("minou", 7);
    hash_table.insert("cashew", 1);
    hash_table.insert("michelle", 9);
    hash_table.insert("carl", 3);
    hash_table.insert("pascal", 6);
    hash_table.insert("carole", 6);
    // hash_table.insert("daniel", 4);
    // hash_table.insert("jesus", 8);
    // hash_table.insert("newton", 2);
    // for (unsigned int i = 0; i < hash_table.get_number_of_buckets(); i++) {
    //   std::cout << hash_table[i].get_number_of_nodes() << '\n';
    // }
    std::cout << "==============================================" << '\n';
    std::cout << "number of buckets: " << hash_table.get_number_of_buckets()
              << '\n';
    std::cout << "number of elements: " << hash_table.get_number_of_elements()
              << '\n';
    std::cout << "load factor: " << hash_table.load_factor() << '\n';
    hash_table.find("carl", 3);
    hash_table.remove("carl", 3);
    std::cout << "number of elements: " << hash_table.get_number_of_elements()
              << '\n';
    std::cout << "==============================================" << '\n';
    hash_table.find("carl", 3);
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
  //   linked_list.linear_search("note") >= 0 ? std::cout << "FOUND" << '\n'
  //                                          : std::cout << "NOT FOUND" <<
  //                                          '\n';
  //   std::cout << linked_list.get_number_of_nodes() << '\n';
  //   std::cout << linked_list.get_element_at_position(2) << '\n';
  //   std::cout << linked_list[4] << '\n';
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
  //   std::cout << array_int[3] << '\n';
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
  //   std::cout << "NUMBER OF ELEMENTS: " <<
  //   array_str.get_number_of_elements()
  //   << '\n'; int found_position = array_str.binary_search("asfasds"); if
  //   (found_position >= 0) {
  //     std::cout << "FOUND AT: " << found_position << '\n';
  //   } else {
  //     std::cout << "NOT FOUND" << '\n';
  //   }
  // }

  return 0;
}
