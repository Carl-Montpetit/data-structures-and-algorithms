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

int Array::get_element_at_index(const size_t index) {
  if (index >= 0 && index <= _number_of_elements - 1) {
    return _elements[index];
  } else {
    throw std::out_of_range("Cannot get element at index, out of bounds!");
  }
}

void Array::set_element_at_index(const size_t index, const int value) {
  this->_elements[index] = value;
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
  std::uniform_int_distribution<int> distribution(1, 100);
  for (size_t i = 0; i < this->get_capacity(); i++) {
    // add random int in array
    this->push_element(distribution(gen));
  }
  if (this->get_number_of_elements() == this->get_capacity())
    _is_full = true;
}

void Array::print_all_elements() {
  for (size_t i = 0; i < _number_of_elements; i++) {
    std::cout << "element at index " << i << ": "
              << this->get_element_at_index(i) << '\n';
  }
}

void Array::print_number_of_elements() {
  std::cout << "number of elements: " << this->get_number_of_elements() << '\n';
}

void Array::print_capacity() {
  std::cout << "capacity: " << this->get_capacity() << '\n';
}

void Array::swap_two_indexes_elements(const size_t index_a,
                                      const size_t index_b) {
  int temp = this->_elements[index_a];
  this->_elements[index_a] = this->_elements[index_b];
  this->_elements[index_b] = temp;
}

bool Array::get_is_full() { return _is_full; }

size_t Array::get_capacity() { return _capacity; }

size_t Array::get_number_of_elements() { return _number_of_elements; }

/**
 * sorting algorithms
 */
void Array::bubble_sort() {
  for (size_t i = 0; i < this->_number_of_elements - 1; i++) {
    for (size_t j = 0; j < this->_number_of_elements - i - 1; j++) {
      if (this->_elements[j] > this->_elements[j + 1]) {
        this->swap_two_indexes_elements(j, j + 1);
      }
    }
  }
}
