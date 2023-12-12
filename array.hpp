#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <memory>
/**
 * declarations
 */
class Array {
public:
  /**
   * O(1)
   */
  Array(const size_t);
  /**
   * O(1)
   */
  int get_element_at_index(const size_t);
  /**
   * O(1)
   */
  void set_element_at_index(const size_t, const int);
  /** 
   * O(1)
   */
  void push_element(const int &);
  /**
   * O(n)
   * best: O(1)
   * worst: O(n)  
   */ 
  void fill_array_random_int();
  /**
   * O(n)
   * best: O(1)
   * worst: O(n)
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
   * O(n^2)
   * best: O(n)
   * worst: O(n^2)
   */
  void bubble_sort();
  /**
   * O(1)
   */
  bool get_is_full();
  /**
   * O(1)
   */
  size_t get_capacity();
  /**
   * O(1)
   */
  size_t get_number_of_elements();

private:
  // contain the address of the first element of the array
  std::unique_ptr<int[]> _elements;
  size_t _capacity;
  size_t _number_of_elements;
  bool _is_full;
};

#endif
