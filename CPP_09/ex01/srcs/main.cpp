#include "RPN.hpp"

int main(int argc, char *argv[]) {
  if (argc == 1 || argc > 2) {
    std::cout << "Error: invalid arguments" << std::endl;
    return 1;
  }
  std::string input(argv[1]);

  std::string validStart = "0123456789 ";
  size_t start = input.find_first_not_of(" \t");
  if (start == std::string::npos ||
      validStart.find(input[start]) == std::string::npos) {
    std::cerr << "Error" << std::endl;
    return 1;
  }

  std::string validEnd = "+-/* ";
  size_t end = input.find_last_not_of(" \t");
  if (end == std::string::npos ||
      validEnd.find(input[end]) == std::string::npos) {
    std::cerr << "Error" << std::endl;
    return 1;
  }
  RPN RPNcalculator;
  std::stringstream ss(input);
  std::string token;
  int ret;
  while (std::getline(ss, token, ' ')) {
    try {
      ret = RPNcalculator.call(token);
    } catch (const RPN::RPNException &e) {
      std::cerr << e.what() << std::endl;
      return 1;
    }
    if (ret == 1) {
      return 1;
    }
  }
  RPNcalculator.print();
  return 0;
}
