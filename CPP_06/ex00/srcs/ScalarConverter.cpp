#include "ScalarConverter.hpp"

void ScalarConverter::Convert(const std::string &literal) {
  std::string charVal = "";
  int intVal = 0;
  float floatVal = 0;
  double doubleVal = 0;

  if (std::isalpha(literal[0]) && literal.size() == 1) {
    charVal = literal[0];
    std::cout << "char: " << charVal << std::endl;
    std::cout << "int: " << static_cast<int>(charVal[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(charVal[0]) << ".0f"
              << std::endl;
    std::cout << "double: " << static_cast<double>(charVal[0]) << ".0"
              << std::endl;
    return;
  }

  intVal = std::atoi(literal.c_str());

  if (literal == "nan" || literal == "nanf" || literal == "-inf" ||
      literal == "-inff" || literal == "+inf" || literal == "+inff")
    charVal = "impossible";
  else if (charVal == "" &&
           ((intVal < 0 || intVal > 255) || !std::isprint(intVal)))
    charVal = "Non displayable";
  else
    charVal = "'" + std::string(1, static_cast<char>(intVal)) + "'";

  if (literal[literal.length() - 1] == 'f') {
    floatVal = std::atof(literal.c_str());
    doubleVal = static_cast<double>(floatVal);
  } else {
    doubleVal = std::atof(literal.c_str());
    floatVal = static_cast<float>(doubleVal);
  }

  std::cout << "char: " << charVal << std::endl;
  std::cout << "int: ";
  if (charVal == "impossible") {
    std::cout << "impossible" << std::endl;
  } else {
    std::cout << intVal << std::endl;
  }

  if (charVal == "impossible" && floatVal == 0) {
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
  } else if (charVal != "impossible" &&
             floatVal - static_cast<int>(floatVal) == 0) {
    std::cout << "float: " << floatVal << ".0f" << std::endl;
    std::cout << "double: " << doubleVal << ".0" << std::endl;
  } else {
    std::cout << "float: " << floatVal << "f" << std::endl;
    std::cout << "double: " << doubleVal << std::endl;
  }
  return;
}
ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) {
  return *this;
}
ScalarConverter::ScalarConverter(const ScalarConverter &) {}
