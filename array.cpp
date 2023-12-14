#include "array.hpp"
#include <iostream>
#include <random>
#include <stdexcept>
/**
 * implementations
 */
Array::Array(size_t capacity)
    : _capacity(capacity), _number_of_elements(0), _is_full(false) {
  if (capacity >= 2) {
    _elements = std::make_unique<int[]>(_capacity);
    _capacity = capacity;
  } else {
    throw std::invalid_argument("Error: Array size must be greater than 1!");
  }
}

void Array::set_element_at_index(const size_t index, const int value) {
  _elements[index] = value;
}

void Array::push_element(const int &element) {
  if (!_is_full && _number_of_elements != _capacity) {
    _elements[_number_of_elements] = element;
    _number_of_elements++;
    _number_of_elements == _capacity ? _is_full = true : _is_full = false;
  } else {
    throw std::out_of_range("Cannot add another element, out of bounds!");
  }
}

void Array::fill_array_random_int() {
  // random int tools
  std::random_device random_device;
  std::mt19937 gen(random_device());
  std::uniform_int_distribution<int> distribution(0, 1000);
  for (size_t i = 0; i < get_capacity(); i++) {
    // add random int in array
    push_element(distribution(gen));
  }
  if (get_number_of_elements() == get_capacity())
    _is_full = true;
}

void Array::print_all_elements() {
  for (size_t i = 0; i < _number_of_elements; i++) {
    std::cout << "element at index " << i << ": " << get_element_at_index(i)
              << '\n';
  }
}

void Array::print_number_of_elements() {
  std::cout << "number of elements: " << get_number_of_elements() << '\n';
}

void Array::print_capacity() {
  std::cout << "capacity: " << get_capacity() << '\n';
}

void Array::swap_two_indexes_elements(const size_t index_a,
                                      const size_t index_b) {
  int temp = _elements[index_a];
  _elements[index_a] = _elements[index_b];
  _elements[index_b] = temp;
}

bool Array::get_is_full() { return _is_full; }

int Array::get_element_at_index(const size_t index) {
  if (index >= 0 && index <= _number_of_elements - 1) {
    return _elements[index];
  } else {
    throw std::out_of_range("Cannot get element at index, out of bounds!");
  }
}

size_t Array::get_capacity() { return _capacity; }

size_t Array::get_number_of_elements() { return _number_of_elements; }

/**
 * search algorithms
 */
int Array::linear_search(const int target) {
  bool is_found = false;
  int target_position = -1;
  size_t i = 0;

  while (!is_found && i <= _number_of_elements) {
    if (_elements[i] == target) {
      target_position = i;
      is_found = true;
    }
    i++;
  }

  return target_position;
}

int Array::binary_search(const int target) {
  bool is_found = false;
  int target_position = -1;
  unsigned int low_index = 0;
  unsigned int high_index = _number_of_elements - 1;

  while (!is_found && low_index <= high_index) {
    int middle_index = floor((low_index + high_index) / 2);
    int value = _elements[middle_index];
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
void Array::bubble_sort() {
  for (size_t i = 0; i < _number_of_elements - 1; i++) {
    bool is_sorted = true;
    for (size_t j = 0; j < _number_of_elements - i - 1; j++) {
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
