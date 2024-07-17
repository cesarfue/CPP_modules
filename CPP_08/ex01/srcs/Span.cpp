#include "Span.hpp"
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <limits>

void check_size(std::vector<int> vec) {
  if (vec.size() < 2)
    throw(Span::notBigEnoughException());
}

std::size_t Span::shortestSpan() {
  check_size(this->_vec);
  std::vector<int> sorted = _vec;
  std::sort(sorted.begin(), sorted.end());

  std::size_t minSpan = std::numeric_limits<std::size_t>::max();
  std::size_t span;

  for (std::vector<int>::iterator it = sorted.begin() + 1; it != sorted.end();
       ++it) {
    span = *it - *(it - 1);
    if (span < minSpan) {
      minSpan = span;
    }
  }
  return minSpan;
}

std::size_t Span::longestSpan() {
  check_size(this->_vec);
  std::vector<int>::iterator max = std::max_element(_vec.begin(), _vec.end());
  std::vector<int>::iterator min = std::min_element(_vec.begin(), _vec.end());

  return *max - *min;
}

void Span::addNumber(std::size_t nbr) {
  if (_vec.size() < _n)
    _vec.push_back(nbr);
  else
    throw(Span::outOfRangeException());
}

Span::Span() : _n(10) {}

Span::Span(unsigned int n) : _n(n) {}

Span::~Span() {}

Span &Span::operator=(const Span &src) {
  if (this != &src) {
    this->_n = src._n;
    this->_vec = src._vec;
  }
  return *this;
}

Span::Span(const Span &src) {
  if (this != &src) {
    this->_n = src._n;
    this->_vec = src._vec;
  }
}

std::ostream &operator<<(std::ostream &out, Span &span) {

  std::vector<int> vec = span.getVec();

  for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end();
       ++it) {
    out << *it;
    if (it != vec.end() - 1)
      out << ", ";
  }
  return out;
}

std::vector<int> Span::getVec() { return _vec; }
void Span::setN(unsigned int n) { this->_n = n; }

const char *Span::outOfRangeException::what() const throw() {
  return "Out of range element";
}

const char *Span::notBigEnoughException::what() const throw() {
  return "Array not big enough for calculating span";
}
