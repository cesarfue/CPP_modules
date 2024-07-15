#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequest.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int main(void) {
  Bureaucrat *boss = new Bureaucrat("Mr Boss", 2);
  Bureaucrat *secretary = new Bureaucrat("Mr Secretary", 25);
  Intern *Jogh = new Intern;

  try {

    AForm *pardon = Jogh->makeForm("PresidentialPardonForm", "badGuy");
    secretary->signForm(*pardon);
    boss->executeForm(*pardon);
    delete pardon;

    std::cout << "\n" << std::endl;

    AForm *robotomy = Jogh->makeForm("RobotomyRequest", "badGuy");
    secretary->signForm(*robotomy);
    boss->executeForm(*robotomy);
    delete robotomy;

    std::cout << "\n" << std::endl;

    AForm *shrubbery = Jogh->makeForm("ShrubberyCreationForm", "badGuy");

    secretary->signForm(*shrubbery);
    boss->executeForm(*shrubbery);
    delete shrubbery;

    std::cout << "\n" << std::endl;

    AForm *bullshitForm = Jogh->makeForm("bullshitForm", "badGuy");
    secretary->signForm(*bullshitForm);
    boss->executeForm(*bullshitForm);
    delete bullshitForm;

  } catch (AForm::GradeTooHighException &e) {
    std::cout << e.what() << std::endl;
  } catch (AForm::GradeTooLowException &e) {
    std::cout << e.what() << std::endl;
  } catch (Intern::InstructionsUnclearException &e) {
    std::cout << e.what() << std::endl;
  }
  delete boss;
  delete secretary;
  delete Jogh;
  return EXIT_SUCCESS;
}
