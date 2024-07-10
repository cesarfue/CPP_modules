#pragma once

#include "AForm.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public AForm {
private:
  const std::string _target;

public:
  void execute(Bureaucrat const &executer);
  ShrubberyCreationForm();
  ShrubberyCreationForm(const std::string &target);
  ~ShrubberyCreationForm();
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
  ShrubberyCreationForm(ShrubberyCreationForm &);
  std::string getTarget(void);
};

std::ostream &operator<<(std::ostream &out,
                         const ShrubberyCreationForm &ShrubberyCreationForm);
