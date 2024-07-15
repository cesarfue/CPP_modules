#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void) {
  srand(time(0));
  int randVal = rand() % 3;
  if (randVal == 0)
    return new A;
  else if (randVal == 1)
    return new B;
  else
    return new C;
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "C" << std::endl;
}

void identify(Base &p) {
  try {
    (void)dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
  } catch (...) {
    try {
      (void)dynamic_cast<B &>(p);
      std::cout << "B" << std::endl;
    } catch (...) {
      std::cout << "C" << std::endl;
    }
  }
}

int main() {
  Base *lostAndFound;

  lostAndFound = generate();

  identify(lostAndFound);
  identify(lostAndFound);

  delete lostAndFound;
}
