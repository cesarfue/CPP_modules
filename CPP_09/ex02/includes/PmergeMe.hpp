#pragma once

#include <deque>
#include <iostream>
#include <vector>

class PmergeMe {
private:
  std::vector<int> vec;
  std::deque<int> deq;

public:
  /* Sort functions for deque container */
  void insertionSortDeque(std::deque<int> &deq, int start, int mid);
  void mergeSortDeque(std::deque<int> &deq, int start, int mid, int end);
  void FJMIDeque(std::deque<int> &deq, int start, int end);

  /* Sort functions for vector container */
  void insertionSortVector(std::vector<int> &vec, int start, int mid);
  void mergeSortVector(std::vector<int> &vec, int start, int mid, int end);
  void FJMIVector(std::vector<int> &vec, int start, int end);

  void sort();
  void print();

  PmergeMe();
  PmergeMe(int argc, char **argv);
  ~PmergeMe();
  PmergeMe &operator=(const PmergeMe &);
  PmergeMe(const PmergeMe &);
};
