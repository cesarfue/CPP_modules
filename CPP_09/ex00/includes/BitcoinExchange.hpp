#pragma once

#include <fstream>
#include <iostream>
#include <map>

class BitcoinEX {
private:
  std::map<std::string, float> data;

public:
  void parse_CSV(std::string csv);

  BitcoinEX();
  ~BitcoinEX();
  BitcoinEX(const BitcoinEX &src);
  BitcoinEX &operator=(const BitcoinEX &src);

  class InvalidFile : public std::exception {
  public:
    const char *what() const throw();
  };
};
