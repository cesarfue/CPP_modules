#pragma once

#include <algorithm>
#include <iostream>
#include <iterator>
#include <stdexcept>
#include <vector>

class Span {
private:
  std::vector<int> _vec;
  unsigned int _n;

public:
  void addNumber(std::size_t nbr);
  std::size_t shortestSpan();
  std::size_t longestSpan();

  Span();
  Span(unsigned int n);
  ~Span();
  Span &operator=(const Span &);
  Span(const Span &);

  std::vector<int> getVec();
  void setN(unsigned int n);

  template <typename InputIterator>
  void fillSpan(InputIterator start, InputIterator end) {
    while (start != end) {
      if (_vec.size() < _n) {
        _vec.push_back(*start++);
      } else {
        throw Span::outOfRangeException();
      }
    }
  }

  class outOfRangeException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class notBigEnoughException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &out, Span &span);
