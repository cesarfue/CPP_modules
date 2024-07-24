#include "BitcoinExchange.hpp"

void BitcoinEX::parse_CSV(std::string csv) {

  std::ifstream file(csv);
  std::string line;
  size_t n;
  std::string valstr;
  double val;

  while (std::getline(file, line)) {
    n = line.find(',');
    if (n == std::string::npos) {
      std::cerr << "Error : invalid data found near '" << line.substr(0, 15)
                << "'" << std::endl;
      continue;
    }
  }
  valstr = line.substr(n + 1);
  try {
    val = std::stod(valstr);
  } catch (std::exception &e) {
    (void)e;
    std::cerr << "Error : invalid data found near '" << valstr << "'"
              << std::endl;
  }

  file.close();
}

BitcoinEX::BitcoinEX() {}
BitcoinEX::~BitcoinEX() {}
BitcoinEX::BitcoinEX(const BitcoinEX &src) {}
BitcoinEX &BitcoinEX::operator=(const BitcoinEX &src) { return *this; }

const char *BitcoinEX::InvalidFile::what() const throw() {
  return "Invalid file format or permission";
}
