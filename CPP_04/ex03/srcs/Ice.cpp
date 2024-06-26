#include "Ice.hpp"
#include <iostream>

AMateria *Ice::clone(void) { return new Ice(*this); }

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}

Ice::Ice(void) : AMateria("ice") {
  std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria("ice") {
  std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria("ice") {
  std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src) {
  if (this != &src) {
    _type = src._type;
  }
  std::cout << "Ice assignment operator called" << std::endl;
  return (*this);
}

Ice::~Ice(void) { std::cout << "Ice destroyed" << std::endl; }
