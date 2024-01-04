# data-structures-and-algorithms

Implementing data structures and algorithms from scratch with C++.

- [Array<T>](#class-arrayt-with-dynamic-capacity)
- [Node<T>](#class-nodet)
- [LinkedList<T>](#class-linkedlistt)
- [KeyValuePair<T>](#class-keyvaluepairt)
- [HashTable<T>](#class-hashtablet)

## Class `Array<T>` with dynamic capacity

### Methods

- constructor
  - $O(1)$
- destructor
  - $O(1)$
- `operator[]`
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

#### Searching

- `linear_search`

  > Search the first occurrence of an element in the array. Return the index of
  > the first occurrence found. <br /> Else return $-1$.

  - average: O(n)
  - best: O(1): find element at first position
  - worst: O(n): find element at last position

- `binary_search`
  > Dichotomous search efficiently find position of an element in an array.
  > <br /> **Elements must be already sorted**
  - average: $O(\log n)$
  - best: $O(1)$
  - worst: $O(\log n)$

#### Sorting

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
- `remove`
  - $O(1)$

## Class `LinkedList<T>`

> Internally using the `Node<T>` class.

### Methods

- constructor
  - $O(1)$
- destructor
  - average: $O(n)$
  - best: $O(1)$: one node or none in current linked list
  - worst: $O(n)$: call $n$ time Node class destructor for each nodes in linked
    list
- `operator[]`
  - average: $O(n)$
  - best: $O(1)$: only one node in the linked list or it's the first position
  - worst: $O(n)$: last node in the linked list at position $n$
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
- `remove_node`
  - average: $O(n)$
  - best: $O(1)$: only one node in the linked list or it's the first position
  - worst: $O(n)$: last node in the linked list at position $n$

#### Searching

- `linear_search`
  > Search the first occurrence of an element in the linked list. Return the
  > position of the first occurrence found. <br /> Else return $-1$.
  - average: O(n)
  - best: O(1): first node found
  - worst: O(n): last node found or not found

## Class `KeyValuePair<T>`

### Methods

- constructor
  - $O(1)$
- destructor
  - $O(1)$
- `get_key`
  - $O(1)$
- `set_key`
  - $O(1)$
- `get_value`
  - $O(1)$
- `set_value`
  - $O(1)$

## Class `HashTable<T>`

> The property `_table` is an `Array<LinkedList<KeyValuePair<T>>>`.

### Methods

- constructor
  - $O(1)$
- destructor
  > Delete all the dynamically allocated nodes in the heap. <break />
  > Where $n$ is the length of the array and $m$ the number of nodes per linked lists. <break /> 
  - average: $O(n)$: load factor is optimize to not grow beyond $0.7$.
  - best: $O(1)$: length of the array is $1$ and there's only one node.
  - worst: $O(n \cdot m)$: if there's $m$ nodes per $n$ linked lists.

- `hash`
  - average: $O(n)$
  - best: $O(1)$: one character in the key string
  - worst: $O(n)$: $n$ characters in the key string
- `get_number_of_buckets`
  - $O(1)$
- `get_number_of_elements`
  - $O(1)$
- `get_key`
  - average: $O(1)$
  - best: $O(1)$: one element in the associated linked list or it's the first
    element
  - worst: $O(n)$: $n$ elements in the associated linked list and the target is
    not the first element
- `set_key`
  - average: $O(1)$
  - best: $O(1)$: one element in the associated linked list or it's the first
    element
  - worst: $O(n)$: $n$ elements in the associated linked list and the target is
    not the first element
- `get_value`
  - average: $O(1)$
  - best: $O(1)$: one element in the associated linked list or it's the first
    element
  - worst: $O(n)$: $n$ elements in the associated linked list and the target is
    not the first element
- `set_value`
  - average: $O(1)$
  - best: $O(1)$: one element in the associated linked list or it's the first
    element
  - worst: $O(n)$: $n$ elements in the associated linked list and the target is
    not the first element
- `insert`
  > Will refuse to insert if load factor reach the value $0.7$.
  - average: $O(1)$
  - best: $O(1)$
  - worst: $O(n)$
- `insert_random`
  - average: $O(1)$
  - best: $O(1)$
  - worst: $O(n)$
- `remove`
  - average: $O(1)$
  - best: $O(1)$
  - worst: $O(n)$
- `find`
  > Return the index of the position in targeted linked list
  > if found. <br /> 
  > Else return $-1$.
  - average: $O(1)$
  - best: $O(1)$
  - worst: $O(n)$
- `load_factor`
  > Return number_of_elements / number_of_buckets value of the hash table.
  - average: $O(1)$
