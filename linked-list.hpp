#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP
#include "node.hpp"
/**
 * declarations
 */
class LinkedList {
private:
  // contain the address of the first element of the array
  Node *_first_node;
  unsigned int _number_of_nodes;

public:
  LinkedList();
  ~LinkedList();
  void set_content_at_position(const int, const unsigned int);
  void push_node(const int);
  void print_all_nodes_content();
  void print_number_of_nodes();
  void swap_two_nodes_elements(const unsigned int, const unsigned int);
  int get_content_at_position(const unsigned int);
  unsigned int get_number_of_nodes();
  unsigned int linear_search(const int); // TODO
  unsigned int binary_search(const int); // TODO
  void bubble_sort();                    // TODO
  void insertion_sort();                 // TODO
  void selection_sort();                 // TODO
};

#endif
