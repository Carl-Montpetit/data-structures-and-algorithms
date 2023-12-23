# data-structures-and-algorithms

- [Array<int>](#class-arrayint-with-dynamic-capacity)
- [Node<int>](#class-nodeint)
- [LinkedList<Node<int>>](#class-linkedlistnodeint)

Implementing data structures and algorithms from scratch with C++.

## Class `Array<int>` with dynamic capacity

### Methods

- constructor
  - $O(1)$
- destructor
  - $O(1)$
- set_element_at_index
  - $O(1)$
- push_element
  - $O(1)$
- fill_array_random_int
  > Fill the array with random integers.
  - average: $O(n)$
  - best: $O(1)$: one element in the array
  - worst: $O(n)$: no elements in the array
- print_all_elements
  - average: $O(n)$
  - best: $O(1)$: one element in the array
  - worst: $O(n)$: $n$ elements in the array
- print_number_of_elements
  - $O(1)$
- print_capacity
  - $O(1)$
- swap_two_indexes_elements
  - $O(1)$
- double_capacity
  > Double the capacity of the array the moment is full.
  - average: $O(n)$
  - best: $O(1)$
  - worst: $O(n)$
- get_is_full
  - $O(1)$
- get_element_at_index
  - $O(1)$
- get_capacity
  - $O(1)$
- get_number_of_elements
  - $O(1)$

#### Searching algorithms

- linear_search

  > Search the first occurrence of an integer in the array. Return the index of
  > the first element found. Else return -1.

  - average: O(n)
  - best: O(1): find element at first position
  - worst: O(n): find element at last position

- binary_search
  > Dichotomous search efficiently find position of an element in an array.
  - average: $O(\log n)$
  - best: $O(1)$
  - worst: $O(\log n)$

#### Sorting algorithms

- bubble_sort
  - average: $O(n^2)$
- insertion_sort
  - average: $O(n^2)$
- selection_sort

## Class `Node<int>`

- constructor
- destructor
- get_next_node
- get_content
- set_next_node
- set_content

## Class `LinkedList<Node<int>>`

- constructor
- destructor
- void set_element_at_index
- void push_node

### Methods
