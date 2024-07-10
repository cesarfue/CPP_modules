#pragma once

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm {
private:
  const std::string _target;

public:
  void execute(Bureaucrat &executer);
  PresidentialPardonForm();
  PresidentialPardonForm(const std::string &target);
  ~PresidentialPardonForm();
  PresidentialPardonForm &operator=(const PresidentialPardonForm &);
  PresidentialPardonForm(PresidentialPardonForm &);
  std::string getTarget(void);
};

std::ostream &operator<<(std::ostream &out,
                         const PresidentialPardonForm &PresidentialPardonForm);
