#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequest.hpp"
#include "ShrubberyCreationForm.hpp"

AForm *makePresidentialPardonForm(std::string target) {
  return new PresidentialPardonForm(target);
}

AForm *makeShrubberyCreationForm(std::string target) {
  return new ShrubberyCreationForm(target);
}

AForm *makeRobotomyRequestForm(std::string target) {
  return new RobotomyRequest(target);
}

AForm *Intern::makeForm(std::string type, std::string target) {

  AForm *(*internChoice[])(std::string) = {makePresidentialPardonForm,
                                           makeShrubberyCreationForm,
                                           makeRobotomyRequestForm};
  std::string internForms[] = {"PresidentialPardonForm",
                               "ShrubberyCreationForm", "RobotomyRequest"};
  for (int i = 0; i < 3; ++i) {
    if (type == internForms[i])
      return internChoice[i](target);
  }
  throw Intern::InstructionsUnclearException();
  return NULL;
}

Intern::Intern() {}
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &) { return *this; }
Intern::Intern(const Intern &) {}

const char *Intern::InstructionsUnclearException::what() const throw() {
  return "Instructions Unclear : intern spilled coffee everywhere";
}
