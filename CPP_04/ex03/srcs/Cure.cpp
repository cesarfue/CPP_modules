#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

AMateria *Cure::clone() { return new Cure(*this); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(void) : AMateria("cure") {
  std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria("cure") {
  std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria("cure") {
  std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src) {
  if (this != &src) {
    _type = src._type;
  }
  std::cout << "Cure assignment operator called" << std::endl;
  return (*this);
}

Cure::~Cure(void) { std::cout << "Cure destroyed" << std::endl; }
