#include "Span.hpp"

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

Span::Span(const Span &) {}

std::vector<int> Span::getVec() { return _vec; }
void Span::setN(unsigned int n) { this->_n = n; }

const char *Span::outOfRangeException::what() const throw() {
  return "Out of range element";
}
