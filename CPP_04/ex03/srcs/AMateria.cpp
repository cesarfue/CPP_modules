#include "AMateria.hpp"
#include <iostream>

AMateria *AMateria::clone() const { return (AMateria *)this; }

void AMateria::use(ICharacter &target) {
  std::cout << "AMateria " << this->_type << " used on " << target.getName()
            << std::endl;
}

AMateria::AMateria(void) : _type("") {
  // std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
  // std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src) : _type(src._type) {
  // std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src) {
  if (this != &src) {
    _type = src._type;
  }
  // std::cout << "AMateria assignment operator called" << std::endl;
  return (*this);
}

AMateria::~AMateria(void) {
  // std::cout << "AMateria destroyed" << std::endl;
}

std::string const &AMateria::getType(void) const { return this->_type; }
