#include "Span.hpp"

Span::Span() {}
Span::~Span() {}
Span &Span::operator=(const Span &) { return *this; }
Span::Span(const Span &) {}

const char *Span::outOfRangeException::what() const throw() {
  return "Out of range element";
}
