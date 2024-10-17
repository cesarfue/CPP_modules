#include "BitcoinExchange.hpp"

void BitcoinEX::printData() const {
  for (std::map<std::string, float>::const_iterator it = this->data.begin();
       it != this->data.end(); ++it) {
    std::cout << it->first << " => " << it->second << std::endl;
  }
}

bool is_out_of_range(double quantity) {
  if (quantity < 0) {
    std::cout << "Error: not a positive number." << std::endl;
    return true;
  } else if (quantity > 1000) {
    std::cout << "Error: too large a number." << std::endl;
    return true;
  }
  return false;
}

void BitcoinEX::parse_CSV(const std::string &csv) {

  std::ifstream file(csv.c_str());
  std::string line;
  size_t n;
  std::string keystr, valstr;
  float val;

  while (std::getline(file, line)) {
    n = line.find(',');
    if (n == std::string::npos) {
      continue;
    }
    keystr = line.substr(0, n);
    valstr = line.substr(n + 1);
    try {
      std::stringstream ss(valstr);
      if (!(ss >> val) || !ss.eof()) {
        continue;
      }
      this->data[keystr] = val;
    } catch (std::exception &e) {
      (void)e;
    }
  }
  file.close();
}

void BitcoinEX::print_value(std::ifstream &file) {
  std::string line;
  size_t n;
  std::string datestr, quantitystr;
  float quantity, value;
  while (std::getline(file, line)) {
    n = line.find('|');
    if (n == std::string::npos) {
      std::cout << "Error: bad input => " << line << std::endl;
      continue;
    }
    datestr = line.substr(0, n - 1);
    if (datestr == "date")
      continue;
    quantitystr = line.substr(n + 1);
    try {
      std::stringstream ss(quantitystr);
      if (!(ss >> quantity) || !ss.eof()) {
        continue;
      }
      if (is_out_of_range(quantity) == true) {
        continue;
      }
      std::map<std::string, float>::iterator it =
          this->data.upper_bound(datestr);
      if (it == this->data.begin()) {
        continue;
      }
      --it;
      value = it->second;
      std::cout << datestr << " => " << quantity << " = " << quantity * value
                << std::endl;

    } catch (std::exception &e) {
      (void)e;
    }
  }
  file.close();
}

BitcoinEX::BitcoinEX() {}
BitcoinEX::~BitcoinEX() {}
BitcoinEX::BitcoinEX(const BitcoinEX &src) { this->data = src.data; }
BitcoinEX &BitcoinEX::operator=(const BitcoinEX &src) {
  if (this != &src) {
    this->data = src.data;
  }
  return *this;
}

const char *BitcoinEX::InvalidFile::what() const throw() {
  return "Invalid file format or permission";
}
