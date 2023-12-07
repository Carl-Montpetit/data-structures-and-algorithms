#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <memory>
/**
 * definitions
 */
class Array {
public:
  Array(size_t);
  int get_element_at_index(const size_t);
  void set_element_at_index(const size_t);
  void push_element(const int &);
  void fill_array_random_int();
  void print_all_elements();
  void print_number_of_elements();
  void print_capacity();
  bool get_is_full();
  size_t get_capacity();
  size_t get_number_of_elements();

private:
  // contain the address of the first element of the array
  std::unique_ptr<int[]> _elements;
  size_t _capacity;
  size_t _number_of_elements;
  bool _is_full;
};

/**
 * sorting algorithms
 */
// bubble sorting

#endif
