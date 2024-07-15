#include "ScalarConverter.hpp"
#include <cctype>

void ScalarConverter::Convert(const std::string &literal) {
  std::string charVal = "";
  int intVal = 0;
  float floatVal = 0;
  double doubleVal = 0;

  if (literal.size() == 1 && std::isalpha(literal[0])
}
ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) {
  return *this;
}
ScalarConverter::ScalarConverter(const ScalarConverter &) {}
