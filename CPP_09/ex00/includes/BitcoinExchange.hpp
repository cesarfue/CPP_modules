#pragma once

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

  class InvalidFile : public std::exception {
  public:
    const char *what() const throw();
  };
};
