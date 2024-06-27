#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
  // IMateriaSource *src = new MateriaSource();
  // src->learnMateria(new Ice());
  // src->learnMateria(new Cure());
  // ICharacter *me = new Character("me");
  // AMateria *tmp;
  // tmp = src->createMateria("ice");
  // me->equip(tmp);
  // tmp = src->createMateria("cure");
  // me->equip(tmp);
  // ICharacter *bob = new Character("bob");
  // me->use(0, *bob);
  // me->use(1, *bob);
  // delete bob;
  // delete me;
  // delete src;
  //
  AMateria **garbageCollector1;
  AMateria **garbageCollector2;

  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Cure());
  src->learnMateria(new Ice());
  ICharacter *me = new Character("me");
  AMateria *tmp;

  tmp = src->createMateria("ice");
  garbageCollector1 = &tmp;
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  garbageCollector2 = &tmp;
  ICharacter *bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  me->unequip(0);
  me->unequip(1);

  delete bob;
  delete me;
  delete src;
  // delete *garbageCollector1;
  // delete *garbageCollector2;
  return 0;
}
