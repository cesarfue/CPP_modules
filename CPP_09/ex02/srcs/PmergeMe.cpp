#include "PmergeMe.hpp"
#include <ctime>
#include <sstream>

void PmergeMe::insertionSortDeque(std::deque<int> &deq, int start, int end) {

  int i, j, tmp;

  for (i = start; i < end; i++) {
    tmp = deq[i + 1];
    j = i + 1;
    while (j > start && deq[j - 1] > tmp) {
      deq[j] = deq[j - 1];
      j--;
    }
    deq[j] = tmp;
  }
}

void PmergeMe::mergeSortDeque(std::deque<int> &deq, int start, int mid,
                              int end) {

  std::deque<int> A(deq.begin() + start, deq.begin() + mid + 1);
  std::deque<int> B(deq.begin() + mid + 1, deq.begin() + end + 1);

  int A_n = A.size();
  int B_n = B.size();
  int A_i = 0;
  int B_i = 0;

  for (int i = start; i <= end; i++) {
    if (B_i == B_n) {
      deq[i] = A[A_i];
      A_i++;
    } else if (A_i == A_n) {
      deq[i] = B[B_i];
      B_i++;
    } else if (B[B_i] > A[A_i]) {
      deq[i] = A[A_i];
      A_i++;
    } else {
      deq[i] = B[B_i];
      B_i++;
    }
  }
}

void PmergeMe::FJMIDeque(std::deque<int> &deq, int start, int end) {
  int mid;

  if ((end - start) > 10) {
    mid = (start + end) / 2;
    FJMIDeque(deq, start, mid);
    FJMIDeque(deq, mid + 1, end);
    mergeSortDeque(deq, start, mid, end);
  } else {
    insertionSortDeque(this->deq, start, end);
  }
}

/*******************************************************************************/

void PmergeMe::insertionSortVector(std::vector<int> &vec, int start, int end) {

  int i, j, tmp;

  for (i = start; i < end; i++) {
    tmp = vec[i + 1];
    j = i + 1;
    while (j > start && vec[j - 1] > tmp) {
      vec[j] = vec[j - 1];
      j--;
    }
    vec[j] = tmp;
  }
}

void PmergeMe::mergeSortVector(std::vector<int> &vec, int start, int mid,
                               int end) {

  std::vector<int> A(vec.begin() + start, vec.begin() + mid + 1);
  std::vector<int> B(vec.begin() + mid + 1, vec.begin() + end + 1);

  int A_n = A.size();
  int B_n = B.size();
  int A_i = 0;
  int B_i = 0;

  for (int i = start; i <= end; i++) {
    if (B_i == B_n) {
      vec[i] = A[A_i];
      A_i++;
    } else if (A_i == A_n) {
      vec[i] = B[B_i];
      B_i++;
    } else if (B[B_i] > A[A_i]) {
      vec[i] = A[A_i];
      A_i++;
    } else {
      vec[i] = B[B_i];
      B_i++;
    }
  }
}

void PmergeMe::FJMIVector(std::vector<int> &vec, int start, int end) {
  int mid;

  if ((end - start) > 10) {
    mid = (start + end) / 2;
    FJMIVector(vec, start, mid);
    FJMIVector(vec, mid + 1, end);
    mergeSortVector(vec, start, mid, end);
  } else {
    insertionSortVector(this->vec, start, end);
  }
}

/* Printing time and calling Ford-Johnson Merge Insertion algorithm for both
 * vector and deque */

void PmergeMe::sort() {

  std::cout << "Before: ";
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  /* Sorting with Vector functions and calculating time */

  clock_t start = clock();
  FJMIVector(this->vec, 0, this->vec.size() - 1);
  clock_t end = clock();
  double elapsed =
      static_cast<float>(end - start) / (CLOCKS_PER_SEC / 1000000.0);
  std::cout << "After: ";
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::cout << "Time to process a range of " << vec.size()
            << " elements with std::vector : " << elapsed << " us" << std::endl;

  /* Sorting with Vector functions and calculating time */

  start = clock();
  FJMIDeque(this->deq, 0, this->deq.size() - 1);
  end = clock();
  elapsed = static_cast<float>(end - start) / (CLOCKS_PER_SEC / 1000000.0);
  std::cout << "Time to process a range of " << deq.size()
            << " elements with std::deque : " << elapsed << " us" << std::endl;
}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int argc, char **argv) {
  if (argc < 2) {
    return;
  }
  for (size_t i = 1; i < static_cast<size_t>(argc); i++) {
    double value;
    try {
      std::stringstream ss(argv[i]);
      if (!(ss >> value) || !ss.eof()) {
        std::cerr << "Error: invalid input" << std::endl;
      }
    } catch (std::invalid_argument &e) {
      throw;
    }
    this->vec.push_back(value);
    this->deq.push_back(value);
  }
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &src) {
  if (this != &src) {
    this->vec = src.vec;
    this->deq = src.deq;
  }
  return *this;
}

PmergeMe::PmergeMe(const PmergeMe &src) : vec(src.vec), deq(src.deq) {}
