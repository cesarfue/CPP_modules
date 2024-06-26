#include "Character.hpp"
#include <iostream>

Character *Character::clone(void) { return new Character(*this); }

void Character::use(ICharacter &target) {}

Character::Character(void) : _name("") {
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
  std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const &name) : _name(name) {
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
  std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character &src) : _name(src._name) {
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = src._inventory[i];
  std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &src) {
  if (this != &src) {
    _name = src._name;
  }
  std::cout << "Character assignment operator called" << std::endl;
  return (*this);
}

Character::~Character(void) { std::cout << "Character destroyed" << std::endl; }
