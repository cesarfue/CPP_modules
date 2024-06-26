#pragma once

#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter {
public:
  virtual ~ICharacter(){};
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
  virtual std::string const &getName() const = 0;
};
