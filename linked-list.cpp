#include "linked-list.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

LinkedList::LinkedList() : _first_node(nullptr), _number_of_nodes(0) {}

LinkedList::~LinkedList() { delete _first_node; }

void LinkedList::set_content_at_position(const int content,
                                         const unsigned int target_position) {
  if (target_position < 0 || target_position > _number_of_nodes - 1) {
    throw std::out_of_range("Cannot set content of a node that is not valid "
                            "position in linked list!");
  }

  Node *temp = _first_node;
  unsigned int i = 0;

  if (target_position == 0)
    temp->set_content(content);

  while (temp && i < _number_of_nodes - 1) {
    temp = temp->get_next_node();
    i++;

    if (i == target_position) {
      temp->set_content(content);
      break;
    }
  }
}

void LinkedList::push_node(const int content) {
  Node *temp = _first_node;

  if (!temp) {
    _first_node = new Node();
    _first_node->set_content(content);
  } else if (_number_of_nodes == 1) {
    _first_node->set_next_node();
    _first_node->get_next_node()->set_content(content);
  } else {
    while (temp->get_next_node() != nullptr) {
      temp = std::move(temp->get_next_node());
    }

    temp->set_next_node();
    temp->get_next_node()->set_content(content);
  }
  _number_of_nodes++;
}

void LinkedList::print_all_nodes_content() {
  Node *temp = _first_node;

  while (temp != nullptr) {
    std::cout << temp->get_content() << '\n';
    temp = temp->get_next_node();
  }
}

void LinkedList::print_number_of_nodes() {
  std::cout << _number_of_nodes << '\n';
}

void LinkedList::swap_two_nodes_elements(const unsigned int index_a,
                                         const unsigned int index_b) {
  if (index_a == index_b || index_a > _number_of_nodes ||
      index_b > _number_of_nodes || index_a < 0 || index_b < 0) {
    throw std::out_of_range("Cannot swap invalid indexes!");
  }

  Node *ptr_a = _first_node;
  Node *ptr_b = _first_node;
  int temp;
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

int LinkedList::get_content_at_position(const unsigned int position) {
  if (position > _number_of_nodes - 1) {
    throw std::out_of_range("Cannot get content at position " +
                            std::to_string(position) +
                            ". Out of bound because number of nodes is " +
                            std::to_string(_number_of_nodes) + "!");
  }

  Node *temp = _first_node;
  unsigned int i = 0;
  int result;

  if (!temp->get_next_node()) {
    result = temp->get_content();
  } else {

    while (temp && i != position) {
      temp = temp->get_next_node();
      i++;
    }

    result = temp->get_content();
  }

  return result;
}

unsigned int LinkedList::get_number_of_nodes() { return _number_of_nodes; }

int LinkedList::linear_search(int target_content) {
  Node *temp = _first_node;
  int target_position = -1;
  unsigned int i = 0;

  if (temp->get_content() == target_content) {
    target_position = 0;
  } else {
    while (temp && i < _number_of_nodes - 1) {
      temp = temp->get_next_node();
      i++;
      if (temp->get_content() == target_content) {
        target_position = i;
        break;
      }
    }
  }

  return target_position;
}
