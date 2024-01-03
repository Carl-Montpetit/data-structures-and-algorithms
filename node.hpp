#ifndef NODE_HPP
#define NODE_HPP

template <typename T>

class Node {
private:
  // contain the address of the next node
  Node<T> *_next_node;
  T _content;

public:
  Node() : _next_node(nullptr), _content() {}

  Node(const T content) : _next_node(nullptr), _content(content) {}

  ~Node() = default;

  Node<T> *get_next_node() const { return _next_node; }

  void set_next_node(Node<T> *nextNode) { _next_node = nextNode; }

  T &get_content() { return _content; }

  void set_content(const T content) { _content = content; }

  void remove() {
    Node<T> *temp = this;

    if (temp->_next_node) {
      Node<T> *next_node = temp->_next_node;

      if (next_node->get_next_node()) {
        temp->_next_node = next_node->get_next_node();
      } else {
        temp->_next_node = nullptr;
      }

      temp->_content = next_node->get_content();
      delete next_node;
    } else {
      // Handle the case where the node being removed is the last node
      if (temp->_next_node) {
        temp->_next_node = nullptr;
      }
    }
  }
};

#endif
