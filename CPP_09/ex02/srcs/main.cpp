#include "PmergeMe.hpp"
#include <stdexcept>

int main(int argc, char **argv) {

  if (argc <= 2) {
    std::cout << "Error: invalid arguments" << std::endl;
    return 1;
  }
  try {
    PmergeMe FJsort(argc, argv);
    FJsort.sort();
  } catch (std::invalid_argument &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}
