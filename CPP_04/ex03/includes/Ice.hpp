#pragma once 

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {
  private: 
  public:
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);

    Ice(void);
    Ice(std::string const &type);
    Ice(const Ice &src);
    Ice &operator=(const Ice &src);
    ~Ice(void);
}; 
