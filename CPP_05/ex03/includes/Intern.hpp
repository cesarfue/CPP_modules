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
};
