#include "AMateria.hpp"
#include <iostream>

const int TRASH_CAPACITY = 5;

class GarbageMan {
private:
  AMateria *bin[TRASH_CAPACITY];
  int count;

public:
  void pick(AMateria *junk);
  GarbageMan(void);
  ~GarbageMan(void);
  GarbageMan(const GarbageMan &src);
  GarbageMan &operator=(const GarbageMan &src);
};
