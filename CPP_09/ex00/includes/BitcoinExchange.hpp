#pragma once

#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

class BitcoinEX {
private:
  std::map<std::string, float> data;

public:
  void parse_CSV(const std::string &csv);
  void print_value(std::ifstream &input);
  void printData() const;
  BitcoinEX();
  ~BitcoinEX();
  BitcoinEX(const BitcoinEX &src);
  BitcoinEX &operator=(const BitcoinEX &src);

public:
  class BTCException : public std::runtime_error {
  public:
    explicit BTCException(const std::string &msg);
  };
};
