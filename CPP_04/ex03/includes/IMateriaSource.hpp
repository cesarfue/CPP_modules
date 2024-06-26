#pragma once

#include "AMateria.hpp"

class IMateriaSource {
private:
public:
  virtual ~IMateriaSource(){};
  virtual void learnMateria(AMateria *) = 0;
  virtual AMateria *createMateria(std::string const &type) = 0;
};
