#include "array.hpp"

int main() {
  // create new array in the heap of length 100 with smart pointer
  std::unique_ptr<Array> array_int = std::make_unique<Array>(20);

  /**
   * manage array_int
   */
  array_int->fill_array_random_int();
  array_int->print_capacity();
  array_int->print_number_of_elements();
  array_int->print_all_elements();
  return 0;
}
