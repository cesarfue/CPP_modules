#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <exception>

template <typename T> class Array {
private:
  T *_arr;
  unsigned int _n;

public:
  Array() : _arr(NULL), _n(0) {}

  ~Array() { delete[] _arr; }

  Array(unsigned int n) : _arr(new T[n]), _n(n) {}

  Array &operator=(const Array &src) {
    if (this == &src)
      return *this;
    if (this->_n != src._n) {
      if (this->_arr)
        delete[] this->_arr;
      this->_arr = new T[src._n];
      this->_n = src._n;
    }
    for (int i = 0; i < static_cast<int>(_n); ++i) {
      this->_arr[i] = src._arr[i];
    }
    return *this;
  }

  Array(const Array &src) { *this = src; }

  T &operator[](unsigned int index) {
    if (index >= _n)
      throw(Array::InvalidIndexException());
    return _arr[index];
  }

  std::size_t size() { return _n; }

  class InvalidIndexException : public std::exception {
  public:
    virtual const char *what() const throw() { return "Invalid index"; }
  };
};

#endif
