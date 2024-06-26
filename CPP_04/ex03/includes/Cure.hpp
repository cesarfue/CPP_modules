#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
private:
public:
  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);

  Cure(void);
  Cure(std::string const &type);
  Cure(const Cure &src);
  Cure &operator=(const Cure &src);
  ~Cure(void);
};
