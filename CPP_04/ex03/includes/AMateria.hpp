#pragma once

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria {
protected:
  std::string _type;

public:
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);

  AMateria(void);
  AMateria(std::string const &type);
  AMateria(const AMateria &src);
  AMateria &operator=(const AMateria &src);
  virtual ~AMateria(void);

  std::string const &getType(void) const;
};
