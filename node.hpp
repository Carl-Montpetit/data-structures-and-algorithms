#ifndef NODE_HPP
#define NODE_HPP
/**
 * declarations
 */
class Node {
private:
  // contain the address of the first element of the array
  Node *_next_node;
  int _content;

public:
  /**
   * O(1)
   */
  Node();

  /**
   * O(1)
   */
  Node *get_next_node();

  /**
   * O(1)
   */
  int get_content();

  /**
   * O(1)
   */
  // size_t get_index();

  /**
   * O(1)
   */
  // bool get_is_empty();

  /**
   * O(1)
   */
  void set_next_node();

  /**
   * O(1)
   */
  void set_content(const int);

  /**
   * O(1)
   */
  // void set_is_empty();

  /**
   * O(1)
   */
  // void set_index(const size_t);
};

#endif
