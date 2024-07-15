#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Invalid arguments" << std::endl;
    return 1;
  }
  ScalarConverter::Convert(argv[1]);
  return 0;
}
