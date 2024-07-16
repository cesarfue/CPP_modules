#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

class unknown : public std::exception {
public:
  virtual const char *what() const throw() {
    return "Element couldn't be found";
  }
};

template <typename T> int easyfind(T &container, int n) {
  std::vector<int>::iterator it =
      std::find(container.begin(), container.end(), n);
  if (it != container.end())
    return *it;
  throw unknown();
}
