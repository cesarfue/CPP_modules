#include "Span.hpp"

void Span::addNumber(int n) { if () }

Span::Span() {}
Span::~Span() {}
Span &Span::operator=() { return *this; }
Span::Span(const Span &) {}

const char *Span::outOfRangeException::what() const throw() {
  return "Out of range element";
}
