#pragma once

#include <deque>
#include <iostream>
#include <iterator>
#include <stack>

template <typename T> class MutantStack : public std::deque<T> {
public:
  MutantStack() : std::deque<T>() {}
  MutantStack(const MutantStack<T> &src) : std::deque<T>(src){};
  virtual ~MutantStack(){};

  typedef typename std::deque<T>::iterator iterator;
  iterator begin() { return std::deque<T>::begin(); }
  iterator end() { return std::deque<T>::end(); }

  void push(const T &val) { std::deque<T>::push_back(val); }
  void pop(void) { std::deque<T>::pop_back(); }
  T &top(void) { return std::deque<T>::back(); }
};
