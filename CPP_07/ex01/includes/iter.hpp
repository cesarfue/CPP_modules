#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T> void iter(T *array, std::size_t length, void (*f)(T &)) {
  if (array == NULL || f == NULL) {
    return;
  }
  for (std::size_t i = 0; i < length; ++i) {
    f(array[i]);
  }
};

#endif
