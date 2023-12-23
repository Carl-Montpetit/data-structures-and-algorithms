#ifndef NODE_HPP
#define NODE_HPP

class Node {
private:
  // contain the address of the next node
  Node *_next_node;
  int _content;

public:
  Node();
  ~Node();
  Node *get_next_node();
  int get_content();
  void set_next_node();
  void set_content(const int);
};

#endif
