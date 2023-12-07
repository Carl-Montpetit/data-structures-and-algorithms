#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <iostream>
#include <memory>
#include <random>
#include <stdexcept>
/**
 * definition
 */
template <typename T> class Array {
public:
  Array(size_t);
  T get_element_at_index(const size_t);
  void set_element_at_index(const size_t);
  void push_element(const T &);
  void fill_array_random_int();
  void print_all_elements();
  void print_number_of_elements();
  void print_capacity();
  bool get_is_full();
  size_t get_capacity();
  size_t get_number_of_elements();

private:
  // contain the address of the first element of the array
  std::unique_ptr<T[]> _elements;
  size_t _capacity;
  size_t _number_of_elements;
  bool _is_full;
};
/**
 * implementations
 */
template <typename T>
Array<T>::Array(size_t capacity)
    : _capacity(capacity), _number_of_elements(0), _is_full(false) {
  if (capacity >= 2) {
    _elements = std::make_unique<T[]>(_capacity);
    _capacity = capacity;
  } else {
    throw std::invalid_argument("Error: Array size must be greater than 1!");
  }
}

template <typename T> T Array<T>::get_element_at_index(const size_t index) {
  if (index >= 0 && index <= _number_of_elements - 1) {
    return _elements[index];
  } else {
    throw std::out_of_range("Cannot get element at index, out of bounds!");
  }
}

template <typename T> void Array<T>::push_element(const T &element) {
  if (!_is_full && _number_of_elements != _capacity) {
    _elements[_number_of_elements] = element;
    _number_of_elements++;
    _number_of_elements == _capacity ? _is_full = true : _is_full = false;
  } else {
    throw std::out_of_range("Cannot add another element, out of bounds!");
  }
}

template <typename T> void Array<T>::fill_array_random_int() {
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

template <typename T> void Array<T>::print_all_elements() {
  for (size_t i = 0; i < _number_of_elements; i++) {
    std::cout << "element at index " << i << ": "
              << this->get_element_at_index(i) << std::endl;
  }
}

template <typename T> void Array<T>::print_number_of_elements() {
  std::cout << "number of elements: " << this->get_number_of_elements()
            << std::endl;
}

template <typename T> void Array<T>::print_capacity() {
  std::cout << "capacity: " << this->get_capacity() << std::endl;
}

template <typename T> bool Array<T>::get_is_full() { return _is_full; }

template <typename T> size_t Array<T>::get_capacity() { return _capacity; }

template <class T> size_t Array<T>::get_number_of_elements() {
  return _number_of_elements;
}

#endif
