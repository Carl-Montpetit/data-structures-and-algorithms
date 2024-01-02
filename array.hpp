#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <random>
#include <stdexcept>

template <typename T>

class Array {
private:
  // contain the address of the first element of the array
  T *_elements;
  unsigned int _capacity;
  unsigned int _number_of_elements;
  bool _is_full;

public:
  Array(const unsigned int capacity)
      : _capacity(capacity), _number_of_elements(0), _is_full(false) {
    if (capacity >= 2) {
      _elements = new T[_capacity];
      _capacity = capacity;
    } else {
      throw std::invalid_argument("Error: Array size must be greater than 1!");
    }
  }

  ~Array() {delete [] _elements; };

  T &operator[] (const unsigned int index) const {
    return this->get_element_at_index(index);
  }

  void set_element_at_index(const unsigned int index, const T value) {
    _elements[index] = value;
  }

  void push_element(T element) {
    if (_is_full) {
      this->double_capacity();
    }

    if (!_is_full && _number_of_elements != _capacity) {
      _elements[_number_of_elements] = element;
      _number_of_elements++;
      _number_of_elements == _capacity ? _is_full = true : _is_full = false;
    } else {
      throw std::out_of_range("Cannot add another element, out of bounds!");
    }
  }

  void fill_array_random_int() {
    // random int tools
    std::random_device random_device;
    std::mt19937 gen(random_device());
    std::uniform_int_distribution<int> distribution(0, 1000);

    for (unsigned int i = 0; i < get_capacity(); i++) {
      // add random int in array
      this->push_element(distribution(gen));
    }

    if (_number_of_elements == _capacity)
      _is_full = true;
  }

  void print_all_elements() const {
    for (unsigned int i = 0; i < _number_of_elements; i++) {
      std::cout << "element at index " << i << ": " << get_element_at_index(i)
                << '\n';
    }
  }

  void print_number_of_elements() const {
    std::cout << "number of elements: " << get_number_of_elements() << '\n';
  }

  void print_capacity() const { std::cout << "capacity: " << get_capacity() << '\n'; }

  void swap_two_indexes_elements(const unsigned int index_a,
                                 const unsigned int index_b) {
    T temp = _elements[index_a];
    _elements[index_a] = _elements[index_b];
    _elements[index_b] = temp;
  }

  void double_capacity() {
    unsigned int new_capacity = _capacity * 2;

    // create a new array with double capacity
    T *new_elements = new T[new_capacity];

    // copy elements from the old array to the new array
    for (unsigned int i = 0; i < _number_of_elements; i++) {
      new_elements[i] = _elements[i];
    }

    // Update array properties
    _elements = new_elements;
    _capacity = new_capacity;
    _is_full = false;
  }

  bool get_is_full() const { return _is_full; }

  T &get_element_at_index(const unsigned int index) const {
    if (index >= 0 && index <= _number_of_elements - 1) {
      return _elements[index];
    } else {
      throw std::out_of_range("Cannot get element at index, out of bounds!");
    }
  }

  unsigned int get_capacity() const { return _capacity; }

  unsigned int get_number_of_elements() const { return _number_of_elements; }

  /**
   * search algorithms
   */
  int linear_search(const T target) const {
    bool is_found = false;
    int target_position = -1;
    unsigned int i = 0;

    while (!is_found && i <= _number_of_elements) {
      if (_elements[i] == target) {
        target_position = i;
        is_found = true;
      }
      i++;
    }

    return target_position;
  }

  int binary_search(const T target) const {
    bool is_found = false;
    int target_position = -1;
    unsigned int low_index = 0;
    unsigned int high_index = _number_of_elements - 1;

    while (!is_found && low_index <= high_index) {
      int middle_index = floor((low_index + high_index) / 2);
      T value = _elements[middle_index];
      if (target < value && middle_index != 0)
        high_index = middle_index - 1;
      else if (target > value)
        low_index = middle_index + 1;
      else {
        is_found = true;
        target_position = middle_index;
      }
    }

    return target_position;
  }

  /**
   * sort algorithms
   */
  void bubble_sort() {
    for (unsigned int i = 0; i < _number_of_elements - 1; i++) {
      bool is_sorted = true;
      for (unsigned int j = 0; j < _number_of_elements - i - 1; j++) {
        if (_elements[j] > _elements[j + 1]) {
          swap_two_indexes_elements(j, j + 1);
          is_sorted = false;
        }
      }
      // if the last pass didn't swap any element it means the array is already
      // sorted.
      if (is_sorted)
        break;
    }
  }

  void insertion_sort() {
    for (unsigned int i = 1; i < _number_of_elements; i++) {
      T value = _elements[i];
      unsigned int j = i;

      while (j > 0 && _elements[j - 1] > value) {
        _elements[j] = _elements[j - 1];
        j--;
      }

      _elements[j] = value;
    }
  }

  void selection_sort() {} // TODO
};

#endif
