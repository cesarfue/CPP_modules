#include <BitcoinExchange.hpp>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Error: couldn't open file" << std::endl;
    return 1;
  }
  std::ifstream input(argv[1]);
  if (!input.is_open()) {
    std::cout << "Error: couldn't open file" << std::endl;
    return 1;
  }
  std::string CSVfile = "data.csv";

  BitcoinEX ex;
  ex.parse_CSV(CSVfile);
  ex.print_value(input);
  return 0;
}
