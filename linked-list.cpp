#include "linked-list.hpp"
#include <iostream>
#include <utility>

LinkedList::LinkedList() : _first_node(nullptr), _number_of_nodes(0) {}

LinkedList::~LinkedList() { delete _first_node; }

void LinkedList::set_element_at_index(const size_t index, const int content) {}

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
void LinkedList::print_all_elements() {
  Node *temp = _first_node;

  while (temp != nullptr) {
    std::cout << temp->get_content() << '\n';
    temp = temp->get_next_node();
  }
}
