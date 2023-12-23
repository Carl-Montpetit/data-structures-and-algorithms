#include "node.hpp"

Node::Node() : _next_node(nullptr), _content(0) {}

Node *Node::get_next_node() { return _next_node; }

void Node::set_next_node() {
  _next_node = new Node();
}

int Node::get_content() { return _content; }

// size_t Node::get_index() { return _index; }

// bool Node::get_is_empty() { return _is_empty; }

void Node::set_content(const int content) { _content = content; }

// void Node::set_is_empty() { _is_empty = !_is_empty; }

// void Node::set_index(const size_t index) { _index = index; }
