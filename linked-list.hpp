#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include "node.hpp"
#include <cstddef>
/**
 * declarations
 */
class LinkedList {
private:
  // contain the address of the first element of the array
  Node *_first_node;
  size_t _number_of_nodes;

public:
  LinkedList();
  ~LinkedList();
  void set_element_at_index(const size_t, const int);
  void push_node(const int);
  void fill_with_random_int();
  void print_all_elements();
  void print_number_of_elements();
  void print_capacity();
  void swap_two_indexes_elements(const size_t, const size_t);
  void double_capacity();
  bool get_is_full();
  int get_element_at_index(const size_t);
  size_t get_capacity();
  size_t get_number_of_elements();
  int linear_search(const int);
  int binary_search(const int);
  void bubble_sort();
  void insertion_sort();
  void selection_sort();
};

#endif
