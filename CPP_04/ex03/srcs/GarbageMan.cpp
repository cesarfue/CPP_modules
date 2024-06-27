#include "GarbageMan.hpp"

void GarbageMan::pick(AMateria *junk) {
  if (count >= TRASH_CAPACITY)
    std::cout << "No space left in the bin" << std::endl;
  bin[count++] = junk;
}

GarbageMan::GarbageMan(void) : count(0) {
  for (int i = 0; i < TRASH_CAPACITY; i++) {
    this->bin[i] = NULL;
  }
};

GarbageMan::GarbageMan(const GarbageMan &src) {
  for (int i = 0; i < TRASH_CAPACITY; i++) {
    if (this->bin[i])
      delete this->bin[i];
    this->bin[i] = src.bin[i];
  }
}

GarbageMan &GarbageMan::operator=(const GarbageMan &src) {

  if (this != &src) {
    for (int i = 0; i < 4; i++) {
      if (this->bin[i])
        delete this->bin[i];
      this->bin[i] = src.bin[i];
    }
  }
  return (*this);
}

GarbageMan::~GarbageMan(void) {
  for (int i = 0; i < TRASH_CAPACITY; i++) {
    if (this->bin[i])
      delete this->bin[i];
  }
};
