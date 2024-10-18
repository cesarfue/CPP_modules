#include <BitcoinExchange.hpp>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Error: couldn't open file." << std::endl;
    return 1;
  }
  std::ifstream input(argv[1]);
  if (!input.is_open()) {
    std::cout << "Error: couldn't open file." << std::endl;
    return 1;
  }
  std::string CSVfile = "data.csv";

  BitcoinEX ex;
  try {

    ex.parse_CSV(CSVfile);
    ex.print_value(input);
  } catch (const BitcoinEX::BTCException &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
