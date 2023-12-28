#ifndef KEY_VALUE_PAIR_HPP
#define KEY_VALUE_PAIR_HPP

#include <string>

class KeyValuePair {
private:
  std::string _key;
  int _value;

public:
  KeyValuePair(const std::string key, const int value);
  ~KeyValuePair();
  std::string get_key();
  void set_key(const std::string);
  int get_value();
  void set_value(const int);
};

#endif
