#include "node.hpp"
#include <iostream>

Node::Node() : _next_node(nullptr), _content(0) {}

Node::~Node() {
  std::cout << "Node destructor called!" << '\n';
  delete _next_node;
}

Node *Node::get_next_node() { return _next_node; }

void Node::set_next_node() { _next_node = new Node(); }

int Node::get_content() { return _content; }

void Node::set_content(const int content) { _content = content; }
