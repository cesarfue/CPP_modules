#include <cstdlib>
#include <iostream>
#include <string>

class ScalarConverter {
private:
  ScalarConverter();
  ScalarConverter &operator=(const ScalarConverter &);
  ScalarConverter(const ScalarConverter &);

public:
  static void Convert(const std::string &literal);
  ~ScalarConverter();
};
