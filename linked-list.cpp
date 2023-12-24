#include "linked-list.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

LinkedList::LinkedList() : _first_node(nullptr), _number_of_nodes(0) {}

LinkedList::~LinkedList() { delete _first_node; }

void LinkedList::set_content_at_position(const int content,
                                         const unsigned int position) {}

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

unsigned int LinkedList::get_number_of_nodes() {
  return _number_of_nodes;
}
