#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include "array.hpp"
#include "key-value-pair.hpp"
#include "linked-list.hpp"
#include <exception>
#include <iostream>

template <typename T>

class HashTable {
private:
  unsigned int _size;
  Array<LinkedList<KeyValuePair<T>>> _table;

  // methods
   unsigned int hash(const std::string &key) const {
    unsigned int sum = 0;

    for (char character : key) {
      sum += static_cast<unsigned int>(character);
    }

    return sum % _size;
  }

public:
  HashTable(const unsigned int size)
      : _size(size), _table(Array<LinkedList<KeyValuePair<T>>>(size)) {}

  ~HashTable() {}

  unsigned int get_size() { return _size; }

  const std::string &get_key(const unsigned int array_index,
                       const unsigned int linked_list_index) const {
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);

    if (linked_list.get_number_of_nodes() > 0) {
      KeyValuePair<T> &key_value_pair =
          linked_list.get_element_at_position(linked_list_index);

      return key_value_pair.get_key();
    }

    throw std::exception();
  }

  // void set_key(const std::string key, const unsigned int array_index,
  //              const unsigned int linked_list_index) {
  // }
  //
  const T &get_value(const unsigned int array_index,
               const unsigned int linked_list_index) const {
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);

    if (linked_list.get_number_of_nodes() > 0) {
      KeyValuePair<T> &key_value_pair =
          linked_list.get_element_at_position(linked_list_index);

      return key_value_pair.get_value();
    }
  }

  // void set_value(const T value, const unsigned int array_index,
  //                const unsigned int linked_list_index) {
  // }

  void insert_key_value_pair(const std::string key, const T value) {
    KeyValuePair<T> key_value_pair(key, value);
    const unsigned int array_index = this->hash(key_value_pair.get_key());
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);
    linked_list.push(key_value_pair);
    std::cout << "inserted at index: " << array_index << '\n';
  }
};

#endif
