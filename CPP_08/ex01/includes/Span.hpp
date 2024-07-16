#pragma once

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

class Span {
private:
  std::vector<int> _vec;
  unsigned int _n;
  std::vector<int>::iterator _it;

public:
  Span();
  ~Span();
  Span &operator=(const Span &);
  Span(const Span &);

  class outOfRangeException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
