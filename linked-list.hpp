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
  /**
   * O(1)
   */
  LinkedList();

  /**
   * O(1)
   */
  void set_element_at_index(const size_t, const int);

  /**
   * O(1)
   */
  void push_node(const int);

  /**
   * O(n)
   * best:O(1)
   * worst:O(n)
   */
  void fill_with_random_int();

  /**
   * fill the array with random numbers
   *
   * O(n)
   * best:O(1)
   * worst:O(n)
   */
  void print_all_elements();

  /**
   * O(1)
   */
  void print_number_of_elements();

  /**
   * O(1)
   */
  void print_capacity();

  /**
   * O(1)
   */
  void swap_two_indexes_elements(const size_t, const size_t);

  /**
   * average:O(n)
   * best:O(1)
   * worst:O(n)
   */
  void double_capacity();

  /**
   * O(1)
   */
  bool get_is_full();

  /**
   * O(1)
   */
  int get_element_at_index(const size_t);

  /**
   * O(1)
   */
  size_t get_capacity();

  /**
   * O(1)
   */
  size_t get_number_of_elements();

  /**
   * search algorithms
   */
  /**
   * search the first occurrence of an integer in the array.
   * return the index of the first element found.
   * else return -1.
   *
   * average:O(n)
   * best:O(1)
   * worst:O(n)
   */
  int linear_search(const int);

  /**
   *
   */
  int binary_search(const int);

  /**
   * sort algorithms
   */
  /**
   * adaptive
   * stable
   * average:O(n^2)
   * best:O(n):ascending order
   * worst:O(n^2):descending order
   */
  void bubble_sort();

  /**
   * better for linked list
   * adaptive
   * stable
   * average:O(n^2)
   * best:O(n):ascending order
   * worst:O(n^2):descending order
   */
  void insertion_sort();

  /**
   *
   */
  void selection_sort();
};

#endif
