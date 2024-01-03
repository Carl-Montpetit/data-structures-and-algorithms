#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"
#include <iostream>
#include <stdexcept>

template <typename T>

class LinkedList {
private:
  // contain the address of the first node of the linked list
  Node<T> *_first_node;
  unsigned int _number_of_nodes = 0;

public:
  LinkedList() : _first_node() {}

  ~LinkedList() {
    Node<T> *ptr = _first_node;
    while (ptr) {
      Node<T> *next = ptr->get_next_node();
      delete ptr;
      ptr = next;
    }
    _first_node = nullptr;
  }

  T &operator[](const unsigned int position) const {
    return this->get_element_at_position(position);
  }

  void set_content_at_position(const T &content,
                               const unsigned int target_position) {
    if (target_position < 0 || target_position >= _number_of_nodes) {
      throw std::out_of_range(
          "Cannot set content at an invalid position in the linked list!");
    }

    Node<T> *temp = _first_node;
    unsigned int i = 0;
    while (i != target_position) {
      temp = temp->get_next_node();
      i++;
    }

    temp->set_content(content);
  }

  void push(const T &content) {
    Node<T> *new_node = new Node<T>(content);

    if (_first_node == nullptr) {
      _first_node = new_node;
    } else {
      Node<T> *temp = _first_node;
      while (temp->get_next_node() != nullptr) {
        temp = temp->get_next_node();
      }

      temp->set_next_node(new_node);
    }

    _number_of_nodes++;
  }

  void print_all_nodes_content() const {
    Node<T> *temp = _first_node;
    while (temp != nullptr) {
      std::cout << temp->get_content() << '\n';
      temp = temp->get_next_node();
    }
  }

  void swap_two_nodes_elements(const unsigned int index_a,
                               const unsigned int index_b) {
    if (index_a == index_b || index_a > _number_of_nodes ||
        index_b > _number_of_nodes || index_a < 0 || index_b < 0) {
      throw std::out_of_range("Cannot swap invalid indexes!");
    }

    Node<T> *ptr_a = _first_node;
    Node<T> *ptr_b = _first_node;
    T temp;
    unsigned int i = 0;
    unsigned int j = 0;

    while (i != index_a) {
      ptr_a = ptr_a->get_next_node();
      i++;
    }

    while (j != index_b) {
      ptr_b = ptr_b->get_next_node();
      j++;
    }

    temp = ptr_a->get_content();
    ptr_a->set_content(ptr_b->get_content());
    ptr_b->set_content(temp);
  }

  T &get_element_at_position(const unsigned int position) const {
    if (position >= _number_of_nodes) {
      throw std::out_of_range(
          "Cannot get content at an invalid position in the linked list!");
    }

    Node<T> *temp = _first_node;
    unsigned int i = 0;
    while (i != position) {
      temp = temp->get_next_node();
      i++;
    }

    return temp->get_content();
  }

  unsigned int get_number_of_nodes() const { return _number_of_nodes; }

  void remove_node(const unsigned int index) {
    if (index > _number_of_nodes || index < 0) {
      throw std::out_of_range("Invalid index for removal in the linked list!");
    }

    if (index == 0) {
      Node<T> *temp = _first_node;
      _first_node = _first_node->get_next_node();
      delete temp;
    } else {
      Node<T> *prev = _first_node;
      unsigned int i = 0;

      while (i != index - 1) {
        prev = prev->get_next_node();
        i++;
      }

      Node<T> *current = prev->get_next_node();
      prev->set_next_node(current->get_next_node());
      delete current;
    }

    _number_of_nodes--;
  }

  int linear_search(T target_content) const {
    Node<T> *temp = _first_node;
    int target_position = -1;
    unsigned int i = 0;

    while (temp != nullptr && i < _number_of_nodes) {
      if (temp->get_content() == target_content) {
        target_position = i;
        break;
      }
      temp = temp->get_next_node();
      i++;
    }

    return target_position;
  }
};

#endif
