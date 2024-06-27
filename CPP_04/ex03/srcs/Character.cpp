#include "Character.hpp"

void Character::equip(AMateria *m) {
  for (int i = 0; i < 4; i++) {
    if (this->_inventory[i] == NULL) {
      this->_inventory[i] = m;
      return;
    }
  }
  std::cout << this->getName()
            << " doesn't have any space left in his inventory" << std::endl;
}

void Character::unequip(int idx) {
  if (this->_inventory[idx] == NULL) {
    std::cout << this->getName() << " dropped some sand off his pockets"
              << std::endl;
    return;
  } else {
    std::cout << this->getName() << " dropped "
              << this->_inventory[idx]->getType() << " on the floor"
              << std::endl;
    this->_inventory[idx] = NULL;
  }
}

void Character::use(int idx, ICharacter &target) {
  if (this->_inventory[idx]) {
    this->_inventory[idx]->use(target);
    // std::cout << this->getName() << " used " <<
    // this->_inventory[idx]->getType()
    // << " on " << target.getName() << std::endl;
  } else {
    std::cout << this->getName() << " doesn't have any item here" << std::endl;
  }
}

Character::Character(void) : _name("") {
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
  // std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name) : _name(name) {
  for (int i = 0; i < 4; i++)
    this->_inventory[i] = NULL;
  // std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character &src) : _name(src._name) {
  for (int i = 0; i < 4; i++) {
    this->_inventory[i] = src._inventory[i];
  }
  // std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &src) {
  if (this != &src) {
    for (int i = 0; i < 4; i++) {
      delete this->_inventory[i];
      this->_inventory[i] = src._inventory[i];
    }
    _name = src._name;
    // std::cout << "Character assignment operator called" << std::endl;
  }
  return (*this);
}

Character::~Character(void) {
  for (int i = 0; i < 4; i++) {
    if (this->_inventory[i])
      delete this->_inventory[i];
  }
  // std::cout << "Character destroyed" << std::endl;
}

std::string const &Character::getName(void) const { return (this->_name); }
