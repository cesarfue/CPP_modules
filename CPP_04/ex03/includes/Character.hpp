#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
private:
  std::string _name;
  AMateria *_inventory[4];

public:
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);

  Character();
  Character(const std::string &name);
  Character(const Character &src);
  Character &operator=(const Character &src);
  ~Character();
  std::string const &getName() const;
};
