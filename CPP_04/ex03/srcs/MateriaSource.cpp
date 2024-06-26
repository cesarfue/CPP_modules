#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *m) {
  for (int i = 0; i < 4; i++) {
    if (materia[i] == NULL) {
      materia[i] = m;
      std::cout << "MateriaSource learned " << m->getType() << std::endl;
      return;
    }
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  for (int i = 0; i < 4; i++)
    if (materia[i] && materia[i]->getType() == type)
      return materia[i]->clone();
  return NULL;
}

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < 4; i++)
    this->materia[i] = NULL;
  std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
  if (this != &src) {
    for (int i = 0; i < 4; i++) {
      if (this->materia[i])
        delete this->materia[i];
      this->materia[i] = src.materia[i];
    }
  }
  std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
  if (this != &src) {
    for (int i = 0; i < 4; i++) {
      if (this->materia[i])
        delete this->materia[i];
      this->materia[i] = src.materia[i];
    }
  }
  std::cout << "MateriaSource assignment operator called" << std::endl;
  return *this;
}

MateriaSource::~MateriaSource(void) {
  std::cout << "MateriaSource destroyed" << std::endl;
}
