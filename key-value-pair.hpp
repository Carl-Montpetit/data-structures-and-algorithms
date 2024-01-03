#ifndef KEY_VALUE_PAIR_HPP
#define KEY_VALUE_PAIR_HPP

#include <string>

template <typename T>

class KeyValuePair {
private:
  std::string _key;
  T _value;

public:
  KeyValuePair(const std::string key, const T value)
      : _key(key), _value(value) {}

  ~KeyValuePair() = default;

  const std::string &get_key() const { return _key; }

  void set_key(const std::string &key) { _key = key; }

  const T &get_value() const { return _value; }

  void set_value(const int &value) { _value = value; }
};

template <typename T>
bool operator==(const KeyValuePair<T> &left_hand_side,
                const KeyValuePair<T> &right_hand_side) {
  return left_hand_side.get_key() == right_hand_side.get_key() &&
         left_hand_side.get_value() == right_hand_side.get_value();
}

#endif
