#include "BitcoinExchange.hpp"
#include <cstring>
#include <ctime>

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

bool is_date_valid(std::string date) {

  int d, m, y;
  std::istringstream is(date);
  char delimiter;
  if (is >> y >> delimiter >> m >> delimiter >> d) {
    if (delimiter != '-')
      return false;
    struct tm t;
    memset(&t, 0, sizeof(struct tm));
    t.tm_mday = d;
    t.tm_mon = m - 1;
    t.tm_year = y - 1900;
    t.tm_isdst = -1;

    time_t when = mktime(&t);
    const struct tm *norm = localtime(&when);
    return (norm->tm_mday == d && norm->tm_mon == m - 1 &&
            norm->tm_year == y - 1900);
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
    // struct tm tm;
    // strptime(keystr, "%Y/%m/%S", &tm);
    // time_t t = mktime(&tm);

    valstr = line.substr(n + 1);
    try {
      std::stringstream ss(valstr);
      if (!(ss >> val) || !ss.eof()) {
        continue;
      }
      this->data[keystr] = val;
    } catch (std::exception &e) {
      throw BTCException("parsing error");
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
    if (datestr == "date") {
      continue;
    }
    if (is_date_valid(datestr) == false)
      throw BTCException("invalid date");
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
          this->data.lower_bound(datestr);
      if (it->first != datestr) {
        if (it != this->data.begin())
          --it;
      }

      value = it->second;
      std::cout << datestr << " => " << quantity << " = " << quantity * value
                << std::endl;

    } catch (std::exception &e) {
      throw BTCException("parsing error");
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

BitcoinEX::BTCException::BTCException(const std::string &msg)
    : std::runtime_error("Error: " + msg) {}
