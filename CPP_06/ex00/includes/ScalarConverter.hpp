#include <cstdlib>
#include <iostream>
#include <string>

class ScalarConverter {
private:
public:
  static void Convert(const std::string &literal);
  ScalarConverter();
  ~ScalarConverter();
  ScalarConverter &operator=(const ScalarConverter &);
  ScalarConverter(const ScalarConverter &);
};
