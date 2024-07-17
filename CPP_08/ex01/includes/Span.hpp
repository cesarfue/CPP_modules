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

  class outOfRangeException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
