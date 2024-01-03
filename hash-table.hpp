#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include "array.hpp"
#include "key-value-pair.hpp"
#include "linked-list.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

template <typename T>

class HashTable {
private:
  unsigned int _number_of_buckets;
  unsigned int _number_of_elements;
  Array<LinkedList<KeyValuePair<T>>> _table;

  /**
   * methods
   */
  unsigned int hash(const std::string &key) const {
    unsigned int sum = 0;

    for (char character : key) {
      sum += static_cast<unsigned int>(character);
    }

    return sum % _number_of_buckets;
  }

  const std::string generate_random_string(std::size_t length) const {
    const std::string characters =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, characters.size() - 1);

    std::string randomString;
    for (std::size_t i = 0; i < length; ++i) {
      randomString += characters[dis(gen)];
    }

    return randomString;
  }

public:
  HashTable(const unsigned int size)
      : _number_of_buckets(size),
        _table(Array<LinkedList<KeyValuePair<T>>>(size)) {}

  ~HashTable() = default;

  LinkedList<KeyValuePair<T>> &operator[](const unsigned int index) const {
    return _table[index];
  }

  unsigned int get_number_of_buckets() const { return _number_of_buckets; }

  unsigned int get_number_of_elements() const { return _number_of_elements; }

  const std::string &get_key(const unsigned int array_index,
                             const unsigned int linked_list_index) const {
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);

    if (linked_list.get_number_of_nodes() > 0) {
      KeyValuePair<T> &key_value_pair =
          linked_list.get_element_at_position(linked_list_index);

      return key_value_pair.get_key();
    }

    throw std::runtime_error("The key is not accessible or not existing!");
  }

  void set_key(const std::string key, const unsigned int array_index,
               const unsigned int linked_list_index) {
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);

    if (linked_list.get_number_of_nodes() > 0) {
      KeyValuePair<T> &key_value_pair =
          linked_list.get_element_at_position(linked_list_index);
      key_value_pair.set_key(key);
    }

    throw std::runtime_error("The key is not accessible or not existing!");
  }

  const T &get_value(const unsigned int array_index,
                     const unsigned int linked_list_index) const {
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);

    if (linked_list.get_number_of_nodes() > 0) {
      KeyValuePair<T> &key_value_pair =
          linked_list.get_element_at_position(linked_list_index);

      return key_value_pair.get_value();
    }

    throw std::runtime_error("The value is not accessible or not existing!");
  }

  void set_value(const T value, const unsigned int array_index,
                 const unsigned int linked_list_index) {
    LinkedList<KeyValuePair<T>> &linked_list =
        _table.get_element_at_index(array_index);

    if (linked_list.get_number_of_nodes() > 0) {
      KeyValuePair<T> &key_value_pair =
          linked_list.get_element_at_position(linked_list_index);
      key_value_pair.set_value(value);
    }

    throw std::runtime_error("The key is not accessible or not existing!");
  }

  void insert(const std::string key, const T value) {
    if (this->load_factor() < 0.7) {
      KeyValuePair<T> key_value_pair(key, value);
      const unsigned int array_index = this->hash(key_value_pair.get_key());
      LinkedList<KeyValuePair<T>> &linked_list =
          _table.get_element_at_index(array_index);
      linked_list.push(key_value_pair);
      _number_of_elements++;
      std::cout << "inserted: \"" << key << "\": " << value
                << "\t\tat index: " << array_index << '\n';
      // TODO if linked_list.get_number_of_nodes() > 0 => sort => so that it's
      // faster to search
    } else {
      throw std::runtime_error("Cannot insert an other element to hash table. "
                               "load factor reached > 0.7!");
    }
  }

  void insert_random() {
    std::string random_key =
        generate_random_string(15); // Adjust the length as needed
    T random_value =
        static_cast<T>(rand() % 1000); // Adjust the range as needed
    this->insert(random_key, random_value);
  }

  void remove(const std::string &key, const T &value) {
    const unsigned int array_index = hash(key);
    const int linked_list_position = find(key, value);
    if (_table[array_index].get_number_of_nodes() > 0) {
      _table[array_index].remove_node(linked_list_position);
      _number_of_elements--;
    } else
      throw std::runtime_error("Cannot remove node because it doesn't exist!");
  }

  int find(const std::string &key, const T &value) const {
    KeyValuePair<T> key_value_pair(key, value);
    const unsigned int array_index = hash(key);
    const int linked_list_index =
        _table[array_index].linear_search(key_value_pair);

    if (linked_list_index >= 0) {
      std::cout << "FOUND" << '\n';
    } else {
      std::cout << "NOT FOUND" << '\n';
    }

    return linked_list_index;
  }

  float load_factor() const {
    return static_cast<float>(_number_of_elements) / _number_of_buckets;
  }

  void clear() {}
};

#endif
