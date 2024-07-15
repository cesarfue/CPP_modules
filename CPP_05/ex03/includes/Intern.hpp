#pragma once
#include "AForm.hpp"
#include <iostream>

class Intern {
private:
public:
  AForm *makeForm(std::string type, std::string target);

  Intern();
  ~Intern();
  Intern &operator=(const Intern &);
  Intern(const Intern &);

  class InstructionsUnclearException : public std::exception {
  public:
    const char *what() const throw();
  };
};
