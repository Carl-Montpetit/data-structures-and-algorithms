#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <memory>
/**
 * declarations
 */
class Array {
private:
  // contain the address of the first element of the array
  std::unique_ptr<int[]> _elements;
  size_t _capacity;
  size_t _number_of_elements;
  bool _is_full;

public:
  /**
   * O(1)
   */
  Array(const size_t);

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
   * best: Θ(1)
   * worst: Θ(n)
   */
  void fill_array_random_int();

  /**
   * fill the array with random numbers in [1, 100].
   *
   * O(n)
   * best: Θ(1)
   * worst: Θ(n)
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
   * search the first occurence of an integer in the array.
   * return the index of the first element found.
   * else return -1.
   *
   * average: O(n)
   * best: Θ(1)
   * worst: Θ(n)
   */
  int linear_search(const int);

  /**
   * sort algorithms
   */
  /**
   * O(n^2)
   * best: Θ(n)
   * worst: Θ(n^2)
   */
  void bubble_sort();
};

#endif
