#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) : _type("") {
  std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
  std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) : _type(src._type) {
  std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src) {
  if (this != &src) {
    _type = src._type;
  }
  std::cout << "AMateria assignment operator called" << std::endl;
  return (*this);
}

AMateria::~AMateria(void) { std::cout << "AMateria destroyed" << std::endl; }
