# data-structures-and-algorithms

Implementing data structures and algorithms from scratch with C++.

- [Array<T>](#class-arrayt-with-dynamic-capacity)
- [Node<T>](#class-nodet)
- [LinkedList<Node<T>>](#class-linkedlistnodet)

## Class `Array<T>` with dynamic capacity

### Methods

- constructor
  - $O(1)$
- destructor
  - $O(1)$
- `set_element_at_index`
  - $O(1)$
- `push_element`
  - $O(1)$
- `fill_array_random_int`
  > Fill the array with random integers.
  - average: $O(n)$
  - best: $O(1)$: one element in the array
  - worst: $O(n)$: no elements in the array
- `print_all_elements`
  - average: $O(n)$
  - best: $O(1)$: one element in the array
  - worst: $O(n)$: $n$ elements in the array
- `print_number_of_elements`
  - $O(1)$
- `print_capacity`
  - $O(1)$
- `swap_two_indexes_elements`
  - $O(1)$
- `double_capacity`
  > Double the capacity of the array the moment is full.
  - average: $O(n)$
  - best: $O(1)$
  - worst: $O(n)$
- `get_is_full`
  - $O(1)$
- `get_element_at_index`
  - $O(1)$
- `get_capacity`
  - $O(1)$
- `get_number_of_elements`
  - $O(1)$

#### Searching algorithms

- `linear_search`

  > Search the first occurrence of an element in the array. Return the index of
  > the first occurrence found. <br />
  > Else return $-1$.

  - average: O(n)
  - best: O(1): find element at first position
  - worst: O(n): find element at last position

- `binary_search`
  > Dichotomous search efficiently find position of an element in an array. <br />
  > **Elements must be already sorted**
  - average: $O(\log n)$
  - best: $O(1)$
  - worst: $O(\log n)$

#### Sorting algorithms

- `bubble_sort`
  - average: $O(n^2)$
- `insertion_sort`
  - average: $O(n^2)$
- `selection_sort`
  - TODO

## Class `Node<T>`

### Methods

- constructor
  - $O(1)$
- destructor
  - $O(1)$
- `get_next_node`
  - $O(1)$
- `get_content`
  - $O(1)$
- `set_next_node`
  - $O(1)$
- `set_content`
  - $O(1)$

## Class `LinkedList<Node<T>>`

### Methods

- constructor
  - $O(1)$
- destructor
  - average: $O(n)$
  - best: $O(1)$: one node or none in current linked list
  - worst: $O(n)$: call $n$ time Node class destructor for each nodes in linked
    list
- `set_content_at_position`
  - average: $O(n)$
  - best: $O(1)$ first node in the linked list
  - worst: $O(n)$ last node in the linked list at position $n$
- `push_node`
  - average: $O(n)$
  - best: $O(1)$: no node in current linked list
  - worst: $O(n)$: $n$ nodes in current linked list
- `print_all_nodes_content`
  - average: $O(n)$
  - best: $O(1)$: just one node in the linked list
  - worst: $O(n)$ $n$ nodes in the linked list
- `print_number_of_nodes`
  - $O(1)$
- `swap_two_nodes_elements`
  - average: O(n+m), where $m>n$
  - best: O(n+m): positions $0$ and $1$
  - worst: O(n+m): positions `number_of_elements - 2` and
    `number_of_elements - 1`
- `get_content_at_position`
  - average: $O(n)$
  - best: $O(1)$: only one node in the linked list or it's the first position
  - worst: $O(n)$: last node in the linked list at position $n$
- `get_number_of_nodes`
  - $O(1)$

#### Searching algorithms

- `linear_search`
  > Search the first occurrence of an element in the linked list. Return the
  > position of the first occurrence found. <br />
  > Else return $-1$.
  - average: O(n)
  - best: O(1): first node found
  - worst: O(n): last node found or not found
