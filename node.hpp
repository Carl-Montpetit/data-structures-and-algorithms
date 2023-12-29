#ifndef NODE_HPP
#define NODE_HPP

template <typename T>

class Node {
private:
  // contain the address of the next node
  Node *_next_node;
  T _content;

public:
  Node() : _next_node(nullptr), _content() {}

  Node(const T content) : _next_node(nullptr), _content(content) {}

  ~Node() { delete _next_node; }

  Node *get_next_node() { return _next_node; }

  void set_next_node(const T content) { _next_node = new Node(content); }

  T get_content() { return _content; }

  void set_content(const T content) { _content = content; }
};

#endif
