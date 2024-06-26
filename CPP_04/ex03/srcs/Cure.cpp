#include "Cure.hpp"

AMateria *Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(void) : AMateria("cure") {
  // std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type) {
  // std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria("ice") {
  *this = src;
  // std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src) {
  if (this != &src) {
    _type = src._type;
  }
  // std::cout << "Cure assignment operator called" << std::endl;
  return (*this);
}

Cure::~Cure(void) {
  // std::cout << "Cure destroyed" << std::endl;
}
