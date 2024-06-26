#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
  AMateria *materia[4];
public:
  void learnMateria(AMateria *);
  AMateria *createMateria(std::string const &type);

  MateriaSource();
  MateriaSource(const MateriaSource &src);
  MateriaSource &operator=(const MateriaSource &src);
  ~MateriaSource();
};
