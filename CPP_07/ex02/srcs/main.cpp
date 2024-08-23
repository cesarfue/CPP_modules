#include "Array.hpp"
#include <cstdlib>
#include <iostream>

int main() {

  Array<int> intArr(3);
  intArr[0] = 234;
  intArr[1] = 3;
  intArr[2] = 2200;

  Array<std::string> stringArr(3);
  stringArr[0] = "BOUH";
  stringArr[1] = "BOUUH";
  stringArr[2] = "BOUUH";

  Array<std::string> assignArr = stringArr;
  Array<std::string> copyArr(assignArr);

  std::cout << "\nJust showing copy constructors works : " << std::endl;
  for (std::size_t i = 0; i < stringArr.size(); i++) {
    std::cout << copyArr[i] << " ";
  }
  std::cout << std::endl;
  for (std::size_t i = 0; i < stringArr.size(); i++) {
    std::cout << assignArr[i] << " ";
  }

  std::cout << "\n" << std::endl;

  for (std::size_t i = 0; i < intArr.size(); ++i) {
    std::cout << intArr[i] << " ";
  }
  std::cout << std::endl;

  for (std::size_t i = 0; i < stringArr.size(); ++i) {
    std::cout << stringArr[i] << " ";
  }
  std::cout << std::endl;

  try {
    std::cout << stringArr[3] << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }

  return 0;
}
