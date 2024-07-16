#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
  int arr[] = {0, 4, 2, 0, 6, 3, 4, 3};
  std::vector<int> intVec(arr, arr + sizeof(arr) / sizeof(int));

  try {
    std::cout << easyfind(intVec, 6) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  return 0;
}
