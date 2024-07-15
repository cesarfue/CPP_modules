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
}

Intern::Intern() {}
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &) {}
Intern::Intern(const Intern &) {}
